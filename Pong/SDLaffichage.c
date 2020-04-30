#include "SDLaffichage.h"

void nettoieRendu(SDLManager *pManager)
//BUT : Nettoyer le rendu pour pouvoir modifier son contenu depuis une base saine.
//ENTREE : Le manager contenant le rendu à nettoyer.
//SORTIE : Le rendu nettoyé.
{
       SDL_SetRenderDrawColor(pManager->pRenderer,255,255,255,255);
       SDL_RenderClear(pManager->pRenderer);
}


void affichage(SDLManager *pManager)
//BUT : Afficher le rendu à l'écran.
//ENTREE : Le manager comprenant le rendu.
//SORTIE : Le rendu affiché à l'écran.
{
    SDL_RenderPresent(pManager->pRenderer);
}
