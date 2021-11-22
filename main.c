#include<stdio.h>
#include<stdlib.h>
#include "cargar.h"
#include "Admin.h"
#include "tipos.h"
#include "menus.h"
#include "Modulolog.h"
// Toda cadena tendra 1 caracter mas para compensar el caracter terminador.



int main(){


  //Si los datos no se cargan correctamente, se cierra el programa
cargar();

        menuInicio();
        log(); //<- Inicio de sesion


        system("pause");


return 0;
}
