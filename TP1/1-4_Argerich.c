/*
Ejercicio 1.4 – Comparación de números
Implementar un algoritmo que retorne:

 * Retornar `-1` si el primero es menor que el segundo
 * Retornar `0` si son iguales
 * Retornar `1` si el primero es mayor que el segundo
-----------------
Facundo Argerich
ArgerichFacu
*/

#include <stdio.h>

int main()
{
    float choice1, choice2;
    printf("Ingrese el primer numero\n");
    scanf("%f", &choice1);
    printf("Ingrese el segundo numero\n");
    scanf("%f", &choice2);
        if (choice1 < choice2)
        {
            printf("-1");
        }
        else if (choice1 == choice2)
        {
            printf("0");
        }
        else
        {
            printf("1");
        }
    return 0;
}