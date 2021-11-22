#include <stdio.h>
#include <math.h>
#include "tipos.h"

FILE *Usuarios;
FILE *Alumnos;
FILE *Materias;
FILE *Matriculas;
FILE *Horarios;


void altaUsuarios(){
   usuarios n;
            puts ("Introduzca ID del usuario");
            gets (n.Id_usuario);
            fflush(stdin);
            puts ("Introduzca nombre de usuario");
            gets (n.Nomb_usuario);
            fflush(stdin);
            puts ("Introduzca perfil de usuario");
            gets (n.Perfil_usuario);
            fflush(stdin);
            puts ("Introduzca usuario");
            gets (n.Usuario);
            fflush(stdin);
            puts ("Introduzca contraseña");
            gets (n.Contrasena);
            fflush(stdin);
            Usuarios=fopen("Usuarios.txt","a+");
            fprintf (Usuarios,"%s-%s-%s-%s-%s",n.Id_usuario,n.Nomb_usuario,n.Perfil_usuario,n.Usuario,n.Contrasena);
            fclose(Usuarios);
}

void altaAlumnos(){
 alumnos n;
            puts ("Introduzca ID del alumno");
            gets (n.Id_alumno);
            fflush(stdin);
            puts ("Introduzca nombre del alumno");
            gets (n.Nombre_alum);
            fflush(stdin);
            puts ("Introduzca direccion del alumno");
            gets (n.Direc_alum);
            fflush(stdin);
            puts ("Introduzca localidad del alumno");
            gets (n.Local_alum);
            fflush(stdin);
            puts ("Introduzca curso");
            gets (n.Curso);
            fflush(stdin);
            puts ("Introduzca grupo");
            gets (n.Grupo);
            fflush(stdin);
            Alumnos=fopen("Alumnos.txt","a+");
            fprintf (Alumnos,"%s-%s-%s-%s-%s-%s",n.Id_alumno,n.Nombre_alum,n.Direc_alum,n.Local_alum,n.Curso,n.Grupo);
            fclose(Alumnos);
}

void altaMaterias(){
  materias n;
            puts ("Introduzca ID de materia");
            gets (n.Id_materia);
            fflush(stdin);
            puts ("Introduzca nombre de la materia");
            gets (n.Nombre_materia);
            fflush(stdin);
            puts ("Introduzca abreviatura de materia");
            gets (n.Abrev_materia);
            fflush(stdin);
            Materias=fopen("materias.txt","a+");
            fprintf (Materias,"%s-%s-%s",n.Id_materia,n.Nombre_materia,n.Abrev_materia);
            fclose(Materias);
        }
void altaMatricula(){
    matriculas n;
    puts ("Introduzca ID del alumno");
    gets (n.Id_alum);
    fflush (stdin);
    puts ("Introduzac ID de la materia");
    gets (n.Id_materias);
    fflush (stdin);
    Matriculas=fopen("Matriculas.txt","a+");
    fprintf (Matriculas,"%s-%s",n.Id_materias,n.Id_alum);
    fclose(Matriculas);


}
void altaHorario(){
    horarios n;
    puts ("Introduzca ID del profesor");
            gets (n.Id_profesor);
            fflush(stdin);
            puts ("Introduzca dia de clase");
            gets (n.Dia_clase);
            fflush(stdin);
            puts ("Introduzca hora de clase");
            gets (n.Hora_clase);
            fflush(stdin);
            puts ("Introduzca ID de la materia");
            gets (n.Id_materia);
            fflush(stdin);
            puts ("Introduzca grupo");
            gets (n.Grupo);
            fflush(stdin);
            Horarios=fopen("Horarios.txt","a+");
            fprintf (Horarios,"%s-%s-%s-%s-%s",n.Id_profesor,n.Dia_clase,n.Hora_clase,n.Id_materia,n.Grupo);
            fclose(Horarios);

}

