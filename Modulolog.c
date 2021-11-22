#include<stdio.h>
#include<string.h>
#include "tipos.h"
#include "prof.h"
#include "admin.h"
#include "Modulolog.h"

/*Este modulo verifica el inicio de sesion y redirige a las pantallas administrador o profesor*/

void log(usuarios *vUsuarios,int nUsuarios){
    int i;
    char pass[9];
    char id[6];
    char us[6];

    puts("Usuario: ");
        do{ //Lee el usuario. Si ha comprobado todos los vectores y el usuario no coincide, vuelve a introducir otro.
            gets(us);
           for(i=0;i<=nUsuarios;i++){
                    //if(strcmp(vUsuarios[i].Usuario,us)==0){//strcmp devuelve 0 si son iguales, y 1 si no
                        //strcpy(id,vUsuarios[i].Id_usuario); //Guardo el id del usuario, con el que trabajaremos MUCHO

                   //VERIFICACION DE LA CONTRASEÑA
                         puts("Contrasena: ");


                        // do{ //Repetir mientras la contraseña no sea correcta
                                 gets(pass);

                                 if(strcmp(pass,vUsuarios[i].Contrasena)==0){
                                        //Si es correcto, comprueba si es profesor o admin para pasar al menu correspondiente
                                    printf("Ha iniciado sesion como %s.",vUsuarios[i].Nomb_usuario);

                                    if(strcmp("Profesor",vUsuarios[i].Perfil_usuario)==0)

                                        profesor(id); //Pasa el numero donde se localiza el profesor

                                    else admin();
                                 }
                                 else puts("Contraseña incorrecta. Introduzcala de nuevo:");
                         //}while(strcmp(vUsuarios[i].Contrasena,pass)!=0);
                   }

                     //else
                          // puts("Usuario no encontrado. Introduzcalo de nuevo");



    }while(strcmp(vUsuarios[i].Usuario,us)!=0&&i==nUsuarios);





        }
