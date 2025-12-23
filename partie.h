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

void assertItsYourTurn(char *joueur);

void handleMove(char *command_line, Podium *podium_rouge, Podium *podium_bleu);

Move chooseTheRightMove(char *tab_of_move);
