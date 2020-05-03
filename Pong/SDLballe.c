#include "SDLballe.h"

tBalle CreatBalle(tPoint pPosition,tVecteur2D vDirection)
{
    tBalle bBalle;
    bBalle.pPosition=pPosition;
    bBalle.vDirection=vDirection;
    return bBalle;
}

