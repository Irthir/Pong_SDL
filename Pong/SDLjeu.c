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


        SDL_Rect rRenderRect;
        rRenderRect.x=0;
        rRenderRect.y=0;
        SDL_GetRendererOutputSize(pManager->pRenderer,&rRenderRect.w,&rRenderRect.h);

        //On veut que la raquette fasse 1/40 de l'écran en largeur et 1/4 de l'écran en hauteur
        const int LARGEURRAQUETTE = rRenderRect.w/40;
        const int HAUTEURRAQUETTE = rRenderRect.h/4;
        //On veut que la balle soit comprise dans un carré qui a pour côté 1/40 de la largeur de l'écran.
        const int DIAMETTREBALLE = rRenderRect.w/40;

        tBalle bBalle=CreatBalle(CreatCercle(CreatPoint(rRenderRect.w/2,rRenderRect.h/2),DIAMETTREBALLE/2),CreatVecteur2D(CreatSegment(CreatPoint(0,0),CreatPoint(0,0)),CreatSegment(CreatPoint(0,0),CreatPoint(0,0))),pManager);
        tRaquette rRaquetteJ1=CreatRaquette(CreatRect(CreatPoint(0,(rRenderRect.h-HAUTEURRAQUETTE)/2),HAUTEURRAQUETTE,LARGEURRAQUETTE),pManager,1);
        tRaquette rRaquetteJ2=CreatRaquette(CreatRect(CreatPoint(rRenderRect.w-LARGEURRAQUETTE,(rRenderRect.h-HAUTEURRAQUETTE)/2),HAUTEURRAQUETTE,LARGEURRAQUETTE),pManager,2);

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
