#include <stdio.h>
#include "funciones.h"

void ejemplo19();
void ejemplo20();
void ejemplo_apt_estructuras();

void imprimeArrUni(int *,int );

void main(){

    /*int num=7, x=3, a;
 int *ap_num;
 ap_num = num;
    int *ptr_num;

    ptr_num=&num;

    printf("direccione de num:%p, x:%p,a:%p\n"
        ,&num,&x,&a);
      printf("valor de ptr_num:%p\n"
        ,ptr_num);

    ptr_num++;
    (*ptr_num)++;

    printf("ptr_num=%p\n",ptr_num);
     printf("num=%d x=%d\n",num,x);

 */
/*
 int num[5] = {10, 20, 30, 40, 50};
 int *ap_num;
 ap_num = num;
 printf("%d ",num[0]);
 printf("%d ",ap_num[0]);
 printf("%d ",*num);
 printf("%d ",*ap_num);
 printf("%d ",num[3]);
 printf("%d \n",ap_num[3]); 

 printf("++*ap_num:%d \n",++*ap_num);
 printf("*++ap_num:%d \n",*++ap_num);
 printf("*ap_num++:%d ",*ap_num++); 
  printf("*ap_num:%d ",*ap_num); 
*/
//ejemplo19();
 // ejemplo20();
 ejemplo_apt_estructuras(); 
}

void ejemplo19(){

double x[5] = {1.1, 2.1, 3.1, 4.1, 5.1};
double *p = &x[1], *q = &x[4];
int n;
n = q - p; // a n se le asigna 3 (diferencia de apunteros a double, 8 bytes)
printf("%p\n", q); // %p imprime la dirección de memoria del apuntador
printf("%p\n", p);
printf("%d\n", n);
printf("dirección de memoria de n: %p \n", &n);

}


void ejemplo20()
{
 int num2[4] = {1 ,3 ,4,7};
 imprimeArrUni(num2, 7);
 
}
void imprimeArrUni(int *num, int tot)
{
 for (int j=0; j<tot; j++)
 printf("Elemento %d -> %d\n",j,num[j]);
}

void ejemplo_apt_estructuras(){

  Interprete mi_idolo, *ptr_interprete;
  Cancion cancion;
  char *ptr_letra;
  
  strcpy(mi_idolo.nombre,"Tini");

  strcpy(mi_idolo.apellido,"Stoessel");

  ptr_interprete=&mi_idolo;

  cancion.cantante=mi_idolo;
  cancion.duracion=2.36;
  cancion.genero=2;
  strcpy(cancion.titulo,"Mienteme");

  modificar_cancion(&cancion);
}