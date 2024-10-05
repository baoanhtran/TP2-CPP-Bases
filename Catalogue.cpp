using namespace std;
#include <iostream>

#include "Catalogue.h"
#include "ConteneurTrajet.h"

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