#include <stdio.h>
#include "main2.c"
#include "gato.h"
#include "Tablero.h"

void mostrar_tablero();
void tablero();
int movimientos();

void mostrar_talero(){

  int op;
  char partida[3][3];

  op = movimientos();

  if(){
    switch(op){

      case 1:
      partida[0][0] = 'X';
      printf("         |        |       \n");
      printf("   %c    |        |      \n",);
      printf("_________+________+_______\n");
      printf("         |        |       \n");
      printf("         |        |      \n");
      printf("_________+________+_______\n");
      printf("         |        |       \n");
      printf("         |        |      \n");
      printf("         |        |       \n");
      break;

      case 2:
      printf("         |        |       \n");
      printf("         |   %c   |      \n",);
      printf("_________+________+_______\n");
      printf("         |        |       \n");
      printf("         |        |      \n");
      printf("_________+________+_______\n");
      printf("         |        |       \n");
      printf("         |        |      \n");
      printf("         |        |       \n");
      break;

      case 3:
      printf("         |        |       \n");
      printf("         |        |   %c  \n",);
      printf("_________+________+_______\n");
      printf("         |        |       \n");
      printf("         |        |      \n");
      printf("_________+________+_______\n");
      printf("         |        |       \n");
      printf("         |        |      \n");
      printf("         |        |       \n");
      break;

      case 4:
      printf("         |        |       \n");
      printf("         |        |      \n");
      printf("_________+________+_______\n");
      printf("         |        |       \n");
      printf("   %c    |        |      \n",);
      printf("_________+________+_______\n");
      printf("         |        |       \n");
      printf("         |        |      \n");
      printf("         |        |       \n");
      break;

      case 5:
      printf("         |        |       \n");
      printf("         |        |      \n");
      printf("_________+________+_______\n");
      printf("         |        |       \n");
      printf("         |   %c   |      \n",);
      printf("_________+________+_______\n");
      printf("         |        |       \n");
      printf("         |        |      \n");
      printf("         |        |       \n");
      break;

      case 6:
      printf("         |        |       \n");
      printf("         |        |      \n");
      printf("_________+________+_______\n");
      printf("         |        |       \n");
      printf("         |        |   %c  \n",);
      printf("_________+________+_______\n");
      printf("         |        |       \n");
      printf("         |        |      \n");
      printf("         |        |       \n");
      break;

      case 7:
      printf("         |        |       \n");
      printf("         |        |      \n");
      printf("_________+________+_______\n");
      printf("         |        |       \n");
      printf("         |        |      \n");
      printf("_________+________+_______\n");
      printf("         |        |       \n");
      printf("    %c   |        |      \n",);
      printf("         |        |       \n");
      break;

      case 8:
      printf("         |        |       \n");
      printf("         |        |      \n");
      printf("_________+________+_______\n");
      printf("         |        |       \n");
      printf("         |        |      \n");
      printf("_________+________+_______\n");
      printf("         |        |       \n");
      printf("         |   %c   |      \n",);
      printf("         |        |       \n");
      break;

      case 9:
      printf("         |        |       \n");
      printf("         |        |      \n");
      printf("_________+________+_______\n");
      printf("         |        |       \n");
      printf("         |        |      \n");
      printf("_________+________+_______\n");
      printf("         |        |       \n");
      printf("         |        |   %c  \n",);
      printf("         |        |       \n");
      break;
    }
  }

  if(){
    printf("         |        |       \n");
    printf("   %c    |   %c   |   %c  \n",);
    printf("_________+________+_______\n");
    printf("         |        |       \n");
    printf("   %c    |   %c   |   %c  \n",);
    printf("_________+________+_______\n");
    printf("         |        |       \n");
    printf("   %c    |   %c   |   %c  \n",);
    printf("         |        |       \n");
  }
}

int movimientos(){

  int op;

    printf("         |        |       \n");
    printf("    1    |    2   |   3  \n");
    printf("_________+________+_______\n");
    printf("         |        |       \n");
    printf("    4    |   5    |   6  \n");
    printf("_________+________+_______\n");
    printf("         |        |       \n");
    printf("    7    |    8   |   9  \n");
    printf("         |        |       \n");

    printf("Escoger posicion: ");
    scanf("%i",&op);

    return op;
}

void tablero(int partida*){
  
    printf("         |        |       \n");
    printf("   %c    |   %c   |   %c  \n",partida[0][0],partida[0][1],partida[0][2]);
    printf("_________+________+_______\n");
    printf("         |        |       \n");
    printf("   %c    |   %c   |   %c  \n",partida[1][0],partida[1][1],partida[1][2]);
    printf("_________+________+_______\n");
    printf("         |        |       \n");
    printf("   %c    |   %c   |   %c  \n",partida[2][0],partida[2][1],partida[2][2]);
    printf("         |        |       \n");

}