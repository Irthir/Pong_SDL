#include "cercle.h"

tCercle CreatCercle(tPoint pCentre,int nRayon)
//BUT : Créer un cercle à partir d'un point et de son rayon.
//ENTREE : Le point centrale et le rayon.
//SORTIE : Le cercle de type tCercle créé.
{
    tCercle cCercle;
    cCercle.pCentre=pCentre;
    cCercle.nRayon=nRayon;
    return cCercle;
}

void tCercleSetCentre(tCercle *pCercle, tPoint pCentre)
//BUT : Changer le centre d'un cercle.
//ENTREE : Le cercle à modifier et le point qui sera son nouveau centre.
//SORTIE : Le cercle actualisé.
{
    pCercle->pCentre=pCentre;
}

void tCercleSetRayon(tCercle *pCercle, int nRayon)
//BUT : Changer le rayon d'un cercle.
//ENTREE : Le cercle à modifier et la valeur de son nouveau rayon.
//SORTIE : Le cercle actualisé.
{
    pCercle->nRayon=nRayon;
}

tPoint tCercleGetCentre(tCercle cCercle)
//BUT : Récupérer le point central d'un cercle.
//ENTREE : Le cercle dont on veut le centre.
//SORTIE : Le point central du cercle.
{
    return cCercle.pCentre;
}

int tCercleGetRayon(tCercle cCercle)
//BUT : Récupérer le rayon d'un cercle.
//ENTREE : Le cercle dont on veut le rayon.
//SORTIE : Le rayon du cercle.
{
    return cCercle.nRayon;
}
