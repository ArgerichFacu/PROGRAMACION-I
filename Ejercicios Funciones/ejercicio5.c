/*
Escribí un programa que determine si un número es par o impar.
*/

#include <stdio.h>

void leer(int);

int main()
{
    int numero = 0;

    printf("PAR O IMPAR\n");

    printf("Ingrese un numero: \n");
    scanf("%d", &numero);

    leer(numero);

    return 0;
}

void leer(int numero)
{
    if (numero % 2 == 0)
    {
        printf("Su numero es par.");
    }
    else
    {
        printf("Su numero es impar.");
    }
}
