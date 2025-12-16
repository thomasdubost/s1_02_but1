#include "podium.h"
#include "partie.h"
#define MAX_COMMAND 256
int main()
{
     Podium rouge;
     Podium bleu;
     char current_command_line[MAX_COMMAND];
     while (1)
     {
          if (fgets(current_command_line, MAX_COMMAND, stdin) != NULL)
          {
               continue;
          }
          
          handleMove(current_command_line);
     }
}