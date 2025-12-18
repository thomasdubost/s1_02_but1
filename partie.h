#include "joueur.h"
typedef enum
{
     KI,
     LO,
     SO,
     NI,
     MA
} Move;

void assertItsYourTurn(char *joueur);

void handleMove(char *command_line, Podium *podium_rouge, Podium *podium_bleu);

Move chooseTheRightMove(char *tab_of_move);
