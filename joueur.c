#include "joueur.h"
#include <stdlib.h>
#include <string.h>

void init_joueurs(Joueurs *joueurs)
{
     joueurs->capacite = 2;
     joueurs->nb_joueurs;
     joueurs = malloc(joueurs->capacite * sizeof(Joueur));
}

void add_joueur(Joueurs *joueurs, char *nom, int id)
{
     int *tmp;
     if (joueurs->nb_joueurs == joueurs->capacite)
     {
          *tmp = realloc(joueurs, sizeof(Joueur));
     }
     if (tmp != NULL)
     {
          joueurs = tmp;
          ++joueurs->nb_joueurs;
          joueurs->joueurs[joueurs->nb_joueurs - 1].id = id;
          strcpy(joueurs->joueurs[joueurs->nb_joueurs - 1].nom, &nom);
     }
}