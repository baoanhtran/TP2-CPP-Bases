#if ! defined ( CATALOGUE_H )
#define CATALOGUE_H

#include <iostream>
#include "Trajet.h"
#include "TrajetSimple.h"
#include "TrajetCompose.h"
#include "ConteneurTrajet.h"

class Catalogue
{

public:
    Catalogue();
    virtual ~Catalogue();
    virtual void Afficher() const;
    virtual void SaisirTrajetSimple();
    // virtual Trajet* Rechercher(char* prov, char* dest) const;
protected:
    ConteneurTrajet* conteneur;
};

#endif // CATALOGUE_H
