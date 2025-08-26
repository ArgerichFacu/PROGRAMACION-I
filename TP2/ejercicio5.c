/*
*Ejercicio 5. – Menor de tres numeros
*Escribe una función similar a la anterior, pero que devuelva el menor de
*tres números enteros dados.
*-----------------
*Facundo Argerich
*ArgerichFacu
*/

#include <stdio.h>

int numero_menor(int, int, int);

int numero_menor(int numero1, int numero2, int numero3)
{
    if (numero1 < numero2 &&  numero1 < numero3)
    {
        return numero1;
    }
    else if (numero2 < numero1 && numero2 < numero3)
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
    int numerito = 0;

    printf("MENOR DE TRES NUMEROS\n");

    printf("Ingrese tres numeros: ");
    scanf("%d %d %d", &numero1, &numero2, &numero3);

    numerito = numero_menor(numero1, numero2, numero3);

    printf("El menor es: %d", numerito);

    return 0;
}