#include <stdio.h>
#include "gato.h"

void mostrar_tablero();
int movimientos();

void mostrar_talero(){

  int op;

  op = movimientos();

  switch(op){
    case 1:
    printf("         |        |       ");
    printf("   %c    |    2   |   3  ",);
    printf("_________+________+_______");
    printf("         |        |       ");
    printf("    4    |   5    |   6  ");
    printf("_________+________+_______");
    printf("         |        |       ");
    printf("    7    |    8   |   9  ");
    printf("         |        |       ");
    break;

    case 2:
    printf("         |        |       ");
    printf("    1    |   %c   |   3  ",);
    printf("_________+________+_______");
    printf("         |        |       ");
    printf("    4    |   5    |   6  ");
    printf("_________+________+_______");
    printf("         |        |       ");
    printf("    7    |    8   |   9  ");
    printf("         |        |       ");
    break;

    case 3:
    printf("         |        |       ");
    printf("    1    |    2   |   %c  ",);
    printf("_________+________+_______");
    printf("         |        |       ");
    printf("    4    |   5    |   6  ");
    printf("_________+________+_______");
    printf("         |        |       ");
    printf("    7    |    8   |   9  ");
    printf("         |        |       ");
    break;

    case 4:
    printf("         |        |       ");
    printf("    1    |    2   |   3  ");
    printf("_________+________+_______");
    printf("         |        |       ");
    printf("   %c    |   5    |   6  ",);
    printf("_________+________+_______");
    printf("         |        |       ");
    printf("    7    |    8   |   9  ");
    printf("         |        |       ");
    break;

    case 5:
    printf("         |        |       ");
    printf("    1    |    2   |   3  ");
    printf("_________+________+_______");
    printf("         |        |       ");
    printf("    4    |   %c   |   6  ",);
    printf("_________+________+_______");
    printf("         |        |       ");
    printf("    7    |    8   |   9  ");
    printf("         |        |       ");
    break;

    case 6:
    printf("         |        |       ");
    printf("    1    |    2   |   3  ");
    printf("_________+________+_______");
    printf("         |        |       ");
    printf("    4    |   5    |   %c  ",);
    printf("_________+________+_______");
    printf("         |        |       ");
    printf("    7    |    8   |   9  ");
    printf("         |        |       ");
    break;

    case 7:
    printf("         |        |       ");
    printf("    1    |    2   |   3  ");
    printf("_________+________+_______");
    printf("         |        |       ");
    printf("    4    |   5    |   6  ");
    printf("_________+________+_______");
    printf("         |        |       ");
    printf("    %c   |    8   |   9  ");
    printf("         |        |       ");
    break;

    case 8:
    printf("         |        |       ");
    printf("    1    |    2   |   3  ");
    printf("_________+________+_______");
    printf("         |        |       ");
    printf("    4    |   5    |   6  ");
    printf("_________+________+_______");
    printf("         |        |       ");
    printf("    7    |   %c   |   9  ");
    printf("         |        |       ");
    break;

    case 9:
    printf("         |        |       ");
    printf("    1    |    2   |   3  ");
    printf("_________+________+_______");
    printf("         |        |       ");
    printf("    4    |   5    |   6  ");
    printf("_________+________+_______");
    printf("         |        |       ");
    printf("    7    |    8   |   %c  ",);
    printf("         |        |       ");
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