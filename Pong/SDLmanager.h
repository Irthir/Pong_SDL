#ifndef SDL_MANAGER_H_INCLUDED
#define SDL_MANAGER_H_INCLUDED
#pragma once

#include "SDL2/SDL.h"
#include <stdio.h>
#include <stdlib.h>

#define WINDOWH 900
#define WINDOWL 1200

typedef struct SDLManager
{
     SDL_Window *pWindow;
     SDL_Renderer *pRenderer;
}SDLManager;

extern int initSDLManager(SDLManager *pManager);
extern int finSDLManager(SDLManager *pManager);

#endif
