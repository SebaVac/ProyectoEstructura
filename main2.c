#include <stdio.h>
#include "Map.h"
#include "Tablero.h"

int main(){

  int op = 0;
  int pos;
  char* nick[20];
  char* partida[3][3];
  char* resultado[10];


  //Map* Map = createMap();//crear mapa

  do{

    printf("   1. Iniciar sesion\n");
    printf("   2. Registrarse\n");
    printf("   3. Jugar como invitado\n");
    printf("   4. Salir\n\n");
    printf("   Escribir el numero de la opcion correspondiente: ");
    scanf("%i", &op);

    if((op > 4) || (op < 1)){
      printf("Opcion invalida, intentelo nuevamente\n");
    }

  }while((op < 5) || (op > 0));

  if(op == 1){
    printf("Ingrese su Nick de usuario: ");
    //nick  =  ;//se ingresa un nick a buscar
    
    searchMap(Map, nick);
    
  }

  if(op == 2){
    printf("Ingrese su Nick de usuario: ");
    //nick = ; //se ingresa el nuevo nick y se crea una lista, la cual se guarda como contenido dentro del mapa de nicks

    
  }

  if(op == 3){
    printf("Cargando tablero\n");
    //se comienza la partida sin guardar datos(no lista, no mapa), se muestra el tablero y el grafo comienza a ejecutarse en su respectivo turno

    mostrar_tablero(pos);
    
  }

  if(op == 4){
    printf("Vuelva pronto!\n");
    return 0;
  }

  return 0;
}