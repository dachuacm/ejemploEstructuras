#include "funciones.h"



void main(){
// lista de tus 5 canciones favoritas
  int i;
  Cancion favoritas[10];

  for(i=0;i<TAM;i++){
    agregarCancion(favoritas,i);

  }

  imprimir(favoritas);
}

