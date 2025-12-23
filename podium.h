#define SIZE_PODIUM 3
#include <stdio.h>
#include "animal.h"
typedef struct
{
     Animal *animals;
     int nb_animals;
     int capacite;
} Podium;

void initPodium(Podium *podium);

void addAnimal(Podium *podium, Animal animal);

Animal getFirstAnimal(Podium *podium);

Animal getLastAnimal(Podium *podium);

void moveAnimal(Podium *src, Podium *dest);

void swapAnimal(Podium *podium1, Podium *podium2);

void topAnimal(Podium *podium);
