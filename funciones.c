
#include "funciones.h"

void agregarCancion(Cancion favoritas[],int i){

    printf("titulo: ");
    //scanf("%s",favoritas[i].titulo);
   
    fgets(favoritas[i].titulo,29,stdin);
   
    printf(" 1)Bachata 2)Corridos 3)Salsa 4)Metal \n genero:");
    scanf("%d",&favoritas[i].genero);

    printf("duracion: ");
    scanf("%f",&favoritas[i].duracion);
    
   limpiarBuffer();
    printf("Nombre artista: ");
    scanf("%29[^\n]",favoritas[i].cantante.nombre);
   limpiarBuffer();
    printf("Apellido atista: ");
    scanf("%29[^\n]",favoritas[i].cantante.apellido);
   limpiarBuffer();
    printf("Nombre artístico: ");
    scanf("%29[^\n]",favoritas[i].cantante.nom_artistico);
    
   limpiarBuffer();


}  



void imprimir(Cancion lista[ ]){
     
    char generos[4][15]={"Bachata","Corridos","Salsa","Metal"};

    int i;
    printf("\nLista de canciones:\n");
    for(i=0;i<TAM;i++){
       printf("_________________________________\ntitulo: %s",lista[i].titulo);
       printf("genero: %s\n",generos[lista[i].genero-1]);
       //imprimir_genero(lista[i].genero);
       printf("duracion:%f\n",lista[i].duracion);
       printf("nombre artista: %s %s\n",
                lista[i].cantante.nombre,
                lista[i].cantante.apellido);
       printf("nombre artistico: %s\n", 
                   lista[i].cantante.nom_artistico);
    }
}

void imprimir_genero(int i){
  printf("Genero\n");
}

void limpiarBuffer(){
int c;
while ((c = getchar()) != '\n' && c != EOF);
}

