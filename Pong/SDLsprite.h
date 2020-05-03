#ifndef SDL_SPRITE_H_INCLUDED
#define SDL_SPRITE_H_INCLUDED
#pragma once

#include "SDLmanager.h"
#include "SDL2/SDL_image.h"
#include "SDLballe.h"


const char* CSPRITE = "Assets/sprites.png";
const int NBTILELARGEUR=5;
const int NBTILEHAUTEUR=3;
const int XBALLE=2;
const int YBALLE=0;

SDL_Surface *AppliquerImageSurface(const char* sChemin);
SDL_Texture *TextureSprites(SDLManager *pManager);

void AfficheBalle(tBalle bBalle,SDLManager *pManager);

#endif
