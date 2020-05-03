#ifndef SDL_JEU_H_INCLUDED
#define SDL_JEU_H_INCLUDED
#pragma once

#include "SDLmanager.h"
#include "SDLinput.h"
#include "SDLballe.h"
#include "SDLsprite.h"
#include "SDLraquette.h"

extern int sdljeu();
extern void AfficheBalle(tBalle bBalle, SDLManager *pManager);
void AfficheRaquette(tRaquette rRaquette, SDLManager *pManager);

#endif
