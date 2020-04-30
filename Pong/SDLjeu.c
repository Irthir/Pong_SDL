#include "SDLjeu.h"


int sdljeu()
//BUT : G�rer les appels de l'affichage et des inputs SDL tout au long du fonctionnement du jeu.
//ENTREE : Les �v�nements SDL.
//SORTIE : Les divers appels en fonction des �v�nements.
{
    SDLManager *pManager=malloc(sizeof(SDLManager));
    if (initSDLManager(pManager)==1)
    {
        /*D�claration des variables de rafraichissement.*/
        const int FPS=60; //On veut 60 FPS.
        unsigned long int nTempsActuel=0;
        unsigned long int nTempsPrecedent=0;
        int nDeltaTime = div(1000,FPS).quot;

        /*D�claration des variables de fonctionnement.*/
        int nFonctionnement=1;
        SDL_Event Evenement;

        while (nFonctionnement==1)
        {
            nTempsActuel = SDL_GetTicks(); //SDL_GetTicks renvoie le nombre de millisecondes depuis que la SDL a �t� initialis�.
            if (nTempsActuel > nTempsPrecedent + nDeltaTime)
            //On effectue nos actions � chaque frame.
            {
                nTempsPrecedent = nTempsActuel;
                nFonctionnement=inputSDL(Evenement,nFonctionnement);
            }
        }
        printf("Fin du jeu.\n");
        finSDLManager(pManager);
        return 0;
    }
    else
    {
        return 1;
    }
}
