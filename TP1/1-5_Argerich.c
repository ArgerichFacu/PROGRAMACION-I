/*
Ejercicio 1.5 – Suma lenta
Implementar una solución que haga la suma entre dos números enteros sin hacer la operación de manera directa. 
Esto quiere decir que para hacer la suma entre 4 y 3, las operaciones resultantes deberán ser 4+1+1+1.

La solución debe ser capaz de sumar cualquier número entero, positivo y negativo.
-----------------
Facundo Argerich
ArgerichFacu
*/

#include <stdio.h>

int main()
{
    int choice1 = 0;
    int choice2 = 0;
    int suma = 0;

    printf("SUME DOS NUMEROS\n");
    printf("Ingrese el primer numero:\n");
    scanf("%d", &choice1);
    printf("Ingrese el segundo numero:\n");
    scanf("%d", &choice2);
    
    suma = choice1;

    if (choice2 > 0)
    {
        while (choice2 > 0)
        {
            suma++;
            choice2--;
        }
    }
    else 
    {
        while (choice2 < 0)
        {
            suma--;
            choice2++;
        }
    }
    printf("El resultado de su suma es: %d\n", suma);
    return 0;
}