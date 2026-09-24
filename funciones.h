#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 2

typedef struct {
   char nombre[15];
   char apellido[15];
   char nom_artistico[15];
   
}Interprete;

typedef struct {
   char nombre[15];
   Interprete cantante;
   int genero;
   float duracion;
}Cancion;

void agregarCancion(Cancion favoritas[],int i);
void imprimir(Cancion lista[]);