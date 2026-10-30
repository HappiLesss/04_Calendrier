//
// Created by maxsc on 28.10.2026.
//
#include <iostream>
#include <cstdlib>
#include <string>
#include <array>
#include "affichage.h"
#include "date.h"
const int annee_min = 1800;
const int annee_max = 2100;
int annee_saisie = 0;
char saisie_user;
int main() {
    do {
        do {
            message_saisi(annee_min, annee_max);
            std::cin>>annee_saisie;
            check_saisie(annee_saisie, annee_min, annee_max);
        }
        while (annee_saisie<annee_min || annee_saisie > annee_max);
        affichage_calendrier(annee_saisie,premier_jour_annee(annee_saisie, annee_min));
        do
        {
            message_recommencer();
            std::cin>>saisie_user;
        }
        while (saisie_user != 'N' && saisie_user != 'O');
    }
    while (saisie_user == 'O');

    return EXIT_SUCCESS;
}