#include<string.h>
#include "podium.h"

void addAnimal(Podium* podium, Animal animal)
{
     podium->animals[podium->nb_animals++] = animal;
}

void moveAnimal(Podium* src, Podium* dest)
{    
     addAnimal(dest,src->animals[--src->nb_animals]);     
}

void swapAnimal(Podium* podium1, Podium* podium2)
{
     strcpy(tmp, podium1->animals[podium1->nb_animals-1]);
     strcpy(podium1->animals[podium1->nb_animals],);

}