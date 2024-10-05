#if ! defined ( CATALOGUE_H )
#define CATALOGUE_H

#include "Trajet.h"
#include "ConteneurTrajet.h"

class Catalogue
{

public:
    Catalogue();
    virtual ~Catalogue();
    virtual void Afficher() const;
    virtual void Ajouter(Trajet* trajet);
    virtual Trajet* Rechercher(char* prov, char* dest) const;
protected:
    ConteneurTrajet* conteneur;
};

#endif // CATALOGUE_H
