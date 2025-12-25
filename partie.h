#include "joueur.h"
typedef enum
{
     KI,
     LO,
     SO,
     NI,
     MA
} Move;
char *parseCommand(char *command_line);

void readNames(char *command_line, Joueurs *joueurs);

int assertItsYourTurn(const Joueurs *joueurs,const char *joueur, int current_id);

void handleMove(char *command_line, Joueurs *joueurs, Podium *podium_rouge, Podium *podium_bleu, int current_id);

Move chooseTheRightMove(char *tab_of_move);
