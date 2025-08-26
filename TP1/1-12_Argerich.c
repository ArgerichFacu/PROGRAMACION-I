/*
Ejercicio 1.12 – Suma de digitos
Implementar un algoritmo que obtenga, de manera aritmética, la suma de los dígitos de un número entero.

Por ejemplo, para el número 1234, la suma de sus dígitos da 10 = 1 + 2 + 3 + 4
-----------------
Facundo Argerich
ArgerichFacu
*/

#include <stdio.h>


int main()
{
    int numero = 0;
    int suma = 0;

    printf("SUMA DE DIGITOS\n");
    printf("Ingresar un numero entero: ");
    if(scanf("%d", &numero) != 1)
    {
        printf("Error: Ingrese un numero entero.");
        return 1;
    }


    if (numero < 0)
    {
        numero = -numero;   // si el numero es negativo lo pasa a positivo
    }

    while (numero > 0)
    {
        suma += numero % 10;    // se obtiene el último digito
        numero /= 10;           // se elimina el ultimo digito
    }

    printf("La suma de los digitos es: %d\n", suma);
    return 0;
}