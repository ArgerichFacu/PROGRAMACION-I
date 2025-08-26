/*
Pedí un número y decí si es primo.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int numero = 0;
    int i = 2;
    int es_primo = 1;

    printf("Ingrese un numero entero: ");
    if (scanf("%d", &numero) != 1 || numero < 0)
    {
        printf("Ingrese un numero valido.");
        return 1;
    }

    if (numero < 2)
    {
        es_primo = 0;
    }
    else 
    {
        int limite = (int) sqrt(numero);
        while (i <= limite && es_primo)
        {
            if (numero % i == 0)
            {
                es_primo = 0;
            }
            i++;
        }
    }
    
    if (es_primo)
    {
        printf("%d es primo.\n", numero);
    }
    else
    {
        printf("%d no es primo.\n", numero);
    }
    return 0;
}