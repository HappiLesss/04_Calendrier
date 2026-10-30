//
// Created by maxsc on 28.10.2026.
//

#ifndef INC_04_CALENDRIER_AFFICHAGE_H
#define INC_04_CALENDRIER_AFFICHAGE_H
void message_recommencer();
void message_saisi(int annee_min, int annee_max);
void check_saisie(int annee_saisie, int annee_min, int annee_max);
void affichage_calendrier(int annee_saisie, int premir_jour);
int set_largeur_affichage(int width, int jours, int compteur);
#endif //INC_04_CALENDRIER_AFFICHAGE_H
