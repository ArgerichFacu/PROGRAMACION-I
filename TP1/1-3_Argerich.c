/*
Ejercicio 1.3 - Números positivos y negativos
Implementar un algoritmo que reciba un número entero e indique si el mismo es positivo,
negativo o cero.

 * Retornar `-1` si es negativo.
 * Retornar `0` si es cero.
 * Retornar `1` si es positivo. 
-----------------
Facundo Argerich
ArgerichFacu
*/

#include <stdio.h>

int main()    
{
    int choice;
    printf("Ingrese un número:\n");
    if (scanf("%d", &choice) == 1)
        if (choice == 0)
            {
                printf("0");
            }
        else if (choice < 0)
            {
                printf("-1");
            }
        else
            {
                printf("1");
            }
    else
    {
        while (getchar() != '\n')
        {
            printf("Error: Debe ingresar un número entero.\n");
        }
        
    }
    return 0;
}