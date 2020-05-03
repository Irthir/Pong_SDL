#ifndef SDL_BALLE_H_INCLUDED
#define SDL_BALLE_H_INCLUDED
#pragma once

#include "SDLmanager.h"
#include "vecteur2D.h"

typedef struct tBalle
{
    tPoint pPosition;
    tVecteur2D vDirection;
}tBalle;

tBalle CreatBalle(tPoint pPosition,tVecteur2D vDirection);

#endif
