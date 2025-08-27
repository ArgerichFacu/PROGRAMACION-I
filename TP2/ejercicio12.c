/*
 * Ejercicio 12 – Números perfectos
 * ---------------------------------
 * Programa que determina si un número entero es un número perfecto.
 *
 * Definición:
 * Un número es perfecto si es igual a la suma de sus divisores propios 
 * positivos (excluyéndose a sí mismo).
 * 
 * Ejemplos:
 *   - 6  = 1 + 2 + 3   → perfecto
 *   - 28 = 1 + 2 + 4 + 7 + 14 → perfecto
 *   - 15 = 1 + 3 + 5   → NO perfecto
 *
 * Autor: Facundo Argerich
 * Usuario: ArgerichFacu
 */

#include <stdio.h>

/**
 * @brief Verifica si un número es perfecto.
 *
 * Un número perfecto es aquel que es igual a la suma de sus divisores
 * propios positivos (sin contar al mismo número).
 *
 * @param numero Entero a evaluar.
 * @return int Devuelve 1 si el número es perfecto, 0 en caso contrario.
 */
int es_perfecto(int numero);

int main()
{
    int numero = 0;

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

/**
 * @brief Función que determina si un número es perfecto.
 *
 * @param numero Número entero a comprobar.
 * @return int 1 si el número es perfecto, 0 en caso contrario.
 *
 * Detalles:
 * - Si el número es menor que 1, retorna 0 directamente.
 * - Calcula la suma de todos los divisores propios positivos de "numero".
 * - Compara la suma con el número original.
 */
int es_perfecto(int numero)  
{
    int suma = 0;
    int i = 0;

    if (numero < 1) 
    {
        return 0; 
    }

    for (i = 1; i < numero; i++) {
        if (numero % i == 0) {
            suma += i;
        }
    }
    return suma == numero;
}
