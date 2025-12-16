#include "podium.h"
#include "partie.h"
#define MAX_COMMAND 256
int main()
{
     Podium rouge;
     Podium bleu;
     char current_command_line[MAX_COMMAND];
     while (fgets(current_command_line, MAX_COMMAND, stdin) != NULL)
     {
          handleMove(current_command_line);
     }
}
