#include <stdio.h>
#include "gato.h"

void mostrar_tablero();
int movimientos();

void mostrar_talero(){

  int op;

  op = movimientos();

  switch(op){
    case 1:
    break;

    case 2:
    break;

    case 3:
    break;

    case 4:
    break;

    case 5:
    break;

    case 6:
    break;

    case 7:
    break;

    case 8: 
    break;

    case 9:
    break;
  }


    printf("         |        |       ");
    printf("   %c    |   %c   |   %c  ",);
    printf("_________+________+_______");
    printf("         |        |       ");
    printf("   %c    |   %c   |   %c  ",);
    printf("_________+________+_______");
    printf("         |        |       ");
    printf("   %c    |   %c   |   %c  ",);
    printf("         |        |       ");
}

int movimiento(){

  int op;

    printf("         |        |       ");
    printf("    1    |    2   |   3  ");
    printf("_________+________+_______");
    printf("         |        |       ");
    printf("    4    |   5    |   6  ");
    printf("_________+________+_______");
    printf("         |        |       ");
    printf("    7    |    8   |   9  ");
    printf("         |        |       ");

    printf("Escoger posicion: ");
    scanf("%i",&op);

    return op;
}