#include "SDLinput.h"


int inputSDL(SDL_Event Evenement,int nFonctionnement)
//BUT : Gérer les évènements du jeu.
//ENTREE : Les évènements et les paramètres à modifier et à renvoyer en fonction des évènements.
//SORTIE : Les paramètres modifiés et renvoyés en fonction des évènements.
{
    while (SDL_PollEvent(&Evenement)) //Gestion des évènements.
    {
        switch (Evenement.type)
        {
            case SDL_KEYDOWN :
                switch (Evenement.key.keysym.sym)
                {
                    case SDLK_ESCAPE :
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
