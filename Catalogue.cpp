using namespace std;
#include <iostream>

#include "Catalogue.h"
#include "ConteneurTrajet.cpp"
#include "TrajetSimple.cpp"
#include "TrajetCompose.cpp"

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

void Catalogue::SaisirTrajetCompose()
{   
    int nombreDeTrajets;
    cout<<"Combien de trajets composent le trajet compose ?"<<endl;
    cin >> nombreDeTrajets;
    ConteneurTrajet* ctn = new ConteneurTrajet(nombreDeTrajets);

    for(int index = 0; index < nombreDeTrajets; index++)
    {
        char* prov = new char[100];
        char* dest = new char[100];
        transport moyen;
        cout << "Trajet " << index + 1 << ":" << endl;
        cout << "Provenance : ";
        cin >> prov;
        cout << "Destination : ";
        cin >> dest;
        cout << "Moyen de transport (0: auto, 1: bus, 2: avion, 3: train, 4: bateau) : " << endl;
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
        ctn->Ajouter(new TrajetSimple(prov, dest, moyen));
    }

    conteneur->Ajouter(new TrajetCompose(ctn));
}
