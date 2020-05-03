# Pong_SDL
Projet de Pong en SDL2

Source des Assets : https://opengameart.org/content/pong-graphics

Problème rencontré, création du type sprite, que contiendrait-il ? Une texture ? Dans ce cas comment retirer la texture du tileset, elle va normalement dans un rendu.
Problème corrigé avec SDL_SetRenderTarget et stockage d'un texture dans le type tBalle.


Problème connu actuel : Bug sur la collision et sprite possédant de la transparence comprise dans la collision ce qui donne un effet non souhaité.

Choses à faire pour améliorer le prototype actuel :
-Améliorer l'IA.
-Nettoyer le code, surtout le SDLJeu.c et ranger les fonctions.
-Corriger le bug de collision.
-Voir si il est nécessaire de changer les assets.
-Si c'est le cas changer les assets.
-Ajouter le menu.
-Ajouter une condition de victoire et l'écran de fin.
-Ajouter un mode multijoueur local.
-Ajouter un mode multijoueur Réseau.
-Ajouter divers difficultée à l'IA.

Pour l'instant : 
Appuyez sur les touches fléchées haut et bas pour déplacer la Raquette de Gauche, appuyez sur échap pour quitter le jeu.