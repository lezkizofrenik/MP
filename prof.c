#include "prof.h"
#include "tipos.h"
#include "modulolistar.h"
#include "Modulolog.h"


void profesor(char aux[]){


        n=ModuloBuscarUsuario(aux); //nHorarios no es accesible a todos los modulos? es decir, no hace falta pasarlo como parametro
        i=BuscarMateria(vHorarios[n].Id_materia); //Tambien podriamos pasar el parametro n y trabajar con el vector en el modulo
        /*Notas:

        ·Cada profesor tiene asignado UNA MATERIA EN UN DETERMINADO DIA A UNA DETERMINADA HORA
        ·El ID_USUARIO COINCIDE CON EL ID_PROFESOR*/

        ModuloElegirDia();


system("pause");


}



int ModuloBuscarUsuario(char Id[]){
    int j;
    j=0;
    int i;
    for(i=0;i<nHorarios;i++){
        if(strcmp(vHorarios[i].Id_profesor,Id)==0)
                j=i;
        }


    if(strcmp(vHorarios[i].Id_profesor,Id)!=0&&i<=nHorarios)
        j=nHorarios+1;
        //devuelve un numero mayor que el propio vector, ya que i podria ser 0 y no podemos tomarlo como "el valor del error"
return j;
    }

int BuscarMateria(char id[]){
     /*Modulo en el que se introduce el ID de la materia y te devuelve la abreviacion de la misma
    asi podriamos imprimir la cabecera exactamente igual que en el guion*/
    int i,ret;
    ret=0;
    for(i=0;i<=nMaterias;i++)
        if(strcmp(vMaterias[i].Id_materia,id)==0) ret=i;

return ret;
}


void ModuloElegirDia(){
    //Comprobacion de si el dia seleccionado coincide con el del profesor que haya iniciado sesion

    char dia[1];
    int d; // dia en formato int para trabajar con las condiciones.-> funcion "atoi"
    do{
            puts("Elige a que dia quieres acceder:\n\n");
            puts("1. Lunes\n2. Martes\n3. Miercoles\n4. Jueves\n 5. Viernes\n");
            do{
                gets(dia);
                d=atoi(dia);
                if(d>5||d<1) puts("ERROR. Introduzca de nuevo el dia deseado:\n");
            }while(d>5||d<1);
            if(strcmp(vHorarios[n].Dia_clase,dia)!=0) puts("No tiene clase en el día seleccionado.");
            else ModuloImprimirMaterias();
}while(strcmp(vHorarios[n].Dia_clase,dia)!=0);//Mientras el dia seleccionado sea distinto del que el profesor imparte clases, se repite


}

    //En realidad Esto no deberia de ir asi, ya que hay un volver. Esto deberia programarse desde el modulo log para que retroceda de verdad
void ModuloImprimirMaterias(){
        int opcion;
        printf("GRUPO %s MATERIA %s\n1.- Lista de alumnos\n2.- Cambiar de grupo ",vHorarios[n].Grupo,vMaterias[i].Abrev_materia);
        scanf("%i",&opcion);
        if(opcion==1) listaralummat(vHorarios[n].Id_materia); //Pasa la materia como parametro para listar los alumnos
       /*ELEGIR ALUMNO DE LA LISTA Y MOSTRAR SUS DATOS SEGUN SU ID*/
       else log(&vUsuarios,nUsuarios);


}


