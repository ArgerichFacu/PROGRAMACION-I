/*
*Ejercicio 9. – Es Fibonacci?
*Escribe una funcion que indique si un número pertenece o no a la serie de
*Fibonacci.
*-----------------
*Facundo Argerich
*ArgerichFacu
*/

#include <stdio.h>

int fib(int);

int main()
{
    int numero = 0;
    int resultado = 0;

    printf("Ingrese un numero: \n");
    scanf("%d", &numero);

    resultado = fib(numero);

    if (resultado == 1)
    {
        printf("ES FIBONACCI");
    }
    else
    {
        printf("NO ES FIBONACCI");
    }

    return 0;
}

int fib(int numero)
{
    if (numero < 0)
    {
        return 0;
    }
    
    int anterior = 0;
    int actual = 1;
    int siguiente = 0;

    if (numero == 0 || numero == 1)
    {
        return 1;
    }
    

    while (siguiente <= numero)
    {
        siguiente = anterior + actual;
        anterior = actual;
        actual = siguiente;

        if (siguiente == numero)
        {
            return 1;
        }
    }
    return 0;
}
