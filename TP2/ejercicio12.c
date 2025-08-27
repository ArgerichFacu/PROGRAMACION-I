/*
*Ejercicio 12. – Números perfectos 
*Escribir una función que indique si un número es perfecto.
*
*Se dice que un número es perfecto cuando es igual a la suma de sus
*divisores propios menos sí mismo. Por ejemplo, el 15 no es un número
*perfecto, pero el 28 sí lo es
*-----------------
*Facundo Argerich
*ArgerichFacu
*/

#include <stdio.h>

int es_perfecto(int numero);

int main()
{
    int numero = 0;
    int resultado = 0;

    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    if (es_perfecto(numero)) 
    { 
        printf("%d es un numero perfecto.\n", numero);
    }
    else 
    {
        printf("%d no es un numero perfecto.\n", numero);
    }

    return 0;
}

int es_perfecto(int numero)  
{
    int suma = 0;
    int i = 0;

    if (numero < 1) // Verifica si el número es menor que 1
    {
        return 0; // No es perfecto si el número es menor que 1
    }
    for (i = 1; i < numero; i++) {
        if (numero % i == 0) {
            suma = suma + i;
        }
    }
    return suma == numero;
}