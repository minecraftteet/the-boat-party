#include "./headers/wined.h"
#include <stdint.h>
#include <stdio.h>
#include <string.h>
int tunN = 0;
char playername[16];
int opc;

int main() {
  printf("plese put you name: ");
  scanf("%s", playername);
  printf("\n");
  printf("hi %s\n", playername);
  printf("you haied a scream on the top deck \n you feel the boat shake.\n");

  printf("do you {1}run out the door. {2}look arond for stuff {3}just stand "
         "there");
  scanf("%d", &opc);
  tunN++;
  if (opc == 1) {
    printf("you feet sliped on the flor\n");
    dead();

  } else if (opc == 2) {
    printf("you spind 5secints\n you find a touthbrush, a nife, a shotgun with "
           "one bullit, or a 40`` rope that look old. \n");
    printf("do take {1}the touthbrush {2}the nife {3}the gun {4}the rope \n");
    scanf("%d", &opc);

    if (opc == 1) {
      printf("a touthbrush has ben added to you envintery\n");
      printf("do you {1}run or {2}wake out of the room \n");

    } else if (opc == 2) {
      printf("a nife as ben added to you envintery\n");
      printf("do you {1}run or {2}wake out of the room \n");

    } else if (opc == 3) {
      printf("a shotgun and one bullit as ben added to you envintery \n");
      printf("do you {1}run or {2}wake out of the room \n");

    } else if (opc == 4) {
      printf("a old rope had ben added to you envintery\n");
      printf("do you {1}run or {2}wake out of the room \n");
      scanf("%d", &opc);
      if (opc == 1) {
        printf("you run out of the room and your feet slip on the water "
               "below.\n you died!\n");
        return 0;
      } else if (opc == 2) {
        printf("you wake out of the room and you see a map on the wall.\ndo "
               "you {1}look at the map {2}go left {3}go right\n");
        scanf("%d", &opc);
        if (opc == 1) {
          printf("you gase on the map and it has a red mark the shows you are "
                 "here. and you see you are on the 3 to botem part of the "
                 "boat, and there the stars are on to the right of you.\nas "
                 "you are looking to it you feel water on your feet\n");
          printf("do you go {1} left {2} right\n");
          scanf("%d", &opc);
          if (opc == 1) {
            printf("you wake left and you hite a deadend as you are wake to "
                   "the right the water fill up the hallway.\nyou died!!");
            dead();
          } else if (opc == 2) {
            printf("you walk right as you feel water filling up on you feet. "
                   "you see a set of sters leedig up. you walk up the stars "
                   "and on level 2.\n");
            printf("fined a map of this level on the wall you alos find a fire "
                   "exwisher. on the uther wall\ndo you {1} take the fire "
                   "exwisher {2} look at the make {3} blindle wake downe the "
                   "hallway");
            scanf("%d", &opc);
            if (opc == 1) {
              printf("you see on the map you need to go left then right then "
                     "left.\n do you {1}start walking {2}grabe the fire "
                     "exwisher which is on fire\n ");
              scanf("%d", &opc);
              if (opc == 1) {
              } else if (opc == 2) {
              }
            }
          }
        }
      }
    }
  } else if (opc == 3) {
    tunN += 6;
    printf("6 secints pass you just stand there\nyou thenk to your self i need "
           "ot get going.\n");
    printf(
        "do you {1}run out the door. {2}look arond for stuff {3}take a nap\n");
    scanf("%d", &opc);
    if (opc == 1) {
      printf("you slip and you haed hits the grond");
      dead();

    } else if (opc == 2) {

      printf("you spind 5secints\n you find a touthbrush, a nife, a shotgun "
             "with one bullit, or a 40`` rope that look old. \n");
      printf("do take {1}the touthbrush {2}the nife {3}the gun {4}the rope \n");
      scanf("%d", &opc);

      if (opc == 1) {

      } else if (opc == 2) {

      } else if (opc == 3) {

      } else if (opc == 4) {
      }

    } else if (opc == 3) {
      printf("you take a nap and the boat sinks as you  wake up you feel wator "
             "filling you lungs\n");
      dead();
      return 0;
    }
  }

  return 0;
}
