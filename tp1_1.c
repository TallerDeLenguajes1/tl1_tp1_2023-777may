#include<stdio.h>

void main(){
    printf("hola mundo\n");
    int *punteroInt, numerito = 2;
    punteroInt=&numerito;
    printf("contenido puntero: %d\n", *punteroInt);
    printf("dirección de memoria almacenada por el puntero: %d\n", punteroInt);
    printf("dirección de memoria de la variable %d\n", &numerito);
    printf("dirección de memoria del puntero: %d\n",&punteroInt);
    printf("tamaño de memoria utilizado por esa variable usando la función sizeof(): %d\n", sizeof(numerito));
    
}