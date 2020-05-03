#include "SDLtexte.h"

void AfficheScore(SDLManager *pManager,int nScoreJ1,int nScoreJ2,SDL_Rect rRenderRect)
{
    TTF_Font* fFont = TTF_OpenFont("Assets/Font/arial.ttf", 1000);

    SDL_Color cBlanc = {255, 255, 255};

    char cScore[5] ="";
    sprintf(cScore, "%d", nScoreJ1);

    SDL_Surface* pSurface = TTF_RenderText_Solid(fFont,cScore, cBlanc);

    SDL_Texture* pTexture = SDL_CreateTextureFromSurface(pManager->pRenderer, pSurface);

    SDL_Rect rRectText;
    rRectText.x = rRenderRect.w/6;
    rRectText.y = 0;
    rRectText.w = rRenderRect.h/6;
    rRectText.h = rRenderRect.h/6;

    SDL_RenderCopy(pManager->pRenderer, pTexture, NULL, &rRectText);

    SDL_FreeSurface(pSurface);
    SDL_DestroyTexture(pTexture);

    sprintf(cScore, "%d", nScoreJ2);
    pSurface = TTF_RenderText_Solid(fFont,cScore, cBlanc);

    pTexture = SDL_CreateTextureFromSurface(pManager->pRenderer, pSurface);

    rRectText.x = rRenderRect.w/6*4;
    rRectText.y = 0;

    SDL_RenderCopy(pManager->pRenderer, pTexture, NULL, &rRectText);

    SDL_FreeSurface(pSurface);
    SDL_DestroyTexture(pTexture);
}
