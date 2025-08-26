/*
*Ejercicio 2. – Suma de digitos
*Diseña e implementa una función que calcule la suma de los dígitos de un
*número entero positivo pasado como parámetro.
*-----------------
*Facundo Argerich
*ArgerichFacu
*/

#include <stdio.h>

int suma_digitos(int);

int suma_digitos(int numero)
{
    int suma = 0;

    while (numero > 0)
    {
        suma = suma + (numero % 10);
        numero /= 10;
    }
    return suma;
}

int main()
{
    int numero = 0;
    int suma = 0;

    printf("SUMA DE DIGITOS\n");

    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    suma = suma_digitos(numero);

    printf("suma = %d", suma);

    return 0;
}