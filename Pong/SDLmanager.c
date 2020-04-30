#include "SDLmanager.h"

int initSDLManager(SDLManager *pManager)
//BUT : Initialiser le manager SDL comprenant le pointeur de fen�tre et celui du rendu.
//ENTREE : Le manager � initialis�, et les dimensions de la fen�tre en constantes pour le moment.
//SORTIE : La fen�tre cr��e et le manager initialis�.
{
    if(SDL_Init(SDL_INIT_EVERYTHING)>=0)//initialisation de SDL
    {
            //Creer le pointeur sur la reference de la fenetre Win32
            pManager->pWindow=SDL_CreateWindow("Pong",SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED,WINDOWL,WINDOWH,SDL_WINDOW_SHOWN);
            //Si la fenetre creee
            if(pManager->pWindow!=NULL)
            {
                //Creation du rendu encapsule dans la fenetre pointee par pWindow
                pManager->pRenderer=SDL_CreateRenderer(pManager->pWindow,-1,SDL_RENDERER_ACCELERATED|SDL_RENDERER_PRESENTVSYNC);
            }
    }
    else
    {
        printf("erreur dans l'appel de SDL_INIT : %s\n",SDL_GetError());
        return 0;
    }
    return 1;
}

int finSDLManager(SDLManager *pManager)
//BUT : Fermer le manager ainsi que la fen�tre.
//ENTREE : Le manager.
//SORTIE : Le manager ferm� et vid� et la fen�tre de jeu ferm�e.
{
    if(pManager!=NULL)
    {
         if(pManager->pRenderer!=NULL && pManager->pWindow!=NULL)
         {
            //SDL_DestroyRenderer(pManager->pRenderer);
            free(pManager->pRenderer);
            //SDL_DestroyWindow(pManager->pWindow);
            free(pManager->pWindow);
            pManager->pRenderer=NULL;
            pManager->pWindow=NULL;
            return 1;
        }
    }
    return 0;
}

