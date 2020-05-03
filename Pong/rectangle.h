#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED
#pragma once

#include "point.h"

typedef struct tRect
//Un rectangle est un point d'origine placé en haut à gauche et deux longueur, la largeur et la hauteur en pixel.
{
	tPoint pOrigine;
    int nHauteur;
    int nLargeur;
}tRect;

tRect CreatRect(tPoint pOrigine,int nHauteur,int nLargeur);

#endif
