#include <stdio.h>
#include "tipos.h"




void modusua (int id,usuarios *vUsuarios, int nUsuario){
    int i;
    for (i=0;i<nUsuario;i++){
        if (strcmp (vUsuarios[i].Id_usuario,id)== 0){
                int op;
            printf ("Desea modificar: 1.Id usuario\n 2.Nombre completo\n 3.Perfil\n 4.Nombre usuario\n 5.Contrasena\n");
            scanf ("%i",&op);
        switch (op){
        case 1:{
            printf ("Introduzca nuevo Id de usuario\n");
            scanf ("%s",&vUsuarios[i].Id_usuario); //No se si se borra el dato que estaba antes
            printf ("El nuevo Id de %s es: %s\n",vUsuarios[i].Nomb_usuario,vUsuarios[i].Id_usuario);
        }break;
        case 2:{
            printf ("Introduzca nuevo nombre completo\n");
            scanf ("%s",&vUsuarios[i].Nomb_usuario);
            printf ("El nuevo nombre es %s",vUsuarios[i].Nomb_usuario);
        }break;
        case 3:{
            printf ("Introduzca nuevo perfil\n");
            scanf ("%s",&vUsuarios[i].Perfil_usuario);
            printf ("El nuevo perfil de %s es $s",vUsuarios[i].Nomb_usuario,vUsuarios[i].Perfil_usuario);
        }break;
        case 4:{
            printf ("Introduzca nuevo nombre de usuario\n");
            scanf ("%s",&vUsuarios[i].Usuario);
            printf ("El nuevo nombre es %s",vUsuarios[i].Usuario);
        }break;
        case 5:{
            printf ("Introduzca nueva contrasena\n");
            scanf ("%s",&vUsuarios[i].Contrasena);
            printf ("El nuevo nombre es %s",vUsuarios[i].Contrasena);
        }break;
        }
        }
        else
            puts ("El usuario no existe");
    }

}

void modalum (int id,alumnos *vAlumnos, int nAlumnos){
    int i;
    for (i=0;i<nAlumnos;i++){
        if (strcmp (vAlumnos[i].Id_alumno,id)== 0){
                int op;
            printf ("Desea modificar: 1.Id alumno\n 2.Nombre alumno\n 3.Direccion\n 4.Localidad\n 5.Curso\n 6.Grupo\n");
            scanf ("%i",&op);
        switch (op){
        case 1:{
            printf ("Introduzca nuevo Id de alumno\n");
            scanf ("%s",&vAlumnos[i].Id_alumno); //No se si se borra el dato que estaba antes
            printf ("El nuevo Id de %s es: %s\n",vAlumnos[i].Nombre_alum,vAlumnos[i].Id_alumno);
        }break;
        case 2:{
            printf ("Introduzca nuevo nombre del alumno\n");
            scanf ("%s",&vAlumnos[i].Nombre_alum);
            printf ("El nuevo nombre es %s",vAlumnos[i].Nombre_alum);
        }break;
        case 3:{
            printf ("Introduzca nuevo direccion\n");
            scanf ("%s",&vAlumnos[i].Direc_alum);
            printf ("La nueva direccion de %s es $s",vAlumnos[i].Nombre_alum,vAlumnos[i].Direc_alum);
        }break;
        case 4:{
            printf ("Introduzca nueva localidad del alumno\n");
            scanf ("%s",&vAlumnos[i].Local_alum);
            printf ("La nueva localidad es %s",vAlumnos[i].Local_alum);
        }break;
        case 5:{
            printf ("Introduzca el nuevo curso\n");
            scanf ("%s",&vAlumnos[i].Curso);
            printf ("El nuevo curso es %s",vAlumnos[i].Curso);
        }break;
        case 6:{
            printf ("Introduzca el nuevo grupo\n");
            scanf ("%s",&vAlumnos[i].Grupo);
            printf ("El nuevo grupo es %s",vAlumnos[i].Grupo);
        }break;
        }
        }
        else
            puts ("El alumno no existe");
    }

}

