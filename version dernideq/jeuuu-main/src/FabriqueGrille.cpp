#include "FabriqueGrille.h"
#include "ChargeurFormatTexte.h"
#include "ChargeurInteraction.h"
#include "ChargeurFormatJson.h"

#include <iostream>
#include <string>

Grille* FabriqueGrille::creerDepuisChoix(int choix) {
    if (choix == 1) {
        std::string chemin;
        std::cout << "Chemin du fichier (ex: grilles/5_4.kakuro) : ";
        std::getline(std::cin, chemin);
        return ChargeurFormatTexte::chargerDepuisFichier(chemin);
    } else if (choix == 2) {
        return ChargeurInteraction::chargerDepuisConsole();
    } else if (choix == 3) {
        std::string chemin;
        std::cout << "Chemin du fichier JSON (ex: grilles/5_4.json) : ";
        std::getline(std::cin, chemin);
        return ChargeurFormatJSON::chargerDepuisFichier(chemin);
    } else {
        std::cerr << "❌ Choix invalide." << std::endl;
        return nullptr;
    }
}
