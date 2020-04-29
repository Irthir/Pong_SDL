#include "SDLaffichage.h"

void nettoieEcran(SDLManager *pManager)
{
       SDL_SetRenderDrawColor(pManager->pRenderer,255,255,255,255);
       SDL_RenderClear(pManager->pRenderer);
}


void affichage(SDLManager *pManager)
{
    SDL_RenderPresent(pManager->pRenderer);
}
