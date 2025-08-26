/*
*Ejercicio 4. – Mayor de tres numeros
*Diseña una función que tome tres números enteros como argumentos y
*devuelva el mayor de ellos.
*-----------------
*Facundo Argerich
*ArgerichFacu
*/

#include <stdio.h>

int numero_mayor(int, int, int);

int numero_mayor(int numero1, int numero2, int numero3)
{
    if (numero1 > numero2 &&  numero1 > numero3)
    {
        return numero1;
    }
    else if (numero2 > numero1 && numero2 > numero3)
    {
        return numero2;
    }
    else
    {
        return numero3;
    }
}

int main()
{
    int numero1 = 0;
    int numero2 = 0;
    int numero3 = 0;
    int numerote = 0;

    printf("MAYOR DE TRES NUMEROS\n");

    printf("Ingrese tres numeros: ");
    scanf("%d %d %d", &numero1, &numero2, &numero3);

    numerote = numero_mayor(numero1, numero2, numero3);

    printf("El mayor es: %d", numerote);

    return 0;
}