#include <stdio.h>

int main()
{
    int nota = 0;

    printf("Ingrese su nota: \n");
    if (scanf("%d", &nota) != 1 || nota < 0 || nota > 10)
    {
        printf("Ingrese una nota valida.");
        return 1;
    }

    if (nota >= 6)
    {
        printf("Promociona");
    }
    else if (nota >= 4)
    {
        printf("Aprueba");
    }
    else
    {
        printf("Desaprueba");
    }
    return 0;
}