#include "SDLjeu.h"


int sdljeu()
{
    SDLManager *pManager=malloc(sizeof(SDLManager));
    if (initSDLManager(pManager)==1)
    {
        /*Déclaration des variables de rafraichissement.*/
        const int FPS=60; //On veut 60 FPS.
        unsigned long int nTempsActuel=0;
        unsigned long int nTempsPrecedent=0;
        int nDeltaTime = div(1000,FPS).quot;

        /*Déclaration des variables de fonctionnement.*/
        int nFonctionnement=1;
        SDL_Event Evenement;

        while (nFonctionnement==1)
        {
            nTempsActuel = SDL_GetTicks(); //SDL_GetTicks renvoie le nombre de millisecondes depuis que la SDL a été initialisé.
            if (nTempsActuel > nTempsPrecedent + nDeltaTime)
            //On effectue nos actions à chaque frame.
            {
                nTempsPrecedent = nTempsActuel;
                nFonctionnement=inputSDL(Evenement,nFonctionnement);
            }
        }
        finSDLManager(pManager);
        return 0;
    }
    else
    {
        return 1;
    }
}
