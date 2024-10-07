using namespace std;
#include <iostream>

#include "ConteneurTrajet.h"

ConteneurTrajet::ConteneurTrajet(int taille)
{
    trajets = new Trajet*[taille];
    longueurCourante = 0;
    longueurMax = taille;
}

ConteneurTrajet::~ConteneurTrajet()
{
    for (int i = 0; i < longueurCourante; i++)
    {
        delete trajets[i];
    }
    delete[] trajets;
}

bool ConteneurTrajet::Ajouter(Trajet* trajet)
{
    if (longueurCourante < longueurMax)
    {
        trajets[longueurCourante] = trajet;
        longueurCourante++;
        return true;
    }
    return false;
}

Trajet** ConteneurTrajet::GetTrajets() const
{
    return trajets;
}

int ConteneurTrajet::GetLongueurCourante() const
{
    return longueurCourante;
}

int ConteneurTrajet::GetLongueurMax() const
{
    return longueurMax;
}