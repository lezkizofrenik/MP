#include "tipos.h"
#include "modulobaja.h"

void ModuloBaja(m,id){
    switch(m){
case 1: eliminarusua(id);
case 2: eliminaralum(id);
case 3: eliminarmat(id);
case 4: eliminarhora(id);
    }
actualizar();

}
void eliminarusua (char id[]){
    int i;
    char resp;
    for (i=0;i<nUsuarios;i++){
        if (strcmp (vUsuarios[i].Id_usuario,id)== 0){
                printf ("Se va a eliminar todos los datos del usuario: %s\n",vUsuarios[i].Nomb_usuario);
                printf ("¿Desea hacerlo?: 's'=Si\n 'n'=No\n");
                scanf ("%c",&resp);
                if (resp == 's'){
                    strcpy((vUsuarios)[i].Id_usuario,(vUsuarios)[i+1].Id_usuario );
                    strcpy((vUsuarios)[i].Nomb_usuario,(vUsuarios)[i+1].Nomb_usuario);
                    strcpy((vUsuarios)[i].Perfil_usuario,(vUsuarios)[i+1].Perfil_usuario);
                    strcpy((vUsuarios)[i].Usuario,(vUsuarios)[i+1].Usuario );
                    strcpy((vUsuarios)[i].Contrasena,(vUsuarios)[i+1].Contrasena);
                    eliminarhora (id);
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

void eliminaralum (char id[]){
    int i;
    char resp;
    for (i=0;i<nAlumnos;i++){
        if (strcmp (vAlumnos[i].Id_alumno,id)== 0){
                printf ("Se va a eliminar todos los datos del alumno: %s\n",vAlumnos[i].Nombre_alum);
                printf ("¿Desea hacerlo?: 's'=Si\n 'n'=No\n");
                scanf ("%c",&resp);
                if (resp == 's'){
                    strcpy((vAlumnos)[i].Id_alumno,(vAlumnos)[i+1].Id_alumno);
                    strcpy((vAlumnos)[i].Nombre_alum,(vAlumnos)[i+1].Nombre_alum);
                    strcpy((vAlumnos)[i].Direc_alum,(vAlumnos)[i+1].Direc_alum);
                    strcpy((vAlumnos)[i].Local_alum,(vAlumnos)[i+1].Local_alum);
                    strcpy((vAlumnos)[i].Curso,(vAlumnos)[i+1].Curso);
                    strcpy((vAlumnos)[i].Grupo,(vAlumnos)[i+1].Grupo);
                    eliminarmatr (id);
                    eliminarcalif (id);
                    eliminarfalt (id);
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

void eliminarhora (char id[]){
    int i;
    for (i=0;i<nHorarios;i++){
        if (strcmp (vHorarios[i].Id_profesor,id) == 0){
            strcpy ((vHorarios)[i].Id_profesor,(vHorarios)[i+1].Id_profesor);
            strcpy ((vHorarios)[i].Dia_clase,(vHorarios)[i+1].Dia_clase);
            strcpy ((vHorarios)[i].Hora_clase,(vHorarios)[i+1].Hora_clase);
            strcpy ((vHorarios)[i].Id_materia,(vHorarios)[i+1].Id_materia);
            strcpy ((vHorarios)[i].Grupo,(vHorarios)[i+1].Grupo);
                        }

}

}

void eliminarmatr (char id[]){
        int i;
    for (i=0;i<nMatriculas;i++){
        if (strcmp (vMatriculas[i].Id_alum,id) == 0){
            strcpy ((vMatriculas)[i].Id_materias,(vMatriculas)[i+1].Id_materias);
            strcpy ((vMatriculas)[i].Id_alum,(vMatriculas)[i+1].Id_alum);
                        }

}

}

void eliminarcalif (char id[]){
        int i;
    for (i=0;i<nCalificaciones;i++){
        if (strcmp (vCalificaciones[i].Id_alum,id) == 0){
            strcpy ((vCalificaciones)[i].Fecha_calif,(vCalificaciones)[i+1].Fecha_calif);
            strcpy ((vCalificaciones)[i].Descrip_calif,(vCalificaciones)[i+1].Descrip_calif);
            strcpy ((vCalificaciones)[i].Id_materia,(vCalificaciones)[i+1].Id_materia);
            strcpy ((vCalificaciones)[i].Id_alum,(vCalificaciones)[i+1].Id_alum);
            strcpy ((vCalificaciones)[i].Valor_calif,(vCalificaciones)[i+1].Valor_calif);
                        }

}


}

void eliminarfalt (char id[]){
        int i;
    for (i=0;i<nFaltas;i++){
        if (strcmp (vFaltas[i].Id_alum,id) == 0){
            strcpy ((vFaltas)[i].Fecha_falta,(vFaltas)[i+1].Fecha_falta);
            strcpy ((vFaltas)[i].Hora_falta,(vFaltas)[i+1].Hora_falta);
            strcpy ((vFaltas)[i].Descrip_falta,(vFaltas)[i+1].Descrip_falta);
            strcpy ((vFaltas)[i].Estado_falta,(vFaltas)[i+1].Estado_falta);
            strcpy ((vFaltas)[i].Id_alum,(vFaltas)[i+1].Id_alum);
                        }

}


}

void eliminarmat (char id[]){
    int i,j;
    char resp;
    for (i=0;i<nMaterias;i++){
        if (strcmp (vMaterias[i].Id_materia,id)== 0){
                printf ("Se va a eliminar todos los datos de la materia: %s\n",vMaterias[i].Nombre_materia);
                printf ("¿Desea hacerlo?: 's'=Si\n 'n'=No\n");
                scanf ("%c",&resp);
                if (resp == 's'){
                    strcpy((vMaterias)[i].Id_materia,(vMaterias)[i+1].Id_materia);
                    strcpy((vMaterias)[i].Nombre_materia,(vMaterias)[i+1].Nombre_materia);
                    strcpy((vMaterias)[i].Abrev_materia,(vMaterias)[i+1].Abrev_materia);

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
