#include "joueur.h"
#include <stdlib.h>
#include <string.h>

void init_joueurs(Joueurs *joueurs)
{
     joueurs->capacite = 2;
     joueurs->nb_joueurs = 0;
     joueurs = malloc(joueurs->capacite * sizeof(Joueur));
}

void add_joueur(Joueurs *joueurs, char *nom)
{
     int *tmp;
     if (joueurs->nb_joueurs == joueurs->capacite)
     {
          *tmp = realloc(joueurs, sizeof(Joueur));
     }
     if (tmp != NULL)
     {
          joueurs = tmp;
          joueurs->joueurs[joueurs->nb_joueurs - 1].id = joueurs->nb_joueurs;
          strcpy(joueurs->joueurs[joueurs->nb_joueurs - 1].nom, &nom);
          joueurs->nb_joueurs = +1;
     }
}