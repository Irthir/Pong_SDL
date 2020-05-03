#ifndef SDL_SPRITE_H_INCLUDED
#define SDL_SPRITE_H_INCLUDED
#pragma once

#include "SDLmanager.h"
#include "SDL2/SDL_image.h"
#include "SDLballe.h"


SDL_Surface *AppliquerImageSurface(const char* sChemin);
SDL_Texture *TextureSprites(SDLManager *pManager);

SDL_Texture *CreatTextureBalle(SDLManager *pManager);
SDL_Texture *CreatTextureRaquette(SDLManager *pManager,int nJoueur);

#endif
