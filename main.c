#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    //funcion que recibe un entero y calcula su raiz cuadrada
    extern double sqrt(double);
    double a = sqrt(2.0);
    printf("La raiz cuadrada de 2 es: %f",a);
    printf("Esto es una modificacion);

    return 0;
}
