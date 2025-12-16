#include "partie.h"
#include "podium.h"
#include <string.h>
#define MAX_MOVE 2
void handleMove(char *command_line,Podium* pRouge, Podium* pBleu)
{
     for (int i = 0; i < strlen(command_line); ++i)
     {
          char tmp[MAX_MOVE];

          strcpy(tmp[i], command_line[i]);
          if (i % 2 == 0)
          {
               Move move = chooseTheRightMove(&tmp);
               switch (move)
               {
               case KI:
                    moveAnimal(&pBleu, &pRouge);
                    break;
               case LO:
                    moveAnimal(&pRouge, &pBleu);
                    break;
               case SO:
                    swapAnimal(&pBleu, &pRouge);
                    break;
               case NI:
                    
                    break;
               case MA:
                    
                    break;
               default:
                    break;
               }
          }
     }
}