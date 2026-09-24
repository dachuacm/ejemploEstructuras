
#include "funciones.h"

void imprimir(Cancion lista[]){
    int i;
  for(i=0;i<TAM;i++){
    printf("nombre:");
    printf("%s\n",lista[i].nombre);
    printf("Interprete:");
    fflush(stdin);
    printf("%s\n %s\n %s\n",lista[i].cantante.nom_artistico,lista[i].cantante.nombre,
       lista[i].cantante.apellido);
    printf("Genero:");
    printf("%d\n",lista[i].genero);   
    printf("Duración:");
    printf("%f\n",lista[i].duracion); 

    }
}

void agregarCancion(Cancion favoritas[],int i){

     printf("nombre:");
    fflush(stdin);
    scanf("%s",favoritas[i].nombre);
    printf("Interprete \nnombre apellido nombre_artístico:");
    fflush(stdin);
    scanf("%s %s %s",favoritas[i].cantante.nombre,
        favoritas[i].cantante.apellido,favoritas[i].cantante.nom_artistico);
    printf("Genero 1)Reggaeton 2)Bachata 3)Banda 4)Pop:");
    scanf("%d",&favoritas[i].genero);   
    printf("Duración:");
    scanf("%f",&favoritas[i].duracion); 
   }

   