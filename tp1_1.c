#include<stdio.h>

void main(){
    printf("hola mundo\n");
    int *punteroInt, numerito = 2;
    punteroInt=&numerito;
    printf("1_ contenido puntero: %d\n", *punteroInt);
    printf("2_ dirección de memoria almacenada por el puntero: %d\n", punteroInt);
    printf("3_ dirección de memoria de la variable %d\n", &numerito);
    printf("4_ dirección de memoria del puntero: %d\n",&punteroInt);
    printf("5_ tamaño de memoria utilizado por esa variable usando la función sizeof(): %d\n", sizeof(numerito));
    
}