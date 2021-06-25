//LIBRERIAS:
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
#include "list.h"
#include "map.h"


//################################################################################################
//ESTRUCTURAS
//estructura de cancion
typedef struct t_song{
    char s_file[20];
    char l_file[20];
    char title[50];
    char artist[50];
    char album[50];
    int year;
    char genre[15];
    int duration;
    //List* lyrics;
}song;

//################################################################################################
// FUNCIONES MENU
//desplega el menu login con sus opciones
void menu_login(gato* data);
//desplega el menu usuario con sus opciones
void menu_usuario(gato* data);
//desplega el menu post-cancion y retorna la nueva cancion seleccionada
song* menu_postsong(song* last_song);
//################################################################################################
//FUNCIONES MUSICA/LETRAS
//retorna el string en la posicion i de una linea de un archivo csv
const char* get_cvs_field(char* tmp, int i);
//reproduce la cancion llamando a system y retorna el valor entregado por system()
int play_song(song* song);
//abre el archivo y muestra las letras en tiempo real
void show_lyrics(song* song);
//crea y retorna un puntero a una estructura song llenando con los datos que estan en "line_in_csv"
song* create_song_struct(char* line_in_csv);
//################################################################################################
//FUNCIONES PARA ORDENAR
//retorna la cantidad de canciones en el registro de canciones (songs.csv)
int count_songs(char* csv_name);
//ordena el arreglo por titulo y deja seleccionar una posicion del arreglo con (dynamic_selection_songs), retorna 1 si algo fue seleccionado
// y retorna cero si no lo fue
int sort_array_by_title(song** songs);
//ordena el arreglo por artista y deja seleccionar una posicion del arreglo con (dynamic_selection_songs), retorna 1 si algo fue seleccionado
// y retorna cero si no lo fue
int sort_array_by_artist(song** songs);
//ordena el arreglo por genero y deja seleccionar una posicion del arreglo con (dynamic_selection_songs), retorna 1 si algo fue seleccionado
// y retorna cero si no lo fue
int sort_array_by_genre(song** songs);
//imprime las canciones presentes en Array y permite seleccionar una, retorna el valor del indice seleccionado, -1 si no seleciona nada
int dynamic_selection_songs(song** Array,int size_array);
//retorna el numero de veces presente de "word" en la sentencia "string"
int string_coincidence(char* word ,char* string);
//busca las canciones que contengan las palabras de "string" dentro del genero, titulo o artista.
void search_songs(karaoke* songs, char* string);
