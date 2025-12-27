#include "podium.h"
#include "partie.h"
#define MAX_COMMAND 256
int main()
{
     
     int current_id = 0;
     Podium podium_rouge;
     Podium podium_bleu;
     Joueurs tab_joueurs;
     init_joueurs(&tab_joueurs);

     char current_command_line[MAX_COMMAND];

     fgets(current_command_line, MAX_COMMAND, stdin) != NULL;
     readNames(current_command_line, &tab_joueurs);
     current_id = 1;
     
     printf("KI (B -> R) | LO (B <- R) | SO (B <-> R) | NI (B ^) | MA (R ^)");
     while (fgets(current_command_line, MAX_COMMAND, stdin) != NULL)
     {
          handleMove(current_command_line,&tab_joueurs, &podium_rouge, &podium_bleu,current_id);
     }
}
