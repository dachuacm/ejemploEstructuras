#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 2

/*
 1)Bachata
 2)Corridos
 3)Salsa
 4)Metal
*/

typedef struct {
   char nombre[30];
   char apellido[30];
   char nom_artistico[30];
   
}Interprete;

typedef struct {
   char titulo[30];
   Interprete cantante;
   int genero;
   float duracion;
}Cancion;

void agregarCancion(Cancion favoritas[],int i);
void imprimir(Cancion lista[]);
void limpiarBuffer();
