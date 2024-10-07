#if ! defined ( TRAJETCOMPOSE_H )
#define TRAJETCOMPOSE_H

#include "Trajet.h"
#include "ConteneurTrajet.h"

class TrajetCompose : public Trajet
{

public:
    TrajetCompose(ConteneurTrajet* conteneur);
    virtual void Afficher() const;

protected:
    ConteneurTrajet* conteneur;
};

#endif // TRAJETCOMPOSE_H
