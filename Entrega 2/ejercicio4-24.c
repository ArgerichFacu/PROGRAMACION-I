
/*
Ejercicio 4-24 – Secuencia de Fibonacci 
Generá los primeros N números de Fibonacci de forma iterativa. Los números de la secuencia comienzan en t0 = 0 y t1 = 1 y los terminos siguientes son la suma de los dos anteriores, por lo que t2 = t1 + t0..
-----------------
Facundo Argerich
Github: ArgerichFacu
*/

#include <stdio.h>

int main(void)
{
    int cantidad_terminos = 0;
    int posicion_actual = 0;
    unsigned long long termino_previo_1 = 0ULL;
    unsigned long long termino_previo_2 = 1ULL;
    unsigned long long termino_actual = 0ULL;

    printf("Ingrese la cantidad de valores Fibonacci: ");
    scanf("%d", &cantidad_terminos);

    if (cantidad_terminos <= 0)
    {
        printf("Error: La cantidad de terminos debe ser mayor a 0.\n");
        return 0;
    }

    printf("Los valores son:\n");
    for (posicion_actual = 0; posicion_actual < cantidad_terminos; posicion_actual++)
    {
        printf("%llu ", termino_previo_1);

        termino_actual = termino_previo_1 + termino_previo_2;
        termino_previo_1 = termino_previo_2;
        termino_previo_2 = termino_actual;
    }

    printf("\n");
    return 0;
}
