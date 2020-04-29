#include <stdio.h>
#include <stdlib.h>
#include "SDLmanager.h"

int main(int argc, char *argv[])
{
    printf("Bonjour.\n");

    SDLManager *pManager=malloc(sizeof(SDLManager));
    if (initSDLManager(pManager)==1)
    {
        SDL_Delay(4000);
        finSDLManager(pManager);
    }
    else
    {
        printf("Erreur dans le lancement de la SDL.\n");
    }

    printf("Au revoir.\n");
    return 0;
}
