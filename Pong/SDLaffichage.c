#include "SDLaffichage.h"

void nettoieRendu(SDLManager *pManager)
//BUT : Nettoyer le rendu pour pouvoir modifier son contenu depuis une base saine.
//ENTREE : Le manager contenant le rendu � nettoyer.
//SORTIE : Le rendu nettoy�.
{
       SDL_SetRenderDrawColor(pManager->pRenderer,255,255,255,255);
       SDL_RenderClear(pManager->pRenderer);
}


void affichage(SDLManager *pManager)
//BUT : Afficher le rendu � l'�cran.
//ENTREE : Le manager comprenant le rendu.
//SORTIE : Le rendu affich� � l'�cran.
{
    SDL_RenderPresent(pManager->pRenderer);
}
