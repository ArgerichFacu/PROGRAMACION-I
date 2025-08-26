/*
Programa una conversión de Celsius a Fahrenheit. Separá en: leer, convertir, mostrar.
*/

#include <stdio.h>


//prototipos
float leer_conversion(void);
float convertir(float celc);
void mostrar_conversion(float fahr);

int main()
{
    printf("CELCIUS A FAHRENHEIT\n");

    float celc = leer_conversion();
    float fahr = convertir(celc);
    mostrar_conversion(fahr);
    
    return 0;
}

//lee los datos del usuario
float leer_conversion(void)
{
    float temp = 0;
    printf("Ingrese la temperatura que desea convertir: \n");
    scanf("%f", &temp);
    return temp;
}


//convierte la temperatura
float convertir(float celc)
{
    return (celc * 1.8f) + 32.0f;
}


//muestra el resultado
void mostrar_conversion(float fahr)
{
    printf("Su temperatura es: %.2f\n", fahr);
}