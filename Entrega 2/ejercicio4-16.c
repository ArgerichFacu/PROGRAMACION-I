
/*
Ejercicio 4-16 – Suma de N números
Leé un número N y calculá la suma de los primeros N números naturales.
-----------------
Facundo Argerich
Github: ArgerichFacu
*/

#include <stdio.h>

int main ()
{
    int N = 0;
    int suma = 0;

    printf("Ingrese un numero natural: \n");
    scanf("%d", &N);

    if (N <= 0)
    {
        printf("Ingrese un numero valido.");
    }
    else
    {
        for (size_t i = 1; i <= N; i++)
        {
            suma = suma + i;
        }
    }
    
    printf("La suma de los primeros %d numeros naturales es: %d\n", N, suma);

    return 0;
}
