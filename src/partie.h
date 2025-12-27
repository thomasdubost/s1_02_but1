#include "joueur.h"
#include "podium.h"
enum{FIRST_LETTER, SECOND_LETTER, END_OF_LINE};
typedef enum
{
     KI,
     LO,
     SO,
     NI,
     MA,
     ER
} Move;
char *parseCommand(char *command_line);

void readNames(char *command_line, Joueurs *joueurs);

int assertItsYourTurn(const Joueurs *joueurs,const char *joueur, int current_id);

void handleMove(char *command_line, Joueurs *joueurs, Podium *podium_rouge, Podium *podium_bleu, int current_id);

Move chooseTheRightMove(char *tab_of_move);
