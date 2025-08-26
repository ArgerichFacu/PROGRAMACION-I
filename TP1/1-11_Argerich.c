/*
Ejercicio 1.11 – Contador circular
Implementar un algoritmo que dado un número entero y un límite, retorne el número incrementado en 1 hasta el límite.

Cuando i sea igual a limite, el algoritmo retornará 0.
-----------------
Facundo Argerich
ArgerichFacu
*/

#include <stdio.h>

int main()
{   
    int i;
    int limite;

    printf("CONTADOR CIRCULAR\n");
    printf("Ingrese un valor inicial\n");
    if (scanf("%d", &i) != 1)
    {
        printf("Error: ingrese un numero entero\n");
        return 1;
    }
    printf("Ingrese el limite entero positivo\n");
    if (scanf("%d", &limite) != 1 || limite <= 0)
    {
        printf("Error: ingrese un limite entero positivo\n");
        return 1;
    }

    i = (i + 1) % limite;

    printf("Valor contador: %d\n", i);
    return 0;
}