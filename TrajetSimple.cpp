using namespace std;
#include <iostream>
#include <cstring>

#include "TrajetSimple.h"

TrajetSimple::TrajetSimple(const char* depart, const char* arrivee, const transport moyen)
{
    provenance = new char[strlen(depart) + 1];
    strcpy(provenance, depart);

    destination = new char[strlen(arrivee) + 1];
    strcpy(destination, arrivee);

    moyenTransport = moyen;
}

void TrajetSimple::Afficher() const
{
    cout << "Trajet simple de " << provenance << " à " << destination << " en ";
    switch (moyenTransport)
    {
        case AUTO:
            cout << "auto";
            break;
        case BUS:
            cout << "bus";
            break;
        case AVION:
            cout << "avion";
            break;
        case TRAIN:
            cout << "train";
            break;
        case BATEAU:
            cout << "bateau";
            break;
    }
    cout << endl;
}

char* TrajetSimple::GetProvenance() const
{
    return provenance;
}

char* TrajetSimple::GetDestination() const
{
    return destination;
}