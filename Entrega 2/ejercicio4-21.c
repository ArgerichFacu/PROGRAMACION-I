
/*
Ejercicio 4-21 – validación de entrada 
Leé un número entre 1 y 100. Si está fuera de rango, pedí nuevamente hasta que sea válido.
-----------------
Facundo Argerich
Github: ArgerichFacu
*/

#include <stdio.h>

int main()
{
    int numero = 0;

    do
    {
        printf("Ingrese un numero: \n");
        scanf("%d", &numero);

        if (numero < 1 || numero > 100)
        {
            printf("Ingrese un numero valido.\n\n");
        }
        else
        {
            printf("Numero valido.");
        }
    } while (numero < 1 || numero > 100);
    
    return 0;
}
