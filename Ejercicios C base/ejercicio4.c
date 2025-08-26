/*
Escribí un programa que imprima los números del 10 al 1 usando while.
*/

#include <stdio.h>

int main () 
{
    int numero = 10;

    while (numero > 0)
    {
        printf("%d\n", numero);
        numero = numero - 1;
    }
    return 0;}