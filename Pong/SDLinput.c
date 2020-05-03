#include "SDLinput.h"

const int VITESSEJOUEUR=15;

int inputSDL(SDL_Event Evenement,int nFonctionnement,tRaquette *rRaquetteJ1)
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
                    case SDLK_UP :
                        rRaquetteJ1->rRectangle.pOrigine.nY=rRaquetteJ1->rRectangle.pOrigine.nY-VITESSEJOUEUR;
                        break;
                    case SDLK_DOWN :
                        rRaquetteJ1->rRectangle.pOrigine.nY=rRaquetteJ1->rRectangle.pOrigine.nY+VITESSEJOUEUR;
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
