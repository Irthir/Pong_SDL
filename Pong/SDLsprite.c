#include "SDLsprite.h"


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
