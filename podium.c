#include <string.h>
#include "podium.h"
#define MAX_TMP 10

void addAnimal(Podium *podium, Animal animal)
{
     podium->animals[podium->nb_animals++] = animal;
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
