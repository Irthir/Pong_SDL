#ifndef SDL_SPRITE_H_INCLUDED
#define SDL_SPRITE_H_INCLUDED
#pragma once

#include "SDLmanager.h"
#include "SDL2/SDL_image.h"
#include "SDLballe.h"


SDL_Surface *AppliquerImageSurface(const char* sChemin);
SDL_Texture *TextureSprites(SDLManager *pManager);

//void AfficheBalle(tBalle bBalle,SDLManager *pManager);
SDL_Texture *CreatTextureBalle(SDLManager *pManager);

#endif
