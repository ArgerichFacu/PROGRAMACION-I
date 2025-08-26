/*
Ejercicio 1.17 – Descomposición en factores primos 
Pedir un número entero mayor que 1 e imprimir su descomposición en factores primos.  
Ejemplo: Entrada `84` → Salida `2 x 2 x 3 x 7`.  
El cálculo debe hacerse mediante divisiones sucesivas.
-----------------
Facundo Argerich
ArgerichFacu
*/

#include <stdio.h>

int main() 
{
    int numero;
    int divisor = 2;

    printf("DESCOMPOSICION DE FACTORES PRIMOS\n");
    printf("Ingrese un numero entero mayor a 1: ");
    if(scanf("%d", &numero) != 1 || numero <= 1) // verifica que el numero ingresado sea entero y mayor a 1
    {
        printf("Error: el numero ingresado debe ser un entero MAYOR a 1.");
        return 1;
    }

    printf("Descomposicion en factores primos de %d: ", numero);

    while (numero > 1) 
    {
        while (numero % divisor == 0) 
        {
            printf("%d", divisor);
            numero /= divisor;
            if (numero > 1)
            {
                printf(" x ");  // imprime el separador
            }  
        }
        divisor++;
    }

    printf("\n");

    return 0;
}