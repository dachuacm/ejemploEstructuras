#include "funciones.h"



void main(){
// lista de tus 5 canciones favoritas
 
int i;
Cancion misfavoritas[TAM];

for(i=0;i<TAM;i++){

     agregarCancion(misfavoritas,i);
   }

  imprimir(misfavoritas);
}

