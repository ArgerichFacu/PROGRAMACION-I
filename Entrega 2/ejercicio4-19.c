
/*
Ejercicio 4-19 – Números pares en rango
Mostrá todos los números pares entre dos valores ingresados.
-----------------
Facundo Argerich
Github: ArgerichFacu
*/

#include <stdio.h>

int main ()
{
    int limite_inferior = 0;
    int limite_superior = 0;
    int numero_actual = 0;
    
    printf("Ingrese un rango [A-B] para mostrar los numeros pares dentro del mismo: \n");

    printf("Ingrese A: ");
    scanf("%d", &limite_inferior);
    printf("Ingrese B: ");
    scanf("%d", &limite_superior);

    numero_actual = limite_inferior;

    printf("Los valores pares dentro del rango [%d-%d] son:\n", limite_inferior, limite_superior);
    while (numero_actual <= limite_superior)
    {
        if ((numero_actual % 2) == 0)
        {
            printf("%d ", numero_actual);
        }
        numero_actual = numero_actual + 1;
    }
    
    return 0;
}
