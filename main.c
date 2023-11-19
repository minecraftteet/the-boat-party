#include <stdio.h>
#include <string.h>
#include <stdint.h>

int tunN = 0;
char playername[16];
int opc;


int main()
{
  printf("plese put you name: ");
  scanf("%s",playername);
  printf("\n");
  printf("hi %s\n", playername);
  printf("you haied a scream on the top deck \n you feel the boat shake.\n");
  while (tunN != 100){

    printf("do you {1}run out the door. {2}look arond for stuff {3}just stand there");
    scanf("%d",&opc);
    tunN ++;
    if(opc==1){
      printf("%d\n",opc)
    } else if (opc == 2) {
      
      
    } else if (opc == 3) {
      
      
    }
    


    tunN++;
  }

  
  
  
  return 0;
}
