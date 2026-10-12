#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void main(){
char vocal='a';

printf("Ingresa una vocal");
scanf("%c",&vocal);



switch (tolower(vocal))
{
case 'a':

    printf("Amarillo\n");
    break;
case 'e':

    printf("esmeralda\n");
    break;
    case 'i':
    case 'I':
    printf("indigo\n");
    break;
    case 'o':
    case 'O':
    printf("ocre\n");
    break;
    case 'u':
    case 'U':
    printf("Ultamarino\n");
    break;
default: printf("No ingreasate una vocal\n");
   
}


}