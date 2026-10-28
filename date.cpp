//
// Created by maxsc on 28.10.2026.
//
#include "date.h"
#include <iostream>
#include <cstdlib>
#include <array>
#include "affichage.h"
bool anneebisextile(int annee_saisie) {
    return annee_saisie %400 ==0 ||(annee_saisie %4==0&&annee_saisie %100!=0);
}
int calcul_jour_mois(int mois, int annee_saisie) {
    const int jours_30 = 30;
    const int jours_31 = 31;
    const int jours_fevrier = anneebisextile(annee_saisie) ? 29 : 28;
    switch (mois) {
        case 1 :
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            return jours_31;
        case 4:
        case 6:
        case 9:
        case 11:
            return jours_30;
        default:
            return jours_fevrier;
    }
}




