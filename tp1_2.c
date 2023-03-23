#include <stdio.h>

int cuadradoDeN1(int n);
void cuadradoDeN2(int n);
void mostrarVarInt(int *a);
void orden(int *a, int *b);
void invertir2(int *a, int *b);


void main(){
    int  a = 1, b = 3;
    do {
        printf("direccion de varA: %d, contenido de varA: %d \n", &a, a);
        printf("varB: ");
        mostrarVarInt(&b);

        printf("varA = %d, varB = %d \n", a, b);
        printf("invertimos: \n");
        invertir2(&a, &b);
        printf("varA = %d, varB = %d \n", a, b);
        printf("ordenamos menor a mayor: \n");
        orden(&a, &b);
        printf("varA = %d, varB = %d \n", a, b);

        
        printf("Ingrese los siguientes números a procesar:\n");
        printf("(Ingrese 0 para terminar) \n");
        scanf("%d", &a);
        scanf("%d", &b);
    } while (a!=0 || b !=0); 
}


int cuadradoDeN1(int n){
    return n*n;
}
void cuadradoDeN2(int n){
    printf("%d", n*n);
}
void mostrarVarInt(int *a){
    printf("direccion de var: %d, contenido de var: %d \n", a, *a);
}

void invertir2(int *a, int *b){
    int aux;
    aux = *a;
    *a = *b;
    *b = aux; 
}
void orden(int *a, int *b){
    if (*a > *b){
        int mayor = *a;
        *a = *b;
        *b = mayor;
    }
}

