/*
Ejercicio 1.13 – Triángulo de Pascal
Solicitar un número de filas `n` y mostrar el triángulo de Pascal calculando cada valor a partir del anterior en la misma fila, utilizando únicamente variables y bucles anidados.  
No se permiten arreglos, todo el cálculo debe hacerse en el momento.
-----------------
Facundo Argerich
ArgerichFacu
*/

#include <stdio.h>

int main()
{
    int filas;
    int i = 0;
    int j;
    long valor;

    printf("TRIANGULO DE PASCAL\n");
    printf("Ingrese el cantidad de filas de su triangulo\n");
    if(scanf("%d", &filas) != 1 || filas < 1)
    {
        printf("Ingrese un numero entero positivo\n");
        return 1;
    }

    while (i < filas)
    {
        valor = 1;
        int j = 0;
        while (j < filas - i - 1)
        {
            printf("  ");
            j++;
        }
    
        j = 0;
        while (j <= i)
        {
            printf("%4ld", valor);
            valor = valor * (i - j) / (j + 1);
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}