#ifndef PROF
#define PROF
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//Globales
 int n;
 int i;

 /*n es el numero donde se ubica el profesor que ha iniciado sesion en la estructura vHORARIO, (empezamos trabajando
con vUsuarios, donde se verifica el inicio de sesion) ya que, que si se halla en cierta posición en un vector, no
tiene por que estar en la misma en otro. (o al menos asi lo he entendido yo). Hallado por ModuloBuscarUsuario()*/

int ModuloBuscarUsuario(char []);
int BuscarMateria(char []);
void ModuloElegirDia();
void ModuloImprimirMaterias();
void profesor(char []);

#endif
