#include "SDLsprite.h"

const char* CSPRITE = "Assets/sprites.png";
const int NBTILELARGEUR=5;
const int NBTILEHAUTEUR=3;
const int XBALLE=2;
const int HAUTEURRAQUETTE=3;
const int XRAQUETTEJ1=0;
const int XRAQUETTEJ2=1;

SDL_Surface *AppliquerImageSurface(const char* sChemin)
//BUT : Appliquer une image dans une surface grâce à la SDL_Image.
//ENTREE : La surface et le chemin de l'image.
//SORTIE : L'image appliquée à la surface.
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
//SORTIE : La texture créée.
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

SDL_Texture *CreatTextureBalle(SDLManager *pManager)
{
    SDL_Texture *pTexture=TextureSprites(pManager);
    int nW=0;
    int nH=0;
    SDL_QueryTexture(pTexture,NULL,NULL,&nW,&nH);
    SDL_Rect sourceRect={0,0,0,0};
    sourceRect.w=div(nW,NBTILELARGEUR).quot;
    sourceRect.h=div(nH,NBTILEHAUTEUR).quot;
    sourceRect.x=(nW/NBTILELARGEUR)*XBALLE;
    sourceRect.y=0;

    SDL_Texture *pBalleTexture=SDL_CreateTexture(pManager->pRenderer,SDL_PIXELFORMAT_RGBA8888,SDL_TEXTUREACCESS_TARGET,sourceRect.w,sourceRect.h);
    SDL_SetRenderTarget(pManager->pRenderer,pBalleTexture);
    SDL_RenderCopy(pManager->pRenderer,pTexture,&sourceRect,NULL);

    SDL_SetRenderTarget(pManager->pRenderer,NULL);
    free(pTexture);

    return pBalleTexture;
}

SDL_Texture *CreatTextureRaquette(SDLManager *pManager,int nJoueur)
{
    SDL_Texture *pTexture=TextureSprites(pManager);
    int nW=0;
    int nH=0;
    SDL_QueryTexture(pTexture,NULL,NULL,&nW,&nH);
    SDL_Rect sourceRect={0,0,0,0};
    sourceRect.w=div(nW,NBTILELARGEUR).quot;
    sourceRect.h=div(nH,NBTILEHAUTEUR).quot*HAUTEURRAQUETTE;
    if(nJoueur==1)
    {
        sourceRect.x=(nW/NBTILELARGEUR)*XRAQUETTEJ1;
    }
    else
    {
        sourceRect.x=(nW/NBTILELARGEUR)*XRAQUETTEJ2;
    }
    sourceRect.y=0;

    SDL_Texture *pRaquetteTexture=SDL_CreateTexture(pManager->pRenderer,SDL_PIXELFORMAT_RGBA8888,SDL_TEXTUREACCESS_TARGET,sourceRect.w,sourceRect.h);
    SDL_SetRenderTarget(pManager->pRenderer,pRaquetteTexture);
    SDL_RenderCopy(pManager->pRenderer,pTexture,&sourceRect,NULL);

    SDL_SetRenderTarget(pManager->pRenderer,NULL);
    free(pTexture);

    return pRaquetteTexture;
}
