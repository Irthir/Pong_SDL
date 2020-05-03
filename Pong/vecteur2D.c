#include "vecteur2D.h"

tVecteur2D CreatVecteur2D(int nDirectionX, int nDirectionY)
{
    tVecteur2D vVecteur;
    vVecteur.nDirectionX=nDirectionX;
    vVecteur.nDirectionY=nDirectionY;
    return vVecteur;
}

/*void tVecteur2DSetvA(tVecteur2D *pVecteur, tSegment sSegment)
{
    pVecteur->vA=sSegment;
}

void tVecteur2DSetvB(tVecteur2D *pVecteur, tSegment sSegment)
{
    pVecteur->vB=sSegment;
}

tSegment tVecteur2DGetvA(tVecteur2D vVecteur)
{
    return vVecteur.vA;
}

tSegment tVecteur2DGetvB(tVecteur2D vVecteur)
{
    return vVecteur.vB;
}*/
