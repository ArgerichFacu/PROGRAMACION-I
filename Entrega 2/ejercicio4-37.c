/*
Ejercicio 4-37 – Rombo 
Dibujá un rombo de asteriscos
-----------------
Facundo Argerich
Github: ArgerichFacu
*/

#include <stdio.h>

int main()
{
    int ancho_maximo = 0;
    int fila = 0;
    int espacios = 0;
    int asteriscos = 0;

    printf("Ingrese el ancho maximo del rombo (numero impar): ");
    scanf("%d", &ancho_maximo);

    if (ancho_maximo % 2 == 0)
    {
        ancho_maximo = ancho_maximo + 1;
        printf("Se ajusto el ancho a %d para mantener la simetria.\n\n", ancho_maximo);
    }
    else
    {
        printf("\n");
    }

    // =================
    // BLOQUE SUPERIOR
    // =================
 
    for (fila = 1; fila <= ancho_maximo; fila += 2)
    {

        for (espacios = 0; espacios < (ancho_maximo - fila) / 2; espacios++)
        {
            printf(" ");
        }

        for (asteriscos = 0; asteriscos < fila; asteriscos++)
        {
            printf("*");
        }

        printf("\n");
    }

    // =================
    // BLOQUE INFERIOR 
    // =================

    for (fila = ancho_maximo - 2; fila >= 1; fila -= 2)
    {
        for (espacios = 0; espacios < (ancho_maximo - fila) / 2; espacios++)
        {
            printf(" ");
        }

        for (asteriscos = 0; asteriscos < fila; asteriscos++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}