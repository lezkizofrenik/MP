#include <stdio.h>
#include <string.h>
#include "tipos.h"
#include "modulobaja.h"


void ModuloListar(int m){
switch(m){
case 1: listarusua(); break;
case 2: listaralum(); break;
case 3: listarmate(); break;
case 4: listarhora(); break;
case 5: listaralummat(); break;
case 6: listarcalif(); break;
case 7: listarfaltas(); break;
}
}







void listarusua (usuarios *vUsuarioss,int nUsuario){
    int i;
    for(i=0;i<nUsuario;i++)
printf("%s-%s-%s-%s-%s\n", vUsuarios[i].Id_usuario,vUsuarioss[i].Nomb_usuario,vUsuarioss[i].Perfil_usuario,vUsuarios[i].Usuario,vUsuarios[i].Contrasena);
}

void listaralum (alumnos *vAlumnos,int nAlumno){ //No terminado
    int i,j;
    char e,id;
    for (i=0;i<nAlumno;i++)
    printf("%s-%s-%s-%s-%s-%s\n", vAlumnos[i].Id_alumno,vAlumnos[i].Nombre_alum,vAlumnos[i].Direc_alum,vAlumnos[i].Local_alum,vAlumnos[i].Curso,vAlumnos[i].Grupo); //Lista alumnos
    puts ("¿Desea seleccionar algun alumno: 's'=Si,'n'=No");
    scanf ("%c",&e);
    switch (e){
    case 's':{
        puts ("Introduzca Id del alumno");
        scanf ("%s",&id);
        printf("¿Que operacion desea realizar?: 1.Listar materias del alumno\n 2.Cambios de matrícula\n 3.Eliminar matricula\n 4.Crear nuevas matriculas\n");
        scanf ("%i",&j);
        switch (j){
            case 1: listaralummat(id);break;
            case 2: modmatralum(id,vMatriculas,nMatriculas);break;
            case 3: eliminarmatr(id);break;
            case 4: altaMatricula();break;
        }
    };break;
            case 'n':
                printf ("Saliendo de la lista de alumnos\n");break;
    }

}


void listarmate (materias *vMaterias,int nMateria){
    int i;
    for(i=0;i<nMaterias;i++)
printf("%s-%s-%s\n", vMaterias[i].Id_materia, vMaterias[i].Nombre_materia, vMaterias[i].Abrev_materia);

}


void listarhora (horarios *vHorarios, int nHorario){
    int i,j;
    char e,id;
    for(i=0;i<nHorarios;i++)
printf ("%s-%s-%s-%s-%s",vHorarios[i].Id_profesor,vHorarios[i].Dia_clase,vHorarios[i].Hora_clase,vHorarios[i].Id_materia,vHorarios[i].Grupo);
puts ("¿Desea seleccionar algun profesor?: 's'=Si\n 'n'=No\n");
scanf ("%c",&e);
       switch (e){
           case 's': {
               printf ("Introduzca Id del profesor\n");
               scanf ("%s",&id);
               printf("¿Que operacion desea realizar?: 1.Añadir horas de clase\n 2.Eliminar horas de clase\n 3.Modificar horas\n");
        scanf ("%i",&j);
        switch (j){
            case 1: altaHorario();break;
            case 2: eliminarhora(id);break;
            case 3: modhora(id,vHorarios,nHorarios);break;
        }
    };break;
            case 'n':
                printf ("Saliendo de la lista de horarios\n");break;
    }

           }




void listaralummat (char id[]){ //Identifica las materias en las que está matrículado un alumno específico
    int i,j;
    for (i=0;i<nMatriculas;i++){
         if(strcmp(vMatriculas[i].Id_alum,id) == 0){ //Localiza la matricula a la que pertenece
            for (j=0;j<nMaterias;j++){ //Buscar el id materia de matricula en materias
                if (strcmp (vMatriculas[i].Id_materias,vMaterias[j].Id_materia)== 0) //LOcaliza materias en las que está matriculado
                    printf ("La materia en la que esta matriculado este alumno es: %s\n",vMaterias[j].Nombre_materia);
            }

         }
    }
}



void listarcalif (char id[], calificaciones *vCalificaciones, int nCalificaciones){ //Identifica las materias en las que está matrículado un alumno específico
    int i;
    for (i=0;i<nCalificaciones;i++){
         if(strcmp(vCalificaciones[i].Id_alum,id) == 0){ //Localiza la matricula a la que pertenece
            printf("%s-%s-%s-%s-%s",vCalificaciones[i].Fecha_calif,vCalificaciones[i].Descrip_calif,vCalificaciones[i].Id_materia,vCalificaciones[i].Id_alum,vCalificaciones[i].Valor_calif);

    }
}
}

void listarfaltas (char id[], faltas *vFaltas, int nFaltas){ //Identifica las materias en las que está matrículado un alumno específico
    int i;
    for (i=0;i<nFaltas;i++){
         if(strcmp(vFaltas[i].Id_alum,id) == 0) //Localiza la matricula a la que pertenece
            printf("%s-%s-%s-%s-%s",vFaltas[i].Fecha_falta,vFaltas[i].Hora_falta,vFaltas[i].Descrip_falta,vFaltas[i].Estado_falta,vFaltas[i].Id_alum);

    }
}
