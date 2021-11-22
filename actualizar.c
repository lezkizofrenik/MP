#include<stdio.h>
#include<stdlib.h>
#include "tipos.h"
void actualizar ()
{
    int i=0;
    FILE *f;

    f=fopen("Usuarios.txt","w"); //Abrimos el fichero usuarios en modo escritura
    while(vUsuarios[i].Id_usuario!= NULL)   //Mientras que el vector usuarios contenga valores, se iran escribiendo en el fichero
    {
        fprintf(f,vUsuarios[i].Id_usuario);
        fprintf(f,"%s","-");
        fprintf(f,vUsuarios[i].Nomb_usuario);
        fprintf(f,"%s","-");
        fprintf(f,vUsuarios[i].Perfil_usuario);
        fprintf(f,"%s","-");
        fprintf(f,vUsuarios[i].Usuario);
        fprintf(f,"%s","-");
        fprintf(f,vUsuarios[i].Contrasena);
        fprintf(f,"%s","\n");
        i++;
    }
    fclose(f);   //Cerramos el fichero usuarios
    i=0;

    f=fopen("Alumnos.txt","w");    //Abrimos el fichero alumnos en modo escritura
    while(vAlumnos[i].Id_alumno!= NULL)    //Mientras que el vector alumnos contenga valores, se iran escribiendo en el fichero
    {
        fprintf(f,vAlumnos[i].Id_alumno);
        fprintf(f,"%s","-");
        fprintf(f,vAlumnos[i].Nombre_alum);
        fprintf(f,"%s","-");
        fprintf(f,vAlumnos[i].Direc_alum);
        fprintf(f,"%s","-");
        fprintf(f,vAlumnos[i].Local_alum);
        fprintf(f,"%s","-");
        fprintf(f,vAlumnos[i].Curso);
        fprintf(f,"%s","-");
        fprintf(f,vAlumnos[i].Grupo);
        fprintf(f,"%s","\n");
        i++;
    }
    fclose (f);    //Cerramos el fichero alumnos
    i=0;

    f=fopen("Materias.txt","w");    //Abrimos el fichero materias en modo escritura
    while(vMaterias[i].Id_materia!= NULL)       //Mientras que el vector materias contenga valores, se iran escribiendo en el fichero
    {
        fprintf(f,vMaterias[i].Id_materia);
        fprintf(f,"%s","-");
        fprintf(f,vMaterias[i].Nombre_materia);
        fprintf(f,"%s","-");
        fprintf(f,vMaterias[i].Abrev_materia);
        fprintf(f,"%s","\n");
        i++;
    }
    fclose (f);   //Cerramos el fichero materias
    i=0;

    f=fopen("Matriculas.txt","w");
    while(vMatriculas[i].Id_materias != NULL)
    {
        fprintf(f,vMatriculas[i].Id_materias);
        fprintf(f,"%s","-");
        fprintf(f,vMatriculas[i].Id_alum);
        fprintf(f,"%s","\n");
        i++;
    }
    fclose (f);
    i=0;
    f=fopen("Calificaciones.txt","w");
    while(vCalificaciones[i].Fecha_calif != NULL)
    {
        fprintf(f,vCalificaciones[i].Fecha_calif);
        fprintf(f,"%s","-");
        fprintf(f,vCalificaciones[i].Descrip_calif);
        fprintf(f,"%s","-");
        fprintf(f,vCalificaciones[i].Id_materia);
        fprintf(f,"%s","-");
        fprintf(f,vCalificaciones[i].Id_alum);
        fprintf(f,"%s","-");
        fprintf(f,vCalificaciones[i].Valor_calif);
        fprintf(f,"%s","\n");
        i++;
    }
    fclose(f);
    i=0;

    f=fopen("Faltas.txt","w");
    while(vFaltas[i].Fecha_falta != NULL)
    {
        fprintf(f,vFaltas[i].Fecha_falta);
        fprintf(f,"%s","-");
        fprintf(f,vFaltas[i].Hora_falta);
        fprintf(f,"%s","-");
        fprintf(f,vFaltas[i].Descrip_falta);
        fprintf(f,"%s","-");
        fprintf(f,vFaltas[i].Estado_falta);
        fprintf(f,"%s","-");
        fprintf(f,vFaltas[i].Id_alum);
        fprintf(f,"%s","\n");
        i++;
    }
    fclose(f);
    i=0;

    f=fopen("Horarios.txt","w");
    while(vHorarios[i].Id_profesor != NULL)
    {
        fprintf(f,vHorarios[i].Id_profesor);
        fprintf(f,"%s","-");
        fprintf(f,vHorarios[i].Dia_clase);
        fprintf(f,"%s","-");
        fprintf(f,vHorarios[i].Hora_clase);
        fprintf(f,"%s","-");
        fprintf(f,vHorarios[i].Id_materia);
        fprintf(f,"%s","-");
        fprintf(f,vHorarios[i].Hora_clase);
        fprintf(f,"%s","\n");
        i++;
    }
fclose (f);
printf("Actualizacion de los ficheros realizada\n");
}
