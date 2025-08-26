/*
Ejercicio 1.6 – Divisiones 
Escribir un algoritmo que, mediante restas sucesivas, obtenga el valor del cociente y el resto de dos números enteros.
-----------------
Facundo Argerich
ArgerichFacu
*/

#include <stdio.h>

int main() 
{
    int choice1;
    int choice2;
    int div;
    int cont = 0;
    printf("Ingresar dos numeros enteros\n");
    printf("Ingrese el primer numero\n");
    scanf("%d", &choice1);
    printf("Ingrese el segundo numero\n");
    scanf("%d", &choice2);

    div = choice1;

    if (choice2 > 0)
    {
        while (choice2 >= 0, cont == choice2)
        {
            choice2 - div;
        }
    }
    printf("El cociente de su división es: %d\n", cont);
    printf("El resto de su división es: %f\n", div);
    return 0;
}