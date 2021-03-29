
#include<stdio.h>
#include<stdlib.h>
#include<SDL/SDL.h>
#include"SDL/SDL_image.h"
#include"pers.h"
int initialiser (personnage *p)
{SDL_Rect position_h1,position_h2,position_h3,position_score ;
SDL_Surface *h1=NULL,*h2=NULL,*h3=NULL,*score=NULL,*lifes=NULL;
p->perso=IMG_Load("personnage ");
p->position.x=60;
p->position.y=50;
p->position.w=p->perso->w;
p->position.h=p->perso->h;
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

}

int afficher (personnage p,SDL_Surface *screen )
{SDL_BlitSurface(p.perso,NULL,screen,&position);
SDL_BlitSurface(h1,NULL,screen,&position_h1);
SDL_BlitSurface(h2,NULL,screen,&position_h2);
SDL_BlitSurface(h3,NULL,screen,&position_h3);
SDL_BlitSurface(score,NULL,screen,&position_score);

}

/*void deplacer (SDL_Surface *screen , personnage p)
{
char ch[20];
int continuer =1;
SDL_EnableKeyRepeat(20,20);
while (continuer)
{
SDL_POLLEvent(&event);
switch(event.type)
{
case SDL_QUIT:
continuer=0;
break;
case SDL_KEYDOWN:
switch (event.Key.Keysysm.sym)
{
case SDLK_UP:
p->position.y-=10;
SDL_WaitEvent(&event);
break;
case SDLK_DOWN:
p->position.y+=10;
SDL_WaitEvent(&event);
break;
case SDLK_RIGHT:
p->position.x+=10;
SDL_WaitEvent(&event);
break;
case SDLK_LEFT:
p->position.y-=10;
SDL_WaitEvent(&event);
break;
break;
}
}
SDL_Flip(sreen);
}
}*/
void vecteur (input *in,int *vx ,int *vy)
{
int vitesse =5;
*vx=*vy=0;
if (in->key[SDLK_UP])*vy=-vitesse;
if (in->key[SDLK_DOWN])*vy=vitesse;
if (in->key[SDLK_LEFT])*vx=-vitesse;
if (in->key[SDLK_RIGHT])*vx=vitesse;
}


int DeplaceSprite(personnage * p,,int vx,int vy) 
{ 
    if (EssaiDeplacement(p,vx,vy)==1) 

        return 1; 

    return 2; 
}

int EssaiDeplacement(personnage * p,int vx,int vy) 
{ 
    SDL_Rect test; 
    test = p->position; 
    test.x+=vx; 
    test.y+=vy; 
    
    return 0;

}
void Evolue(Input* in,personnage * p)
 { int vx,vy; RecupererVecteur(in,&vx,&vy); 
  DeplaceSprite(p,vx,vy);
 }
/*void acceleration()
{
case 
continuer =1;
while (continuer)
{
sdl_POLLevent (&event);
switch(event.type)
{
case SDL_keyDOWN
switch(event.key.keysy;.sym)
{
case SDLK_a:
p.acceleration+=0.005;
break;
case SDLK_d:
p.acceleration-=0.01;
break ;
}
}
} 
}*/
