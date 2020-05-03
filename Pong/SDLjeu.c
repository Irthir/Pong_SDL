#include "SDLjeu.h"


int sdljeu()
//BUT : Gérer les appels de l'affichage et des inputs SDL tout au long du fonctionnement du jeu.
//ENTREE : Les évènements SDL.
//SORTIE : Les divers appels en fonction des évènements.
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


        tBalle bBalle=CreatBalle(CreatCercle(CreatPoint(200,200),50),CreatVecteur2D(CreatSegment(CreatPoint(0,0),CreatPoint(0,0)),CreatSegment(CreatPoint(0,0),CreatPoint(0,0))),pManager);
        tRaquette rRaquetteJ1=CreatRaquette(CreatRect(CreatPoint(0,0),200,40),pManager,1);
        tRaquette rRaquetteJ2=CreatRaquette(CreatRect(CreatPoint(400,0),200,40),pManager,2);

        while (nFonctionnement==1)
        {
            nTempsActuel = SDL_GetTicks(); //SDL_GetTicks renvoie le nombre de millisecondes depuis que la SDL a été initialisé.
            if (nTempsActuel > nTempsPrecedent + nDeltaTime)
            //On effectue nos actions à chaque frame.
            {
                SDL_RenderClear(pManager->pRenderer);

                nTempsPrecedent = nTempsActuel;
                nFonctionnement=inputSDL(Evenement,nFonctionnement);

                AfficheBalle(bBalle,pManager);
                AfficheRaquette(rRaquetteJ1,pManager);
                AfficheRaquette(rRaquetteJ2,pManager);

                SDL_RenderPresent(pManager->pRenderer);
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


void AfficheBalle(tBalle bBalle, SDLManager *pManager)
{
    SDL_Rect destRect;

    destRect.h=bBalle.cCercle.nRayon*2;
    destRect.w=bBalle.cCercle.nRayon*2;
    destRect.x=bBalle.cCercle.pCentre.nX;
    destRect.y=bBalle.cCercle.pCentre.nY;
    SDL_RenderCopy(pManager->pRenderer,bBalle.pTexture,NULL,&destRect);
}

void AfficheRaquette(tRaquette rRaquette, SDLManager *pManager)
{
    SDL_Rect destRect;

    destRect.h=rRaquette.rRectangle.nHauteur;
    destRect.w=rRaquette.rRectangle.nLargeur;
    destRect.x=rRaquette.rRectangle.pOrigine.nX;
    destRect.y=rRaquette.rRectangle.pOrigine.nY;
    SDL_RenderCopy(pManager->pRenderer,rRaquette.pTexture,NULL,&destRect);
}
