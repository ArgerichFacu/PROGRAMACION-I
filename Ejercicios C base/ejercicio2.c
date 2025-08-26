#include <stdio.h>

int main()
{
    char nombre = '\0';
    int edad = 0;
    float nota = 0;

    printf("Ingresa tu inicial: \n");
    scanf("%c", &nombre);

    printf("Ingresa tu edad: \n");
    if (scanf("%d", &edad) != 1 || edad <= 0)
    {
        printf("Ingrese una edad valida.");
        return 1;
    }

    printf("Ingresa tu promedio: \n");
    if (scanf("%f", &nota) != 1 || nota < 0)
    {
        printf("Ingrese una nota valida.");
        return 1;
    }

    printf ("inicial: %c, edad %d, promedio %f", nombre, edad, nota);

    return 0;
}