using namespace std;
#include <iostream>

#include "TrajetCompose.h"

TrajetCompose::TrajetCompose(ConteneurTrajet* conteneur)
{
    this->conteneur = conteneur;
}

void TrajetCompose::Afficher() const
{
    cout << "Trajet compose : " << endl;
    Trajet** trajets = conteneur->GetTrajets();
    for (int i = 0; i < conteneur->GetLongueurCourante(); i++)
    {
        trajets[i]->Afficher();
    }
}

TrajetCompose::~TrajetCompose()
{
    delete conteneur;
}