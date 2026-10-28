//
// Created by maxsc on 28.10.2026.
//
#include <iostream>
#include <cstdlib>
#include <string>
#include <array>
#include "affichage.h"
const int annee_min = 1800;
const int annee_max = 2100;
int annee_saisie = 0;
int main() {
    do {
        message_saisi(annee_min, annee_max);
        std::cin>>annee_saisie;
        check_saisie(annee_saisie, annee_min, annee_max);
    }
    while (annee_saisie<annee_min || annee_saisie > annee_max);
    std::array<std::string,12> mois{"Janvier","Février", "Mars","Avril","Mai","Juin","Juillet","Aout","Septembre","Octobre","Novembre","Decembre"};
    int no_mois = 0;
    for (std::string mois_affichage : mois) {
        no_mois++;
        affichage_calendrier(mois_affichage, annee_saisie,no_mois );
    }
    return EXIT_SUCCESS;
}