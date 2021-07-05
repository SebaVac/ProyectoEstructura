#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "Game.h"
#include "Game2.h"
#include "Tablero.h"
#include "List.h"


char* guardar_game(){

  bool finAux = false;
  bool fin = false;
  bool finPos = false;
  char partida[3][3];
  char ficha;
  int pos;
  int posAux[9];

  for(int i=0;i<9;i++){
    posAux[i] = 1;
  }

    printf("________________\n\n");
    printf("Cargando tablero\n");
    printf("________________\n\n");
    //se comienza la partida sin guardar datos(no lista, no mapa), se muestra el tablero y el grafo comienza a ejecutarse en su respectivo turno

    mostrar_tablero(); //se muestra el tablero vacio

    //se ordena el tablero iniciando todos los valores con un espacio (" ")
    for(int i = 0;i<3;i++){
      for(int j = 0;j<3;j++){
        partida[i][j] = ' ';
      }
    }

    int cont = 0;
    do{

    if(finAux != true){

      if(cont%2 == 0){ //se deciden los turnos 
        ficha = 'X';
      }else{
        ficha = 'O';
      }
      
      do{

        if(cont%2 == 0){

          pos = movimientos();//movimiento del jugador
          if(posAux[pos-1] != 0){
            posAux[pos-1] = 0;
            finPos = true;
          }else{
            printf("\n\n");
            printf("_______________________________________\n\n");
            printf("Posicion ya ocupada, intente nuevamente\n");
            printf("_______________________________________\n\n");
            finPos = false;
          }

        }else{
          pos = rand() % 10;//movimiento bot

          if(posAux[pos-1] != 0){
            posAux[pos-1] = 0;
            finPos = true;
          }else{
            finPos = false;
          }
        }

      }while(finPos == false);

      if(pos == 1){
        partida[0][0] = ficha;
        tablero(partida);
      }
      
      if(pos == 2){
        partida[0][1] = ficha;
        tablero(partida);
      }

      if(pos == 3){
        partida[0][2] = ficha;
        tablero(partida);
      }

      if(pos == 4){
        partida[1][0] = ficha;
        tablero(partida);
      }

      if(pos == 5){
        partida[1][1] = ficha;
        tablero(partida);
      }

      if(pos == 6){
        partida[1][2] = ficha;
        tablero(partida);
      }

      if(pos == 7){
        partida[2][0] = ficha;
        tablero(partida);
      }

      if(pos == 8){
        partida[2][1] = ficha;
        tablero(partida);
      }    

      if(pos == 9){
        partida[2][2] = ficha;
        tablero(partida);
      }

      cont++;//aumenta el contador de turnos
      
      
      //condiciones de victoria
      /*1*/
      if((partida[0][0] == 'X') || (partida[0][0] == 'O')){
        if((partida[0][0] == partida[0][1]) && (partida[0][1] == partida[0][2])){
          printf("\n\n");
          if(partida[0][0] == 'X'){
            printf("¡Victoria para el jugador!\n");
            return "Victoria";
          }else{
            printf("¡Perdiste! Victoria para la CPU\n");
            return "Derrota";
          }
          fin = true; 
          finAux = true; 
          break;
        }
      }

      /*2*/
      if((partida[1][0] == 'X') || (partida[1][0] == 'O')){
        if((partida[1][0] == partida[1][1]) && (partida[1][1] == partida[1][2])){
          printf("\n\n");
          if(partida[1][0] == 'X'){
            printf("¡Victoria para el jugador!\n");
            return "Victoria";
          }else{
            printf("¡Perdiste! Victoria para la CPU\n");
            return "Derrota";
          }
          fin = true;
          finAux = true; 
          break;
        } 
      }

      /*3*/
      if((partida[2][0] == 'X') || (partida[2][0] == 'O')){
        if((partida[2][0] == partida[2][1]) && (partida[2][1] == partida[2][2])){
          printf("\n\n");
          if(partida[2][0] == 'X'){
            printf("¡Victoria para el jugador!\n");
            return "Victoria";
          }else{
            printf("¡Perdiste! Victoria para la CPU\n");
            return "Derrota";
          }
          fin = true;
          finAux = true;  
          break;
        }
      }

      /*4*/
      if((partida[0][0] == 'X') || (partida[0][0] == 'O')){
        if((partida[0][0] == partida[1][0]) && (partida[1][0] == partida[2][0])){
          printf("\n\n");
          if(partida[0][0] == 'X'){
            printf("¡Victoria para el jugador!\n");
            return "Victoria";
          }else{
            printf("¡Perdiste! Victoria para la CPU\n");
            return "Derrota";
          }
          fin = true; 
          finAux = true; 
          break;
        }
      }

      /*5*/
      if((partida[0][1] == 'X') || (partida[0][1] == 'O')){
        if((partida[0][1] == partida[1][1]) && (partida[1][1] == partida[2][1])){
          printf("\n\n");
          if(partida[0][1] == 'X'){
            printf("¡Victoria para el jugador!\n");
            return "Victoria";
          }else{
            printf("¡Perdiste! Victoria para la CPU\n");
            return "Derrota";
          }
          fin = true;  
          finAux = true;
          break;
        }
      }

      /*6*/
      if((partida[0][2] == 'X') || (partida[0][2] == 'O')){
        if((partida[0][2] == partida[1][2]) && (partida[1][2] == partida[2][2])){
          printf("\n\n");
          if(partida[0][2] == 'X'){
            printf("¡Victoria para el jugador!\n");
            return "Victoria";
          }else{
            printf("¡Perdiste! Victoria para la CPU\n");
            return "Derrota";
          }
          fin = true;  
          finAux = true;
          break;
        }
      }

      /*7*/
      if((partida[0][0] == 'X') || (partida[0][0] == 'O')){
        if((partida[0][0] == partida[1][1]) && (partida[1][1] == partida[2][2])){
          printf("\n\n");
          if(partida[0][0] == 'X'){
            printf("¡Victoria para el jugador!\n");
            return "Victoria";
          }else{
            printf("¡Perdiste! Victoria para la CPU\n");
            return "Derrota";
          }
          fin = true;  
          finAux = true;
          break;
        }
      }

      /*8*/
      if((partida[0][2] == 'X') || (partida[0][2] == 'O')){
        if((partida[0][2] == partida[1][1]) && (partida[1][1] == partida[2][0])){
          printf("\n\n");
          if(partida[0][2] == 'X'){
            printf("¡Victoria para el jugador!\n");
            return "Victoria";
          }else{
            printf("¡Perdiste! Victoria para la CPU\n");
            return "Derrota";
          }
          fin = true; 
          finAux = true; 
          break;
        }
      }
    }
    
    if(cont == 9) fin = true; //no hay mas movimientos

    }while((fin != true) || (finAux != true));

    return "Empate";
}