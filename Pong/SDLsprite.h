#ifndef SDL_SPRITE_H_INCLUDED
#define SDL_SPRITE_H_INCLUDED
#pragma once

#include "SDLmanager.h"
#include "SDL2/SDL_image.h"


const char* CSPRITE = "Assets/sprites.png";
//const int NBTILELARGEUR ;

SDL_Surface *AppliquerImageSurface(const char* sChemin);
SDL_Texture *TextureSprites(SDLManager *pManager);

#endif
