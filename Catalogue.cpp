using namespace std;
#include <iostream>

#include "Catalogue.h"
#include "ConteneurTrajet.cpp"
#include "TrajetSimple.cpp"

Catalogue::Catalogue()
{
    conteneur = new ConteneurTrajet(10);
}

Catalogue::~Catalogue()
{
    delete conteneur;
}

void Catalogue::Afficher() const
{
    Trajet** trajets = conteneur->GetTrajets();
    for (int i = 0; i < conteneur->GetLongueurCourante(); i++)
    {
        trajets[i]->Afficher();
    }
}

void Catalogue::SaisirTrajetSimple()
{
    char* prov = new char[100];
    char* dest = new char[100];
    transport moyen;
    cout << "Provenance : ";
    cin >> prov;
    cout << "Destination : ";
    cin >> dest;
    cout << "Moyen de transport (0: auto, 1: bus, 2: avion, 3: train, 4: bateau) : ";
    int choix;
    cin >> choix;
    
    while (1) {
        if (choix == 0) {
            moyen = AUTO;
            break;
        } else if (choix == 1) {
            moyen = BUS;
            break;
        } else if (choix == 2) {
            moyen = AVION;
            break;
        } else if (choix == 3) {
            moyen = TRAIN;
            break;
        } else if (choix == 4) {
            moyen = BATEAU;
            break;
        } else {
            cout << "Moyen de transport invalide" << endl;
            cout << "Moyen de transport (0: auto, 1: bus, 2: avion, 3: train, 4: bateau) : ";
            cin >> choix;
        }
    }
    
    conteneur->Ajouter(new TrajetSimple(prov, dest, moyen));
}
