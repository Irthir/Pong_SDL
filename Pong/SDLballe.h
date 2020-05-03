#ifndef SDL_BALLE_H_INCLUDED
#define SDL_BALLE_H_INCLUDED
#pragma once

#include "SDLmanager.h"
#include "vecteur2D.h"
#include "SDLsprite.h"
#include "cercle.h"

typedef struct tBalle
{
    tCercle cCercle;
    tVecteur2D vDirection;
    SDL_Texture *pTexture;
}tBalle;

tBalle CreatBalle(tCercle cCercle,tVecteur2D vDirection,SDLManager *pManager);

#endif
