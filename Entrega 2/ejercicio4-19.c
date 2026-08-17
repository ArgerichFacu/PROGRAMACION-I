
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
    int rango_A = 0;
    int rango_B = 0;
    int pares = 0;
    
    printf("Ingrese un rango [A-B] para mostrar los numeros pares dentro del mismo: \n");

    printf("Ingrese A: ");
    scanf("%d", &rango_A);
    printf("Ingrese B: ");
    scanf("%d", &rango_B);

    pares = rango_A;

    printf("Los valores pares dentro del rango [%d-%d] son:\n", rango_A, rango_B);
    while (pares <= rango_B)
    {
        if ((pares % 2) == 0)
        {
            printf("%d ", pares);
        }
            pares = pares + 1;
    }
    
    return 0;
}
