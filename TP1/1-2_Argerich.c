/*
Ejercicio 1.2 – Conversión de temperaturas
Se quiere transformar temperaturas en grados Fahrenheit a grados centígrados y viceversa.

Implementar el algoritmo para convertir la temperatura en grados centígrados en Fahrenheit como 
un número decimal, utilice esta fórmula para calcular los grados centígrados y retorne el resultado obtenido. Y viceversa.  
-----------------
Facundo Argerich
ArgerichFacu
*/

#include <stdio.h>

int main()
{
    float celsius, fahrenheit;
    int choice;

    printf("Seleccione la conversión:\n");
    printf("1. Celsius a Fahrenheit\n");
    printf("2. Fahrenheit a Celsius\n");
    printf("Ingrese su elección (1 o 2): ");
    scanf("%d", &choice);
    if (choice == 1) 
    {
        printf("Ingrese la temperatura en grados Celsius: ");
        scanf("%f", &celsius);
        fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
        printf("%.2f grados Celsius son %.2f grados Fahrenheit.\n", celsius, fahrenheit);
    }
    else if (choice == 2)
    {
        printf("Ingrese la temperatura en grados Fahrenheit: ");
        scanf("%f", &fahrenheit);
        celsius = (fahrenheit - 32.0) * 5.0 / 9.0;
        printf("%.2f grados Fahrenheit son %.2f grados Celsius.\n", fahrenheit, celsius);
    }
    else
    {
        printf("Opción no válida. Por favor, elija 1 o 2.\n");
    }
    return 0;
}