#if ! defined ( CONTENEURTRAJET_H )
#define CONTENEURTRAJET_H

#include "Trajet.h"

class ConteneurTrajet
{

public:
    ConteneurTrajet(int taille);
    virtual ~ConteneurTrajet();
    virtual bool Ajouter(Trajet* trajet);
    // virtual bool Ajuster(int delta);
    virtual Trajet** GetTrajets() const;
    virtual int GetLongueurCourante() const;
    virtual int GetLongueurMax() const;
protected:
    Trajet** trajets;
    int longueurCourante;
    int longueurMax;
};

#endif // CONTENEURTRAJET_H
