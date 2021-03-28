#include<stdio.h>
#include<stdlib.h>

#include<SDL/SDL.h>
typedef struct 
{
SDL_Rect position ;
SDL_Surface *perso;
}personnage;
int initialiser (personnage *p);
void  main ()
{
personnage p;
char ch[20];
SDL_Event;
SDL_Surface *screen =NULL,*perso=NULL;
SDL_Surface *h1=NULL,*h2=NULL,*h3=NULL,*score=NULL,*lifes=NULL;
if (SDL_Init (SDL_INIT_VIDEO)==-1)
{
printf ("can't init %s \n",SDL_GetError());
return EXIT_FAILURE ;
}
screen =SDL_SetVideoMode(800,600,32,SDL_HWSURFACE);
initialiser (&p);

SDL_Flip(sreen);

}
int initialiser (personnage *p)
{SDL_Rect position_h1,position_h2,position_h3,position_score ,position_lifes;
SDL_Surface *h1=NULL,*h2=NULL,*h3=NULL,*score=NULL,*lifes=NULL;
p->perso=IMG_Load("personnage ");
p->position.x=0;
p->position.y=0;
p->position.w=p->img->w;
p->position.h=p->img->h;
h1=IMG_Load("heart");
h2=IMG_Load("heart");
h3=IMG_Load("heart");
score=IMG_Load("score");

position_h1.x=164;
position_h1.y=10;
position_h2.x=164; 
position_h2.y=10;
position_h3.x=217;
position_h3.y=10;
position_score.x=460;
position_score.y=0;
position_lifes.x=130;
position_lifes.y=0;
}
