/*
Pedí dos números y mostrá el mayor.
*/

#include <stdio.h>

int main()
{
    int numero1 = 0;
    int numero2 = 0;

    printf("Ingrese el primer numero: ");
    scanf("%d", &numero1);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &numero2);

    if (numero1 > numero2)
    {
        printf("el numero %d es el mayor.", numero1);
    }
    else
    {
        printf("el numero %d es el mayor.", numero2);
    }
    return 0;
}