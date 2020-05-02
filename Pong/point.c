#include "point.h"

tPoint CreatPoint(int nX,int nY)
//BUT : Cr�er un point � partir de ses coordonn�es.
//ENTREE : Les coordonn�es du point.
//SORTIE : Le point de type tPoint cr��.
{
    tPoint pPoint;
    pPoint.nX=nX;
    pPoint.nY=nY;
    return pPoint;
}

void tPointSetX(tPoint *pPoint, int nX)
//BUT : Changer la valeur en X d'un point.
//ENTREE : Le point et un entier qui sera la valeur en X.
//SORTIE : Le point actualis�.
{
    pPoint->nX=nX;
}

void tPointSetY(tPoint *pPoint, int nY)
//BUT : Changer la valeur en Y d'un point.
//ENTREE : Le point et un entier qui sera la valeur en Y.
//SORTIE : Le point actualis�.
{
    pPoint->nY=nY;
}

int tPointGetX(tPoint pPoint)
//BUT : R�cup�rer la valeur en X d'un point.
//ENTREE : Le point dont on veut la valeur en X.
//SORTIE : La valeur en X du point.
{
    return pPoint.nX;
}

int tPointGetY(tPoint pPoint)
//BUT : R�cup�rer la valeur en Y d'un point.
//ENTREE : Le point dont on veut la valeur en Y.
//SORTIE : La valeur en X du point.
{
    return pPoint.nY;
}
