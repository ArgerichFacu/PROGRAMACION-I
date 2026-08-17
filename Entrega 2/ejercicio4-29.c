
/*
Ejercicio 4-29 – Numeros Perfectos 
Encontrá todos los números perfectos hasta N. Un número es perfecto si la suma de sus divisores (excluyéndolo) es igual al número.
-----------------
Facundo Argerich
Github: ArgerichFacu
*/

#include <stdio.h>

int main()
{
    int N = 0;
    int suma = 0;
    int i = 0;
    int div = 0;

    printf("Ingrese el limite N para buscar numeros perfectos: ");
    scanf("%d", &N);

    for (i = 2; i <= N; i++)
    {
        suma = 0;
        for (div = 1; div <= i / 2; div++)
        {
            if (i % div == 0)
            {
                suma = suma + div;
            }
            
        }
        if (suma == i)
        {
            printf("%d ", i);
        }
    }
    return 0;
}
