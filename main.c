#include<stdio.h>
#include<stdlib.h>
#include<SDL/SDL.h>
#include<SDL/SDL_image.h>
#include"pers.h"
void  main ()
{
personnage p;
char ch[20];
SDL_Event event;
SDL_Surface *screen =NULL,*perso=NULL;
SDL_Surface *h1=NULL,*h2=NULL,*h3=NULL,*score=NULL,*lifes=NULL;
if (SDL_Init (SDL_INIT_VIDEO)==-1)
{
printf ("can't init %s \n",SDL_GetError());
return EXIT_FAILURE ;
}
screen =SDL_SetVideoMode(800,600,32,SDL_HWSURFACE);
initialiser (&p);
afficher (p,screen );
SDL_Flip(screen);
void Evolue(&in,&p)
/*deplacer (screen ,p);*/
}

