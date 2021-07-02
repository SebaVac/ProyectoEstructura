#include <stdio.h>
#include "Tablero.h"

void guardar();
void mostrar_tablero();
void tablero();
int movimientos();

//funcion que muestra el tablero vacio
void mostrar_tablero(){
  printf("       |       |       \n");
  printf("       |       |       \n");
  printf("_______|_______|_______\n");
  printf("       |       |       \n");
  printf("       |       |       \n");
  printf("_______|_______|_______\n");
  printf("       |       |       \n");
  printf("       |       |       \n");
  printf("       |       |       \n");
}

//funcion que muestra el tablero con los turnos realizados
void tablero(char partida[3][3]){

  printf("       |       |       \n");
  printf("   %c   |   %c   |   %c   \n",partida[0][0],partida[0][1],partida[0][2]);
  printf("_______|_______|_______\n");
  printf("       |       |       \n");
  printf("   %c   |   %c   |   %c   \n",partida[1][0],partida[1][1],partida[1][2]);
  printf("_______|_______|_______\n");
  printf("       |       |       \n");
  printf("   %c   |   %c   |   %c   \n",partida[2][0],partida[2][1],partida[2][2]);
  printf("       |       |       \n");

}

//funcion para mostrar tablero y escoger la posicion del tablero
int movimientos(){

  int op;

    printf(" _ _ _ _ _ _ _ _ _ _ _ _ _\n");
    printf("|        |        |       |\n");
    printf("|   1    |    2   |   3   |\n");
    printf("|________|________|_______|\n");
    printf("|        |        |       |\n");
    printf("|   4    |   5    |   6   |\n");
    printf("|________|________|_______|\n");
    printf("|        |        |       |\n");
    printf("|   7    |    8   |   9   |\n");
    printf("|__ _ _ _|_ _ _ __|_ _ _ _|\n\n");

    printf("Escoger posicion: ");
    scanf("%i",&op);

    return op;
}

//funcion que guarda los resultados de la partida
void guardar(){


}