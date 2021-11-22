#include<stdio.h>
#include "cargar.h"
#include "tipos.h"

int ret=0; //Indica si un fichero se ha abierto mal, que lo indicara el RETURN


int cargar(){


cargarUsuarios();
cargarAlumnos();
cargarMaterias();
cargarMatriculas();
cargarHorarios();
cargarCalificaciones();
cargarFaltas();

return ret;
}


//USUARIOS

void cargarUsuarios(){

FILE *fichero;
char linea[100];             // Guardará cada línea que leamos del fichero.
char *token;

vUsuarios=NULL;
nUsuarios=1;
fichero=fopen("Usuarios.txt","r");

    if (fichero==NULL){

        puts("Error al abrir el fichero usuarios.txt.");
        ret=1;

    }else{ //Si se ha abierto bien el fichero, hace lo siguiente:



            if(vUsuarios==NULL){


                while(fgets(linea,100,fichero)) nUsuarios++;
                if((vUsuarios=(usuarios*)malloc(nUsuarios*sizeof(usuarios)))==NULL)
                puts("Error. No se ha podido reservar memoria.      Vector: vUsuarios");
                else{

                puts("Se ha reservado memoria correctamente.       Vector: vUsuarios");
do{
                token=strtok(linea,"-");
                if(token==0) break;
                strcpy((vUsuarios)[nUsuarios].Id_usuario,token);

                token=strtok(NULL,"-");
                if(token==0) break;
                strcpy((vUsuarios)[nUsuarios].Nomb_usuario,token);

                token=strtok(NULL,"-");
                if(token==0) break;
                strcpy((vUsuarios)[nUsuarios].Perfil_usuario,token);

                token=strtok(NULL,"-");
                if(token==0) break;
                strcpy((vUsuarios)[nUsuarios].Usuario,token);

                token=strtok(NULL,"\n");
                strcpy((vUsuarios)[nUsuarios].Contrasena,token);
   }while(!feof(fichero));
            }}}



  fclose(fichero);

}

void cargarAlumnos(){

FILE *fichero;
char linea[100];             // Guardará cada línea que leamos del fichero.
char *token;

nAlumnos=1;
vAlumnos=NULL;



fichero=fopen("Alumnos.txt","r");

    if (fichero==NULL){

        puts("Error al abrir el fichero usuarios.txt.");
        ret=1;
    }else{ //Si se ha abierto bien el fichero, hace lo siguiente:


  if(vAlumnos==NULL){


                while(fgets(linea,100,fichero)) nAlumnos++;
                if((vAlumnos=(alumnos*)malloc(nAlumnos*sizeof(alumnos)))==NULL)
                puts("Error. No se ha podido reservar memoria.      Vector: vAlumnos");
                else{
                puts("Se ha reservado memoria correctamente.       Vector: vAlumnos");
do{
                token=strtok(linea,"-");
                if(token==0) break;
                strcpy((vAlumnos)[nAlumnos].Id_alumno,token);

                token=strtok(NULL,"-");
                if(token==0) break;
                strcpy((vAlumnos)[nAlumnos].Nombre_alum,token);

                token=strtok(NULL,"-");
                if(token==0) break;
                strcpy((vAlumnos)[nAlumnos].Direc_alum,token);

                token=strtok(NULL,"-");
                strcpy((vAlumnos)[nAlumnos].Local_alum,token);

                token=strtok(NULL,"-");
                if(token==0) break;
                strcpy((vAlumnos)[nAlumnos].Curso,token);

                token=strtok(NULL,"\n");
                if(token==0) break;
                strcpy((vAlumnos)[nAlumnos].Grupo,token);

}while(!feof(fichero));
            }}}



  fclose(fichero);

}

void cargarMaterias(){

FILE *fichero;
char linea[100];             // Guardará cada línea que leamos del fichero.
char *token;

nMaterias=1;
vMaterias=NULL;



fichero=fopen("Materias.txt","r");

    if (fichero==NULL){

        puts("Error al abrir el fichero Materias.txt.");
        ret=1;
    }else{ //Si se ha abierto bien el fichero, hace lo siguiente:


  if(vMaterias==NULL){


                while(fgets(linea,100,fichero)) nMaterias++;
                if((vMaterias=(materias*)malloc(nMaterias*sizeof(materias)))==NULL)
                puts("Error. No se ha podido reservar memoria.      Vector: vMaterias");
                else{
                puts("Se ha reservado memoria correctamente.       Vector: vMaterias");
do{
                token=strtok(linea,"-");
                if(token==0) break;
                strcpy((vMaterias)[nMaterias].Id_materia,token);

                token=strtok(NULL,"-");
                if(token==0) break;
                strcpy((vMaterias)[nMaterias].Nombre_materia,token);

                token=strtok(NULL,"\n");
                if(token==0) break;
                strcpy((vMaterias)[nMaterias].Abrev_materia,token);


}while(!feof(fichero));
            }}}



  fclose(fichero);

}



