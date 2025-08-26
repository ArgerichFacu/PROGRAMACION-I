/*
Ejercicio 1.16 – Número capicúa
Solicitar un número entero positivo y determinar si es capicúa (palíndromo), es decir, si se lee igual de izquierda a derecha que de derecha a izquierda.  
Resolver aritméticamente, sin usar arreglos ni strings.
-----------------
Facundo Argerich
ArgerichFacu
*/

#include <stdio.h>

int main()
{
    int numero;
    int digito;
    int inverso = 0;

    printf("NUMERO CAPICUA\n");
    printf("Ingrese un numero entero positivo\n");
    if(scanf("%d", &numero) != 1 || numero < 0)     // verifica que el numero ingresado sea entero y mayor a 1
    {
        printf("Error: el numero ingresado no es un numero entero positivo.");
        return 1;
    }

    int original = numero;

    while (numero != 0)
    {
        digito = numero % 10;
        inverso = inverso * 10 + digito;
        numero = numero / 10;
    }

    printf("Numero invertido: %d\n", inverso);

    if (inverso == original)
    {
        printf("El numero %d es capicua", original);
    }

    else
    {
        printf("El numero %d no es capicua", original);
    }

    return 0;
}