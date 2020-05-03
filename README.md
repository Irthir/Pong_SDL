# Pong_SDL
Projet de Pong en SDL2

Source des Assets : https://opengameart.org/content/pong-graphics

Problème rencontré, création du type sprite, que contiendrait-il ? Une texture ? Dans ce cas comment retirer la texture du tileset, elle va normalement dans un rendu.
Problème corrigé avec SDL_SetRenderTarget et stockage d'un texture dans le type tBalle.