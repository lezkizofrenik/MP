#include <stdio.h>
#include <math.h>
#include "tipos.h"
FILE *Usuarios;
FILE *Alumnos;
FILE *Materias;

// MODIFICAR

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
            Usuarios=fopen("usuarios.txt","a+");
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
            Alumnos=fopen("alumnos.txt","a+");
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


//MODIFICAR
void eliminarusua (int id, usuarios *vUsuarios, int nUsuario){
    int i,j;
    char resp;
    for (i=0;i<nUsuario;i++){
        if (strcmp (vUsuarios[i].Id_usuario,id)== 0){
                printf ("Se va a eliminar todos los datos del usuario: %s\n",vUsuarios[i].Nomb_usuario);
                printf ("¿Desea hacerlo?: 's'=Si\n 'n'=No\n");
                scanf ("%c",&resp);
                if (resp == 's'){
                    strcpy(vUsuarios[i].Id_usuario,vUsuarios[i+1].Id_usuario );
                    strcpy(vUsuarios[i].Nomb_usuario,vUsuarios[i+1].Nomb_usuario);
                    strcpy(vUsuarios[i].Perfil_usuario,vUsuarios[i+1].Perfil_usuario);
                    strcpy(vUsuarios[i].Usuario,vUsuarios[i+1].Usuario );
                    strcpy(vUsuarios[i].Contrasena,vUsuarios[i+1].Contrasena);
                    eliminarhora (id,vHorarios,nHorarios);
                    }
                else {
                    if (resp == 'n')
                    printf ("Saliendo de eliminar usuario\n");
                else
                    printf ("Error al borrar usuario\n");
                }
        }
        }

}

void eliminaralum (int id, alumnos *vAlumnos, int nAlumnos){
    int i,j;
    char resp;
    for (i=0;i<nAlumnos;i++){
        if (strcmp (vAlumnos[i].Id_alumno,id)== 0){
                printf ("Se va a eliminar todos los datos del alumno: %s\n",vAlumnos[i].Nombre_alum);
                printf ("¿Desea hacerlo?: 's'=Si\n 'n'=No\n");
                scanf ("%c",&resp);
                if (resp == 's'){
                    strcpy(vAlumnos[i].Id_alumno,vAlumnos[i+1].Id_alumno);
                    strcpy(vAlumnos[i].Nombre_alum,vAlumnos[i+1].Nombre_alum);
                    strcpy(vAlumnos[i].Direc_alum,vAlumnos[i+1].Direc_alum);
                    strcpy(vAlumnos[i].Local_alum,vAlumnos[i+1].Local_alum);
                    strcpy(vAlumnos[i].Curso,vAlumnos[i+1].Curso);
                    strcpy(vAlumnos[i].Grupo,vAlumnos[i+1].Grupo);
                    eliminarmatr (id,vMatriculas,nMatriculas);
                    eliminarcalif (id,vCalificaciones,nCalificaciones);
                    eliminarfalt (id,vFaltas,nFaltas);
                    }
                else {
                    if (resp == 'n')
                    printf ("Saliendo de eliminar alumno\n");
                else
                    printf ("Error: respuesta no correcta\n");
                }
        }
        }
}

void eliminarhora (int id, horarios *vHorarios, int nHorarios){
    int i;
    for (i=0;i<nHorarios;i++){
        if (strcmp (vHorarios[i].Id_profesor,id) == 0){
            strcpy (vHorarios[i].Id_profesor,vHorarios[i+1].Id_profesor);
            strcpy (vHorarios[i].Dia_clase,vHorarios[i+1].Dia_clase);
            strcpy (vHorarios[i].Hora_clase,vHorarios[i+1].Hora_clase);
            strcpy (vHorarios[i].Id_materia,vHorarios[i+1].Id_materia);
            strcpy (vHorarios[i].Grupo,vHorarios[i+1].Grupo);
                        }

}

}

void eliminarmatr (int id, matriculas *vMatriculas, int nMatriculas){
        int i;
    for (i=0;i<nMatriculas;i++){
        if (strcmp (vMatriculas[i].Id_alum,id) == 0){
            strcpy (vMatriculas[i].Id_materias,vMatriculas[i+1].Id_materias);
            strcpy (vMatriculas[i].Id_alum,vMatriculas[i+1].Id_alum);
                        }

}

}

void eliminarcalif (int id, calificaciones *vCalificaciones, int nCalificaciones){
        int i;
    for (i=0;i<nCalificaciones;i++){
        if (strcmp (vCalificaciones[i].Id_alum,id) == 0){
            strcpy (vCalificaciones[i].Fecha_calif,vCalificaciones[i+1].Fecha_calif);
            strcpy (vCalificaciones[i].Descrip_calif,vCalificaciones[i+1].Descrip_calif);
            strcpy (vCalificaciones[i].Id_materia,vCalificaciones[i+1].Id_materia);
            strcpy (vCalificaciones[i].Id_alum,vCalificaciones[i+1].Id_alum);
            strcpy (vCalificaciones[i].Valor_calif,vCalificaciones[i+1].Valor_calif);
                        }

}


}

void eliminarfalt (int id, faltas *vFaltas, int nFaltas){
        int i;
    for (i=0;i<nFaltas;i++){
        if (strcmp (vFaltas[i].Id_alum,id) == 0){
            strcpy (vFaltas[i].Fecha_falta,vFaltas[i+1].Fecha_falta);
            strcpy (vFaltas[i].Hora_falta,vFaltas[i+1].Hora_falta);
            strcpy (vFaltas[i].Descrip_falta,vFaltas[i+1].Descrip_falta);
            strcpy (vFaltas[i].Estado_falta,vFaltas[i+1].Estado_falta);
            strcpy (vFaltas[i].Id_alum,vFaltas[i+1].Id_alum);
                        }

}


}

void eliminarmat (int id, materias *vMaterias, int nMaterias){
    int i,j;
    char resp;
    for (i=0;i<nMaterias;i++){
        if (strcmp (vMaterias[i].Id_materia,id)== 0){
                printf ("Se va a eliminar todos los datos de la materia: %s\n",vMaterias[i].Nombre_materia);
                printf ("¿Desea hacerlo?: 's'=Si\n 'n'=No\n");
                scanf ("%c",&resp);
                if (resp == 's'){
                    strcpy(vMaterias[i].Id_materia,vMaterias[i+1].Id_materia);
                    strcpy(vMaterias[i].Nombre_materia,vMaterias[i+1].Nombre_materia);
                    strcpy(vMaterias[i].Abrev_materia,vMaterias[i+1].Abrev_materia);

                    }
                else {
                    if (resp == 'n')
                    printf ("Saliendo de eliminar materias\n");
                else
                    printf ("Error: respuesta no correcta\n");
                }
        }
        }




}
