//
// Created by maxsc on 28.10.2026.
//
#include<iostream>
#include<cstdlib>
#include<string>
#include <array>
#include <iomanip>
#include"affichage.h"
#include"date.h"

void message_saisi(int annee_min, int annee_max) {
    std::cout<<"entrer une valeur ["<<annee_min<<" - "<<annee_max<<"]"<<std::endl;
}
void message_recommencer() {
    std::cout<<"voulez-vous continuer [O|N] : ";
}

void check_saisie(int annee_saisie, int annee_min, int annee_max) {
    if (annee_saisie < annee_min || annee_saisie > annee_max)
    {
        std::cout<<"/!\\ erreur de saisie \n";
    }
}
void affichage_calendrier(int annee_saisie, int premier_jour)
{
    //Liste des mois de l'année
    std::array<std::string,12> mois{"Janvier","Février", "Mars","Avril","Mai","Juin","Juillet","Aout","Septembre","Octobre","Novembre","Decembre"};
    //Liste des jours de la semaine
    std::string jours_semaine ="LMMJVSD";
    int no_mois = 0;
    //Compteur pour déterminer le nombre de jours affiché
    int compteur = premier_jour;
    //Paramètre pour définir la largeur
    int setwidth = 11;
    //Première boucle pour afficher tous les mois de l'année
    for (std::string mois_affichage : mois)
    {
        no_mois++;
        std::cout<<mois_affichage<<" - "<<annee_saisie<<std::endl;
        //Pour chaque mois, on affiche les jours de la semaine
        for (char c : jours_semaine) {
            std::cout<<c<<std::setw(setwidth);
        }
        //Retour à la ligne pour afficher les jours
        std::cout<<std::setw(0)<<std::endl;
        //Pour chaque mois, on calcul le nombre de jour présent dans le mois
        for (int i = 1; i <= calcul_jour_mois(no_mois, annee_saisie); i++)
        {
            //Pour le premier jour, on va le décaler en fonction du dernier jour du mois précédent
            if (i == 1)
            {
                std::cout<<std::setw(set_largeur_affichage(setwidth, i, compteur))<<i<<std::setw(set_largeur_affichage(setwidth, 2, compteur));
            }
            //Réglage de la largeur pour les chiffres suivants
            else
            {
                std::cout<<i<<std::setw(set_largeur_affichage(setwidth, i, compteur));
            }
            //Dés que nous arrivons au 7ème jour de la semaine, nous faisons un retour à la ligne
            if (compteur!=0&&compteur%6==0) {
                std::cout<<std::setw(0)<<std::endl;
                compteur =0;
            }
            else
            {
                compteur++;
            }
        }
        std::cout<<std::setw(0)<<std::endl;
    }

}
    int set_largeur_affichage(int setwidth, int jours, int compteur)
    {
        //si le chiffre affiché est 9, nous augmentons la largeur de 1 vu que le nombre aura deux chiffres
        return jours ==9 ? setwidth+1 : (jours==1 ? setwidth*compteur+1 : setwidth);
    }
    ;
