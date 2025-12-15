#define SIZE_PODIUM 3
#include<stdio.h>
#include "animal.h"
typedef struct 
{
     Animal animals[SIZE_PODIUM];
     int nb_animals;

}Podium;

void addAnimal(Podium* podium, Animal animal);

void moveAnimal(Podium* src, Podium* dest);

void swapAnimal(Podium* podium1, Podium* podium2);

void topAnimal(Podium* podium);