void cargarMatriculas(){

FILE *fichero;
char linea[100];             // Guardará cada línea que leamos del fichero.
char *token;


vMatriculas=NULL;



fichero=fopen("Matriculas.txt","r");

    if (fichero==NULL){

        puts("Error al abrir el fichero matriculas.txt.");
        ret=1;
    }else{ //Si se ha abierto bien el fichero, hace lo siguiente:

    if(vMatriculas==NULL){


                while(fgets(linea,100,fichero)) nMatriculas++;
                if((vMatriculas=(matriculas*)malloc(nMatriculas*sizeof(matriculas)))==NULL)
                puts("Error. No se ha podido reservar memoria.      Vector: vMatriculas");
                else{

                 puts("Se ha reservado memoria correctamente.       Vector: vMatriculas");

do{
                token=strtok(linea,"-");
                if(token==0) break;
                strcpy((vMatriculas)[nMatriculas].Id_materias,token); //No se si hay error en esta estructura. pone otra cosa

                token=strtok(NULL,"\n");
                if(token==0) break;
                strcpy((vMatriculas)[nMatriculas].Id_alum,token);

             }while(!feof(fichero));
            }}}



  fclose(fichero);

}

void cargarCalificaciones(){

FILE *fichero;
char linea[100];             // Guardará cada línea que leamos del fichero.
char *token;

nCalificaciones=1;
vCalificaciones=NULL;



fichero=fopen("Calificaciones.txt","r");

    if (fichero==NULL){

        puts("Error al abrir el fichero DATA/calificaciones.txt.");
        ret=1;
    }else{ //Si se ha abierto bien el fichero, hace lo siguiente:



               if(vUsuarios==NULL){


                while(fgets(linea,100,fichero)) nCalificaciones++;
                if((vCalificaciones=(calificaciones*)malloc(nCalificaciones*sizeof(calificaciones)))==NULL)
                puts("Error. No se ha podido reservar memoria.      Vector: vUsuarios");
                else{
                puts("Se ha reservado memoria correctamente.       Vector: vUsuarios");
do{

                token=strtok(linea,"-");
                if(token==0) break;
                strcpy((vCalificaciones)[nCalificaciones].Fecha_calif,token);

                token=strtok(NULL,"-");
                if(token==0) break;
                strcpy((vCalificaciones)[nCalificaciones].Descrip_calif,token);

                token=strtok(NULL,"-");
                strcpy((vCalificaciones)[nCalificaciones].Id_materia,token);


                token=strtok(NULL,"-");
                if(token==0) break;
                strcpy((vCalificaciones)[nCalificaciones].Id_alum,token);


                token=strtok(NULL,"-");
                if(token==0) break;
                strcpy((vCalificaciones)[nCalificaciones].Valor_calif,token);


             }while(!feof(fichero));
            }}}



  fclose(fichero);

}


void cargarFaltas(){

FILE *fichero;
char linea[100];             // Guardará cada línea que leamos del fichero.
char *token;

nFaltas=1;
vFaltas=NULL;



fichero=fopen("Faltas.txt","r");

    if (fichero==NULL){

        puts("Error al abrir el fichero DATA/Faltas.txt.");
        ret=1;
    }else{ //Si se ha abierto bien el fichero, hace lo siguiente:

              if(vFaltas==NULL){


                while(fgets(linea,100,fichero)) nFaltas++;
                if((vFaltas=(faltas*)malloc(nFaltas*sizeof(faltas)))==NULL)
                puts("Error. No se ha podido reservar memoria.      Vector: vUsuarios");
                else{
                puts("Se ha reservado memoria correctamente.       Vector: vUsuarios");

do{
                token=strtok(linea,"-");
                if(token==0) break;
                strcpy((vFaltas)[nFaltas].Fecha_falta,token);

                token=strtok(NULL,"-");
                if(token==0) break;
                strcpy((vFaltas)[nFaltas].Hora_falta,token);

                token=strtok(NULL,"-");
                if(token==0) break;
                strcpy((vFaltas)[nFaltas].Descrip_falta,token);


                token=strtok(NULL,"-");
                if(token==0) break;
                strcpy((vFaltas)[nFaltas].Estado_falta,token);


                token=strtok(NULL,"-");
                if(token==0) break;
                strcpy((vFaltas)[nFaltas].Id_alum,token);
   }while(!feof(fichero));
            }}}



  fclose(fichero);

}


void cargarHorarios(){

FILE *fichero;
char linea[100];             // Guardará cada línea que leamos del fichero.
char *token;

nHorarios=1;
vHorarios=NULL;



fichero=fopen("Horarios.txt","r");

    if (fichero==NULL){

        puts("Error al abrir el fichero DATA/Horarios.txt.");
        ret=1;
    }else{ //Si se ha abierto bien el fichero, hace lo siguiente:

                if(vHorarios==NULL){


                while(fgets(linea,100,fichero)) nHorarios++;
                if((vUsuarios=(usuarios*)malloc(nUsuarios*sizeof(usuarios)))==NULL)
                puts("Error. No se ha podido reservar memoria.      Vector: vHorarios");
                else{

                puts("Se ha reservado memoria correctamente.       Vector: vHorarios");
                do{

                token=strtok(linea,"-");
                if(token==0) break;
                strcpy((vHorarios)[nHorarios].Id_profesor,token);

                token=strtok(NULL,"-");
                if(token==0) break;
                strcpy((vHorarios)[nHorarios].Dia_clase,token);

                token=strtok(NULL,"-");
                if(token==0) break;
                strcpy((vHorarios)[nHorarios].Hora_clase,token);


                token=strtok(NULL,"-");
                if(token==0) break;
                strcpy((vHorarios)[nHorarios].Id_materia,token);


                token=strtok(NULL,"-");
                strcpy((vHorarios)[nHorarios].Grupo,token);

        }while(!feof(fichero));
                }
                }
    }

  fclose(fichero);

}

