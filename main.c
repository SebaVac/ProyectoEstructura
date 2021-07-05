#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "Game.h"
#include "Game2.h"
#include "List.h"
#include "hashmap.h"
#include "Tablero.h"

int main(){

  int op = 0;
  int op2 = 0;
  int pos;
  char ficha;
  char nick[20];
  char partida[3][3];
  bool fin = false;
  bool finAux = false;
  char* resultado;

  
  List *result = createList();
  HashMap* Map;
  Map = createMap(50);//crear mapa

  do{
    printf("\n¡Bienvenido!\n\n");

    printf("   1. Registrarse\n");
    printf("   2. Iniciar Sesion\n");
    printf("   3. Jugar como invitado\n");
    printf("   4. Salir\n\n");

    do{
      printf("Escribir el numero de la opcion correspondiente: ");
      scanf("%i", &op);
      printf("\n");

      if((op > 4) || (op < 1)){
        printf("_____________________________________\n\n");
        printf("Opcion invalida, intentelo nuevamente\n");
        printf("_____________________________________\n\n");
      }

    }while((op > 4) || (op <= 0));

    switch (op){
        
      case 1:
        printf("______________________\n\n");
        printf("Preparando su registro\n");
        printf("______________________\n\n");
        printf("-Utilice un maximo de 20 caracteres contando espacios-\n\n");
        printf("Ingrese su Nick de usuario: ");
        //se ingresa el nuevo nick y se crea una lista, la cual se guarda como contenido dentro del mapa de nicks
        scanf("%s", nick);

        List* list = createList();

        insertMap(Map,nick,list);

      break;

        resultado = guardar_game();//funcion que retorna un caracter "V" si es victoria, "D" si es derrota o "E" si se empato en el juego

        if(strcmp("Victoria",resultado) == 0){
          pushBack(list, "Victoria");
        }

        if(strcmp("Derrota",resultado) == 0){
          pushBack(list, "Derrota");
        }

        if(strcmp("Empate",resultado) == 0){
          pushBack(list, "Empate");
        }


      case 2:
      
        printf("Ingrese su Nick de usuario: ");
        scanf("%s", nick);//se ingresa un nick a buscar

        if (searchMap(Map,nick) != NULL){
          printf("___________________________________\n");
          printf("\nHas iniciado sesion correctamente\n");
          printf("___________________________________\n\n");

          /*buscar lista para ingresar resultado de la sgte partida*/
          printf("1.  Jugar\n");
          printf("2.  Mostrar resultados\n");
          printf("Escribir el numero de la opcion correspondiente: ");
          scanf("%i",&op2);

          if(op2 == 1){
            resultado = guardar_game();

          /*utilizar pushBack para ingresar el resultado*/
              list = searchMap(Map, nick);
              pushBack(list, resultado);

          }else{

          /*se imprimen por pantalla los resultados anteriores*/
          list = searchMap(Map, nick);
          printf("___________________________\n\n");
          printf("Se imprime la lista cargada\n");
          printf("___________________________\n\n");
            
          /*se muestra por pantalla los resultados anteriores con first y next*/
          char * top = firstList(list);

          while(top != NULL){
            printf("* %s\n", top);
            top = nextList(list);
          }

          printf("_______________________________________________\n\n");
          printf("Se han mostrado todos los elementos de la lista\n");
          printf("_______________________________________________\n\n");

          }

        }else{
          printf("______________________\n\n");
          printf("Este usuario no existe\n");
          printf("______________________\n\n");
        }
        
      break;

      case 3:
        juego_sin_guardar();//funcion que prepara la partida, pero no guarda resultados
      break;

      case 4:
        printf("¡Vuelva pronto!\n");
        return 0;
      break;
    }

  }while (op != 4);
  
  return 0;
}