/*
Escribí una función que reciba un número y devuelva el doble.
*/

#include <stdio.h>

int producto_doble(int factor)
{
    int producto = 0;
    producto = factor * 2;
    return producto;
}

int main()
{
    int factor = 0;

    printf("MULTIPLICACION x 2\n");

    printf("Ingrese el numero que quiera multiplicar: \n");
    scanf("%d", &factor);

    printf("El resultado es: %d", producto_doble(factor));
}

int producto_doble(int);
