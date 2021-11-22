#include<stdio.h>
#include<string.h>
#include "tipos.h"
#include "ModuloAlta.h"
#include "modulobaja.h"
#include "modulomenumodif.h"
#include "modulolistar.h"
#include "modulomodificar.h"
#include "menus.h"
void menuInicio(){


        puts("La base de datos se ha cargado correctamente\n\n");//Se vuelcan todos los datos de los ficheros a los registros

        puts("Bienvenido al cuaderno digital del profesor\n\n");
        puts("---------------------------------------------\n\n");
}

void menuOpciones(int m){
int m1;
puts("\n\n1.Alta\n2.Baja\n3.Modificar\n4.Lista\n");
scanf("%i",&m1);
  if(m1<1||m1>4)puts("Error. Introduzca la opcion deseada de nuevo\n\n");
    switch(m1){
        case 1: ModuloAlta(m); break;
        case 2: baja(m); break;
        case 3: modificar(m); break;
        case 4: listar(m); break;

        }
    }


int menuAdmin(){

int m;
puts("Introduce la opcion deseada\n\n");

while(m<1||m>4){

    printf("1.Usuarios\n2.Alumnos\n3.Materias\n4.Horarios\n");
    scanf("%i",&m);
    if(m<1||m>4)puts("ERROR. Introduzca la opcion deseada de nuevo\n\n");
    }
return m;
}
