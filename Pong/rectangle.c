#include "rectangle.h"


tRect CreatRect(tPoint pOrigine,int nHauteur,int nLargeur)
{
    tRect rRect;
    rRect.pOrigine=pOrigine;
    rRect.nHauteur=nHauteur;
    rRect.nLargeur=nLargeur;
    return rRect;
}
