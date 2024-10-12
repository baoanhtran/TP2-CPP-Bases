#if ! defined ( TRAJETSIMPLE_H )
#define TRAJETSIMPLE_H

#include "Trajet.h"

enum transport {AUTO, BUS, AVION, TRAIN, BATEAU};

class TrajetSimple : public Trajet
{

public:
    TrajetSimple(const char* prov, const char* dest, transport moyen);
    virtual void Afficher() const;
    virtual char* GetProvenance() const;
    virtual char* GetDestination() const;
    virtual ~TrajetSimple();
protected:
    char* provenance;
    char* destination;
    transport moyenTransport;
};

#endif // TRAJETSIMPLE_H
