#include<string.h>
#include "podium.h"
#define MAX_TMP 10

void addAnimal(Podium* podium, Animal animal)
{
     podium->animals[podium->nb_animals++] = animal;
}

void moveAnimal(Podium* src, Podium* dest)
{    
     addAnimal(dest,src->animals[--src->nb_animals]);  
     --src->nb_animals;
}

void swapAnimal(Podium* podium1, Podium* podium2)
{
     char tmp[MAX_TMP];
     strcpy(tmp, podium1->animals[podium1->nb_animals-1]);
     strcpy(podium1->animals[podium1->nb_animals], podium2->animals[podium2->nb_animals-1]);
     strcpy(podium2->animals[podium2->nb_animals], tmp);
}