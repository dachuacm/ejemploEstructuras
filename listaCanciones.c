#include "funciones.h"



void main(){
// lista de tus 5 canciones favoritas
 
int i;
Cancion misfavoritas[TAM],cancion;

/*for(i=0;i<TAM;i++){

     agregarCancion(misfavoritas,i);
   }

  imprimir(misfavoritas);*/
    strcpy(cancion.titulo,"La baca lola");
    cancion.duracion=52.3;
    cancion.genero=2;
    strcpy(cancion.cantante.nombre,"Luca");
    strcpy(cancion.cantante.apellido,"Salas");
    strcpy(cancion.cantante.nom_artistico,"algo");
  
    modificar_cancion_ptr(&cancion);

    imprimir(&cancion);
}

