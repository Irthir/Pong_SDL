#include "SDLraquette.h"


tRaquette CreatRaquette(tRect rRectangle,SDLManager *pManager,int nJoueur)
{
    tRaquette rRaquette;
    rRaquette.rRectangle=rRectangle;
    rRaquette.pTexture=CreatTextureRaquette(pManager,nJoueur);
    return rRaquette;
}
