
/*
Ejercicio 4-24 – Secuencia de Fibonacci 
Generá los primeros N números de Fibonacci de forma iterativa. Los números de la secuencia comienzan en t0 = 0 y t1 = 1 y los terminos siguientes son la suma de los dos anteriores, por lo que t2 = t1 + t0..
-----------------
Facundo Argerich
Github: ArgerichFacu
*/

#include <stdio.h>

int main ()
{
    int N = 0;
    int F0 = 0;
    int F1 = 1;
    int Fn = 0;

    printf("Ingrese la cantidad de valores Fibonacci: \n");
    scanf("%d", &N);

    printf("Los valores son:\n");
    for (size_t i = 0; i < N; i++)
    {
        Fn = F0 + F1;
        printf("%d ", F0);
        F0 = F1,
        F1 = Fn;
    }
    
    return 0;
}
