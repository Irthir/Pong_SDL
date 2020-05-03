#include "SDLballe.h"

tBalle CreatBalle(tCercle cCercle,tVecteur2D vDirection,SDLManager *pManager)
{
    tBalle bBalle;
    bBalle.cCercle=cCercle;
    bBalle.vDirection=vDirection;
    bBalle.pTexture=CreatTextureBalle(pManager);
    return bBalle;
}

