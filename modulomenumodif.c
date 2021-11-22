#include <stdio.h>
#include "Modulos.h"
#include "tipos.h"

void listar (int m){
    switch (m){
    case 1: listarusua (vUsuarios,nUsuarios);break;
    case 2: listaralum (vAlumnos,nAlumnos);break;
    case 3: listarmate (vMaterias,nMaterias);break;
    case 4: listarhora (vHorarios,nHorarios);break;

    }
}

void ModuloAlta(int m){
    switch(m){
    case 1: altaUsuarios(); break;
    case 2: altaAlumnos(); break;
    case 3: altaMaterias(); break;
    }
actualizar ();
}
void baja (int m){
    switch (m){
        case 1: eliminarusua(vUsuarios,nUsuarios);break;
        case 2: eliminaralum(vAlumnos,nAlumnos);break;
        case 3: eliminarmat(vMaterias,nMaterias);break;
        case 4: eliminarhora(vHorarios,nMaterias);break;
    }
        actualizar();

    }


void modificar (int m){
    switch (m){
        case 1: modusua(vUsuarios,nUsuarios);break;
        case 2: modalum(vAlumnos,nAlumnos);break;
        case 3: modmate(vMaterias,nMaterias);break;
        case 4: modhora(vHorarios,nHorarios);break;
    }
    actualizar();
}