void modmate (int id,materias *vMaterias, int nMaterias){
    int i;
    for (i=0;i<nMaterias;i++){
        if (strcmp (vMaterias[i].Id_materia,id)== 0){
                int op;
            printf ("Desea modificar: 1.Id de materia\n 2.Nombre de la materia\n 3.Abreviatura de la materia\n");
            scanf ("%i",&op);
        switch (op){
        case 1:{
            printf ("Introduzca nuevo Id de la materia\n");
            scanf ("%s",&vMaterias[i].Id_materia); //No se si se borra el dato que estaba antes
            printf ("El nuevo Id de %s es: %s\n",vMaterias[i].Nombre_materia,vMaterias[i].Id_materia);
        }break;
        case 2:{
            printf ("Introduzca nuevo nombre de la materia\n");
            scanf ("%s",&vMaterias[i].Nombre_materia);
            printf ("El nuevo nombre es %s",vMaterias[i].Nombre_materia);
        }break;
        case 3:{
            printf ("Introduzca la nueva abreviatura de la materia\n");
            scanf ("%s",&vMaterias[i].Abrev_materia);
            printf ("La nueva abreviatura de %s es $s",vMaterias[i].Nombre_materia,vMaterias[i].Abrev_materia);
        }break;
        }
        }
        else
            puts ("La materia no existe");
    }

}



void modhora (int id,horarios *vHorario, int nHorarios){
    int i;
    for (i=0;i<nHorarios;i++){
        if (strcmp (vHorario[i].Id_profesor,id)== 0){
                int op;
            printf ("Desea modificar: 1.Id del profesor\n 2.Dia de clase\n 3.Hora de clase\n 4.Id de la materia\n 5.Grupo\n");
            scanf ("%i",&op);
        switch (op){
        case 1:{
            printf ("Introduzca nuevo Id del profesor\n");
            scanf ("%s",&vHorario[i].Id_profesor); //No se si se borra el dato que estaba antes
            printf ("El nuevo Id del profesor es: %s\n",vHorario[i].Id_profesor);
        }break;
        case 2:{
            printf ("Introduzca nuevo dia de clase\n");
            scanf ("%s",&vHorario[i].Dia_clase);
            printf ("El nuevo dia de clase es %s",vHorario[i].Dia_clase);
        }break;
        case 3:{
            printf ("Introduzca nueva hora de clase \n");
            scanf ("%s",&vHorario[i].Hora_clase);
            printf ("La nueva hora de clase es $s",vHorario[i].Hora_clase);
        }break;
        case 4:{
            printf ("Introduzca nuevo Id de materia\n");
            scanf ("%s",&vHorario[i].Id_materia);
            printf ("El nuevo Id de materia es %s",vHorario[i].Id_materia);
        }break;
        case 5:{
            printf ("Introduzca nuevo grupo\n");
            scanf ("%s",&vHorario[i].Grupo);
            printf ("El nuevo grupo es %s",vHorario[i].Grupo);
        }break;
        }
        }
        else
            puts ("El profesor no tiene horario asignado");
    }

}

void modmatralum (int id, matriculas *vMatriculas,int nMatriculas){
    int i;
    for (i=0;i<nMatriculas;i++){
        if (strcmp (vMatriculas[i].Id_alum,id)== 0){
                int op;
            printf ("Desea modificar la matricula del alumno: s\n o n\n");
            scanf ("%i",&op);
        switch (op){
        case 's':{
            printf ("Introduzca nuevo Id de la materia\n");
            scanf ("%s",&vMatriculas[i].Id_materias); //No se si se borra el dato que estaba antes
            printf ("La nueva materia en la que esta matriculado %s es %s",vMatriculas[i].Id_alum,vMatriculas[i].Id_alum);
        }break;
        }
        }
        else
            puts ("El usuario no esta matriculado");

}
}
