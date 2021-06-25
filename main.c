#include <stdio.h>
#include <stdlib.h>
#include"gato.h"
//################################
//variables globales
#define User *v_user=NULL;


// implementacion de funciones:
void menu_login(gato* data){   //menu con opciones para iniciar sesion o crear un usuario
    song_array_glob = data->ArraySongs;
    int op,i,pos,end,flag1=0,terminar_programa=0;
    char key;
    char nick[50];
    char new_nick[50];
    //declaracion de variables

    do{
    clrscr();
    pos = 0;
    end = 0;

        gotoxy(5,2);printf(" MENU DE USUARIO");
        highvideo();textbackground(RED);
        gotoxy(2,3);printf(" -INICIAR SESION");
        lowvideo();textbackground(BLACK);
        gotoxy(2,4);printf(" -REGISTRO");
        gotoxy(2,5);printf(" -TERMINAR PROGRAMA");
        do{
            key = getch();
            switch(key){                           //recibe una entrada por teclado, evalua que tecla se apreto y dependiendo de eso cambia la opcion marcada en el menu
                case 72: if (pos == 0)
                        pos = 2;
                        else pos--;
                        break;
                case 80: if (pos == 2) pos =0;
                        else pos++;
                        break;
                case 13: end = 1;
            }
            switch(pos){
                case 0:
                        gotoxy(5,2);printf(" MENU DE USUARIO");
                        highvideo();textbackground(RED);
                        gotoxy(2,3);printf(" -INICIAR SESION");
                        lowvideo();textbackground(BLACK);
                        gotoxy(2,4);printf(" -REGISTRO");
                        gotoxy(2,5);printf(" -TERMINAR PROGRAMA");
                        flag1=0;
                        break;

                case 1:
                        gotoxy(5,2);printf(" MENU DE USUARIO");
                        gotoxy(2,3);printf(" -INICIAR SESION");
                        highvideo();textbackground(RED);
                        gotoxy(2,4);printf(" -REGISTRO");
                        lowvideo();textbackground(BLACK);
                        gotoxy(2,5);printf(" -TERMINAR PROGRAMA");
                        flag1=1;
                        break;

                case 2:
                        gotoxy(5,2);printf(" MENU DE USUARIO");
                        gotoxy(2,3);printf(" -INICIAR SESION");
                        gotoxy(2,4);printf(" -REGISTRO");
                        highvideo();textbackground(RED);
                        gotoxy(2,5);printf(" -TERMINAR PROGRAMA");
                        lowvideo();textbackground(BLACK);
                        flag1=2;
                        break;
            }
        }while(end != 1);

        switch(flag1){

            case 0: clrscr();
                    printf(" \n INICIANDO SESION \n");
                    printf(" \n -INGRESE SU NICK");
                    printf(" : ");
                    scanf("%s",&nick);

                    v_user = searchUser(data->HMusers,nick);
                    if(v_user){
                        menu_usuario(data);
                    }else{
                        printf(" \n USUARIO NO EXISTE\n\n");
                        system("pause");
                    }break;

            case 1: clrscr();
                    printf(" \n CREANDO NUEVO USUARIO\n");
                    printf(" \n INGRESE EL NICK QUE DESEA OCUPAR: ");
                    scanf("%s",&new_nick);

                    v_user = searchUser(data->HMusers,nick);
                    insertUser(data->HMusers,data->Lusers,new_nick);
                    //AQUI DEBE IR TAMBIEN UNA FUNCION QUE VALIDE SI EL NUEVO NICK INGRESADO NO ESTE YA EN EL ARCHIVO
                    break;

            case 2: terminar_programa=1;
                    saveUsercsv(data->Lusers);
                    break;
        }

    }while(terminar_programa != 1);
}


