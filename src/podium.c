#include <string.h>
#include <stdlib.h>
#include "podium.h"
#define MAX_TMP 10
#define PODIUM_INITIAL_CAPACITY 3
#define CAPACITY_FACTOR 2

void initPodium(Podium *podium)
{
     podium->nb_animals = 0;
     podium->capacite = PODIUM_INITIAL_CAPACITY;
     podium->animals = malloc(podium->capacite * sizeof(Animal));
}

void addAnimal(Podium *podium, Animal animal)
{
     void *tmp;
     if (podium->nb_animals == podium->capacite)
     {
          podium->capacite *= CAPACITY_FACTOR;
          tmp = realloc(podium->animals, podium->capacite * sizeof(Animal));
     }
     if (tmp != NULL)
     {
          podium->animals = tmp;
          podium->nb_animals += 1;
          podium->animals[podium->nb_animals-1] = animal;
     }
}
Animal getFirstAnimal(Podium *podium)
{
     return podium->animals[podium->nb_animals - 1];
}

Animal getLastAnimal(Podium *podium)
{
     return podium->animals[0];
}

void moveAnimal(Podium *src, Podium *dest)
{
     addAnimal(dest, getFirstAnimal(src));
     --src->nb_animals;
}

void swapAnimal(Podium *podium1, Podium *podium2)
{
     Animal tmp = getFirstAnimal(podium1);
     moveAnimal(podium2, podium1);
     podium2->animals[podium2->nb_animals - 1] = tmp;
}

void topAnimal(Podium *podium)
{
     Animal tmp = getFirstAnimal(podium);
     podium->animals[podium->nb_animals - 1] = podium->animals[0];
     podium->animals[0] = tmp;
}
