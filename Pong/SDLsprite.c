#include "SDLsprite.h"


SDL_Surface *AppliquerImageSurface(const char* sChemin)
//BUT : Appliquer une image dans une surface gr�ce � la SDL_Image.
//ENTREE : La surface et le chemin de l'image.
//SORTIE : L'image appliqu�e � la surface.
{
    SDL_Surface *pSurface = malloc(sizeof(SDL_Surface));
    pSurface=IMG_Load(sChemin);
    if (pSurface==NULL)
    {
        printf("Erreur lors de l'association de l'image a la surface : %s",SDL_GetError());
        exit(EXIT_FAILURE);
    }
    return pSurface;
}

SDL_Texture *TextureSprites(SDLManager *pManager)
//BUT : Renvoyer la texture du tileset des sprites.
//ENTREE : Le chemin de l'image en constante.
//SORTIE : La texture cr��e.
{
    SDL_Surface *pSurface = AppliquerImageSurface(CSPRITE);
    SDL_Texture *pTexture;
    pTexture = SDL_CreateTextureFromSurface(pManager->pRenderer,pSurface);
    if (pTexture==NULL)
    {
        printf("Erreur dans la creation de la texture depuis la surface : %s.\n", SDL_GetError());
        return EXIT_FAILURE;
    }
    free(pSurface);
    return pTexture;
}


void AfficheBalle(tBalle bBalle,SDLManager *pManager)
{
    SDL_Texture *pTexture=TextureSprites(pManager);
    int nW=0;
    int nH=0;
    SDL_QueryTexture(pTexture,NULL,NULL,&nW,&nH);
    SDL_Rect sourceRect={0,0,0,0};
    sourceRect.w=nW/NBTILELARGEUR;
    sourceRect.h=nH/NBTILEHAUTEUR;
    sourceRect.x=(XBALLE/NBTILELARGEUR)*nW;
    sourceRect.y=(YBALLE/NBTILEHAUTEUR)*nH;

    SDL_Rect destRect=sourceRect;
    destRect.x=bBalle.pPosition.nX;
    destRect.y=bBalle.pPosition.nY;

    SDL_RenderCopy(pManager->pRenderer,pTexture,&sourceRect,&destRect);

    free(pTexture);
}