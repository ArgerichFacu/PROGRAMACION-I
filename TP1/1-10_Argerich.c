/*
Ejercicio 1.10 – Factorial
Implementar un algoritmo que, usando lazos, permita obtener el factorial de un número entero positivo.

El factorial de un entero positivo n, se define como el producto de todos los números enteros positivos desde 1 (es decir, los números naturales) hasta n.

La cuenta resultante es, por ejemplo, para 5! = 1×2×3×4×5 = 120.
-----------------
Facundo Argerich
ArgerichFacu
*/

#include <stdio.h>

int main()
{
    int numero;
    int i;
    unsigned long long factorial = 1;

/*
 * Nota: el tipo `unsigned long long` solo alcanza a representar factoriales
 * hasta 20! correctamente. Para n > 20, el resultado excede la capacidad
 * del tipo y se produce overflow.
*/

    printf("FACTORIAL\n");
    printf("Ingrese un numero:\n");
    if(scanf("%d", &numero) != 1 || numero < 0)
    {
        printf("Error: el factorial no está definido para numeros negativos.\n");
        return 1;
    }

    for (i = 1; i <= numero; i++)
    {
        factorial *= i;
    }
    printf("El factorial de %d es: %llu\n", numero, factorial);

    return 0;
}