#include "SDLinput.h"


int inputSDL(SDL_Event Evenement,int nFonctionnement)
{
    while (SDL_PollEvent(&Evenement)) //Gestion des évènements.
    {
        switch (Evenement.type)
        {
            case SDL_KEYDOWN :
                switch (Evenement.key.keysym.sym)
                {
                    case SDLK_ESCAPE :
                        printf("Touche echap pressee fin du jeu.\n");
                        nFonctionnement=0;
                        break;
                    default :
                        break;
                }
            default :
                SDL_FlushEvents(SDL_FIRSTEVENT,SDL_LASTEVENT);
                break;
        }
    }
    return nFonctionnement;
}
