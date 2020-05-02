#include "SDLjeu.h"

int main(int argc, char *argv[]) //Prototype du main obligatoire pour la SDL.
{
    printf("Bonjour.\n");

    if (sdljeu()==1)
    {
        printf("Erreur dans le lancement de la SDL.\n");
    }

    printf("Au revoir.\n");
    return 0;
}
