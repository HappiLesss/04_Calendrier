//
// Created by maxsc on 28.10.2026.
//
#include<iostream>
#include<cstdlib>
#include<string>
#include <array>
#include"affichage.h"
#include <iomanip>

#include"date.h"
void message_saisi(int annee_min, int annee_max) {
    std::cout<<"entrer une valeur ["<<annee_min<<" - "<<annee_max<<"]"<<std::endl;
}

void check_saisie(int annee_saisie, int annee_min, int annee_max) {
    if (annee_saisie < annee_min || annee_saisie > annee_max)
    {
        std::cout<<"/!\\ erreur de saisie \n";
    }
}
void affichage_calendrier(int annee_saisie) {
    std::array<std::string,12> mois{"Janvier","Février", "Mars","Avril","Mai","Juin","Juillet","Aout","Septembre","Octobre","Novembre","Decembre"};
    int no_mois = 0;
    int compteur = 0;
    const int setwidth = 11;
    for (std::string mois_affichage : mois) {
        no_mois++;
        std::cout<<mois_affichage<<" - "<<annee_saisie<<std::endl;
        std::string jours_semaine ="LMMJVSD";
        for (char c : jours_semaine) {
            std::cout<<c<<std::setw(setwidth);
        }
        std::cout<<std::setw(0)<<std::endl;
        for (int i = 1; i <= calcul_jour_mois(no_mois, annee_saisie); i++) {
            if (i==1) {
                int width = setwidth*compteur+1;
                std::cout<<std::setw(width);
                }
            int n = setwidth - (sizeof i%2);
            std::cout<<i<<std::setw(n);
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
    ;
