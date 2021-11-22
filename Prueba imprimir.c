#include <stdio.h>
#include "tipos.h"
#include "cargar.h"

void imprusu (usuarios *vUsuarios, int nUsuarios){
    int i;
    for (i=0;i<=nUsuarios;i++){
        printf ("%s-%s-%s-%s-%s",vUsuarios[i].Id_usuario,vUsuarios[i].Nomb_usuario,vUsuarios[i].Perfil_usuario,vUsuarios[i].Usuario,vUsuarios[i].Contrasena);
    }

}
