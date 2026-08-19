
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
    int limite_naturales = 0;
    int suma_total = 0;
    int numero_actual = 0;

    printf("Ingrese un numero natural: \n");
    scanf("%d", &limite_naturales);

    if (limite_naturales <= 0)
    {
        printf("Ingrese un numero valido.");
    }
    else
    {
        for (numero_actual = 1; numero_actual <= limite_naturales; numero_actual++)
        {
            suma_total = suma_total + numero_actual;
        }
    }
    
    printf("La suma de los primeros %d numeros naturales es: %d\n", limite_naturales, suma_total);

    return 0;
}
