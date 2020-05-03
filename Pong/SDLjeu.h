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
extern void AfficheRaquette(tRaquette rRaquette, SDLManager *pManager);

extern int Collision(tBalle bBalle, tRaquette rRaquette);
extern void CollisionMurBalle (tBalle *bBalle,SDL_Rect rRenderRect);
extern void CollisionMurJoueur(tRaquette *rRaquette,SDL_Rect rRenderRect);

extern void MouvementBalle(tBalle *bBalle);
extern void MouvementIA(tRaquette *rRaquette,tBalle bBalle);

extern void ReapparitionBalle(tBalle *bBalle, int nJoueur,SDL_Rect rRenderRect);

#endif
