#define MAX_NOM_JOUEUR 3
typedef struct
{
     char nom[MAX_NOM_JOUEUR];
     int id;
} Joueur;

typedef struct
{
     Joueur *joueurs;
     int nb_joueurs;
     int capacite;
} Joueurs;

void init_joueurs(Joueurs *joueurs);

void add_joueur(Joueurs *joueurs, Joueur *joueur);
