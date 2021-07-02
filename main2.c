#include <stdio.h>
#include <stdbool.h>
#include "Map.h"
#include "Tablero.h"

int main(){

  int op = 0;
  int pos;
  char ficha;
  char nick[20];
  char partida[3][3];
  bool fin = false;
  bool finAux = false;
  char resultado[10];


  //Map* Map = createMap(); //crear mapa

  do{

    printf("   1. Iniciar sesion\n");
    printf("   2. Registrarse\n");
    printf("   3. Jugar como invitado\n");
    printf("   4. Salir\n\n");
    printf("   Escribir el numero de la opcion correspondiente: ");
    scanf("%i", &op);
    printf("\n\n");

    if((op > 4) || (op < 1)){
      printf("Opcion invalida, intentelo nuevamente\n");
    }

  }while((op > 5) || (op < 0));

  if(op == 1){
    printf("Ingrese su Nick de usuario: ");
    //nick  =  ; //se ingresa un nick a buscar
    
    //searchMap(Map, nick);
    
  }

  if(op == 2){
    printf("Ingrese su Nick de usuario: ");
    //nick = ; //se ingresa el nuevo nick y se crea una lista, la cual se guarda como contenido dentro del mapa de nicks

    
  }

  if(op == 3){
    printf("Cargando tablero\n\n");
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

      pos = movimientos();
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
          }else{
            printf("¡Perdiste! Victoria para la CPU\n");
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
          }else{
            printf("¡Perdiste! Victoria para la CPU\n");
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
          }else{
            printf("¡Perdiste! Victoria para la CPU\n");
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
          }else{
            printf("¡Perdiste! Victoria para la CPU\n");
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
          }else{
            printf("¡Perdiste! Victoria para la CPU\n");
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
          }else{
            printf("¡Perdiste! Victoria para la CPU\n");
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
          }else{
            printf("¡Perdiste! Victoria para la CPU\n");
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
          if(partida[0][0] == 'X'){
            printf("¡Victoria para el jugador!\n");
          }else{
            printf("¡Perdiste! Victoria para la CPU\n");
          }
          fin = true; 
          finAux = true; 
          break;
        }
      }
    }
    




    if(cont == 9) fin = true; //no hay mas movimientos

    }while((fin != true) || (finAux != true));
    
  }

  if(op == 4){
    printf("¡Vuelva pronto!\n");
    return 0;
  }

  return 0;
}
