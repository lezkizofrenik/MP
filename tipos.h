#ifndef _TIPOS_H_
#define _TIPOS_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int nAlumnos;
int nUsuarios;
int nMaterias;
int nMatriculas;
int nCalificaciones;
int nFaltas;
int nHorarios;



// Toda cadena tendra 1 caracter mas para compensar el caracter terminador.

typedef struct {
    char Id_usuario[4];
    char Nomb_usuario[21];
    char Perfil_usuario[16];
    char Usuario[6];
    char Contrasena[9];
}usuarios;

typedef struct {
    char Id_alumno[7];
    char Nombre_alum[21];
    char Direc_alum[31];
    char Local_alum[31];
    char Curso[31];
    char Grupo[11];
}alumnos;

typedef struct {
    char Id_materia[5];
    char Nombre_materia[51];
    char Abrev_materia[4];
}materias;

typedef struct {
    char Id_materias[5];
    char Id_alum[7];
}matriculas;

typedef struct {
    char Fecha_calif[11];
    char Descrip_calif[31];
    char Id_materia[5];
    char Id_alum[7];
    char Valor_calif[3];
}calificaciones;

typedef struct {
    char Fecha_falta[11];
    char Hora_falta[1];
    char Descrip_falta[31];
    char Estado_falta[14];
    char Id_alum[7];
}faltas;

typedef struct {
    char Id_profesor[4];
    char Dia_clase[1];
    char Hora_clase[1];
    char Id_materia[5];
    char Grupo[11];
}horarios;


alumnos *vAlumnos;
usuarios *vUsuarios;
materias *vMaterias;
matriculas *vMatriculas;
calificaciones *vCalificaciones;
faltas *vFaltas;
horarios *vHorarios;



#endif
