#include "SDLinput.h"


int inputSDL(SDL_Event Evenement,int nFonctionnement)
//BUT : G�rer les �v�nements du jeu.
//ENTREE : Les �v�nements et les param�tres � modifier et � renvoyer en fonction des �v�nements.
//SORTIE : Les param�tres modifi�s et renvoy�s en fonction des �v�nements.
{
    while (SDL_PollEvent(&Evenement)) //Gestion des �v�nements.
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
