#include <stdio.h>
#include <string.h>
#include <stdint.h>

int tunN;
char playername[16];
int opc;


int main()
{
  printf("plese put you name: ");
  scanf("%s",playername);
  printf("\n");
  printf("hi %s\n", playername);
  while (tunN != 100){

    printf("what are you goig to do");
    scanf("%d",opc);
    opc =0;
    tunN++;
    
  }

  
  
  
  return 0;
}
