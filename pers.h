#include<stdio.h>
#include<stdlib.h>
#include<SDL/SDL.h>
#include"SDL/SDL_image.h"
typedef struct 
{
SDL_Rect position ;
SDL_Surface *perso;
}personnage;
int initialiser (personnage *p);
int afficher (personnage p,SDL_Surface *screen );
/*void deplacer (SDL_Surface *screen , personnage p);*/


