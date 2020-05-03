#ifndef VECTEUR_2D_H_INCLUDED
#define VECTEUR_2D_H_INCLUDED
#pragma once

#include "segment.h"

typedef struct tVecteur2D
{
    int nDirectionX;
    int nDirectionY;
}tVecteur2D;

extern tVecteur2D CreatVecteur2D(int nDirectionX, int nDirectionY);
/*extern void tVecteur2DSetvA(tVecteur2D *pVecteur, tSegment sSegment);
extern void tVecteur2DSetvB(tVecteur2D *pVecteur, tSegment sSegment);
extern tSegment tVecteur2DGetvA(tVecteur2D vVecteur);
extern tSegment tVecteur2DGetvA(tVecteur2D vVecteur);*/

#endif
