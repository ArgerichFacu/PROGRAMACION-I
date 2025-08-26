/*
*Ejercicio 6. – Suma de números primos
*Crea una función que calcule la suma de los primeros N números primos
*positivos.
*-----------------
*Facundo Argerich
*ArgerichFacu
*/

#include <stdio.h>
#include <math.h>

int suma_primos(int numero);
int es_primo(int N);

int main()
{
    int N = 0;
    int resultado;

    printf("SUMA DE NUMEROS PRIMOS\n");
    printf("Ingrese la cantidade de numeros primos a sumar: ");
    scanf("%d", &N);

    if(N <= 0)
    {
        printf("Ingrese un numero mayor a 0.");
        return 1;
    }

    resultado = suma_primos(N);
    printf("La suma de los primeros %d numeros primos es: %d\n", N, resultado);

    return 0;
}

int es_primo(int numero)
{
    if (numero <= 1)
    {
        return 0;
    }

    if (numero == 2)
    {
        return 1;
    }

    if (numero % 2 == 0)
    {
        return 0;
    }

    for (size_t i = 3; i <= sqrt(numero); i = i + 2)
    {
        if (numero % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int suma_primos(int N)
{
    int numero = 2;
    int contador = 0;
    int suma = 0;

    while (contador < N)
    {
        if (es_primo(numero))
        {
            suma = suma + numero;
            contador++;
        }
        numero++;
    }
    return suma;
}
