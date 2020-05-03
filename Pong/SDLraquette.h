#ifndef SDL_RAQUETTE_H_INCLUDED
#define SDL_RAQUETTE_H_INCLUDED
#pragma once

#include "SDLmanager.h"
#include "SDLsprite.h"
#include "rectangle.h"

typedef struct tRaquette
{
    tRect rRectangle;
    SDL_Texture *pTexture;
}tRaquette;

tRaquette CreatRaquette(tRect rRectangle,SDLManager *pManager,int nJoueur);

#endif
