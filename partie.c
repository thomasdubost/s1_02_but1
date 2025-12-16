#include "partie.h"
#include "podium.h"
#include <string.h>
#define MAX_MOVE 3
void handleMove(char *command_line, Podium *podium_rouge, Podium *podium_bleu)
{
     for (int i = 0; i < strlen(command_line); ++i)
     {
          char tmp[MAX_MOVE];

          strcpy(tmp[i], command_line[i]);
          if ((i + 1) % 2 == 0)
          {
               Move move = chooseTheRightMove(&tmp);
               switch (move)
               {
               case KI:
                    moveAnimal(&podium_bleu, &podium_rouge);
                    printf("Instruction : KI\n");
                    break;
               case LO:

                    moveAnimal(&podium_rouge, &podium_bleu);
                    printf("Instruction : LO\n");
                    break;
               case SO:

                    swapAnimal(&podium_bleu, &podium_rouge);
                    printf("Instruction : SO\n");
                    break;
               case NI:

                    topAnimal(&podium_bleu);
                    printf("Instruction : NI\n");
                    break;
               case MA:

                    topAnimal(&podium_rouge);
                    printf("Instruction : MA\n");
                    break;
               default:
                    break;
               }
          }
     }
}

Move chooseTheRightMove(char *move)
{
     if (strcmp(move, "KI") == 0)
     {
          return KI;
     }
     if (strcmp(move, "LO") == 0)
     {
          return LO;
     }
     if (strcmp(move, "SO") == 0)
     {
          return SO;
     }
     if (strcmp(move, "NI") == 0)
     {
          return NI;
     }
     if (strcmp(move, "MA") == 0)
     {
          return MA;
     }
     return NULL;
}