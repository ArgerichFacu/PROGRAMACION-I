/*
Sumá los números pares del 1 al 100
*/

#include <stdio.h>

int main()
{
    int suma = 0;
    int i = 0;

    while (i < 100) 
    {
        if (i % 2 == 0)
        {
            suma += i;
        }
        i++;
    }

    printf("la suma de los numeros pares del 1 al 100 es: %d\n", suma);

    return 0;
}