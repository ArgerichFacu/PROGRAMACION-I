/*
*Ejercicio 3. – Tabla de multiplicar
*Desarrolla una función que reciba un número entero como parámetro y
*muestre en pantalla su tabla de multiplicar del 1 al 10.
*-----------------
*Facundo Argerich
*ArgerichFacu
*/

#include <stdio.h>

void tabla(int);
void impresion(int, int, int);

int main()
{
    int numero = 0;

    printf("TABLA DE MULTIPLICAR\n");

    printf("Ingrese un numero entero positivo: ");
    scanf("%d", &numero);

    tabla(numero);

    return 0;
}

void tabla(int numero)
{
    int resultado = 0;

    for (size_t i = 0; i <= 10; i++)
    {
        resultado = numero * i;
        impresion(resultado, numero, i);
    }
}

void impresion(int resultado, int numero, int i)
{
    printf("%d x %d = %d\n", numero, i, resultado);
}