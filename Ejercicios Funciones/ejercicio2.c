/*
Escribí una función que reciba dos números y devuelva el mayor.
*/

#include <stdio.h>

int mayor(int numero1, int numero2)
{
    if (numero1 > numero2)
    {
        return numero1;
    }
    else
    {
        return numero2;
    }
}

int main()
{
    int numero1 = 0;
    int numero2 = 0;

    printf("NUMERO MAYOR\n");

    printf("Ingrese el primer numero: \n");
    scanf("%d", &numero1);

    printf("Ingrese el segundo numero: \n");
    scanf("%d", &numero2);

    printf("El numero mas grande es el: %d\n", mayor(numero1, numero2));

    return 0;
}

int mayor(int, int);