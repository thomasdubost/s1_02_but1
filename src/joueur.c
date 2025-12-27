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
     void *tmp;
     if (joueurs->nb_joueurs == joueurs->capacite)
     {
          joueurs->capacite *= 2;
          tmp = realloc(joueurs->joueurs, joueurs->capacite * sizeof(Joueur));
     }
     if (tmp != NULL)
     {
          joueurs->joueurs = tmp;
          joueurs->nb_joueurs += 1;
          joueurs->joueurs[joueurs->nb_joueurs-1].id = joueurs->nb_joueurs;
          strcpy(joueurs->joueurs[joueurs->nb_joueurs - 1].nom, nom);
     }
}