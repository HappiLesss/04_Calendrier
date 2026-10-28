//
// Created by maxsc on 28.10.2026.
//
#include<iostream>
#include<cstdlib>
#include<string>
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
void affichage_calendrier(std::string& mois, int annee_saisie, int no_mois)
    {
    std::cout<<mois<<" - "<<annee_saisie<<std::endl;
    std::string jours_semaine ="MMJVSD";
    for (char c : jours_semaine) {
        std::cout<<c<<std::setw(5);
    }
    std::cout<<std::setw(0)<<std::endl;
    for (int i = 1; i <= calcul_jour_mois(no_mois, annee_saisie); i++) {
        std::cout<<i<<" "<<std::setw(5);
        if (i!=0&&i%7==0)
            std::cout<<std::endl;
    }

    }
    ;
