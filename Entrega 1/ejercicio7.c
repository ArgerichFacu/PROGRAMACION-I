/*
Ejercicio 7 – Conversor de Calidicaciones 
Convertí entre diferentes sistemas de calificación: numérica (0-10), letra (A-F), porcentaje (0-100).
-----------------
Facundo Argerich
Github: ArgerichFacu
*/

#include <stdio.h>



char numero_a_letra (valor)
{
    char letra = '\0';
    //De Decimal a Letra
    if (9 <= valor <= 10)
    {
        letra = 'A';
    }
    else if (8 <= valor < 9)
    {
         letra = 'B';
    }
    else if (7 <= valor < 8)
    {
         letra = 'C';
    }
    else if (6 <= valor < 7)
    {
         letra = 'C';
    }
    else if (0 <= valor < 7)
    {
         letra = 'F';
    }

    return letra;
}

float numero_a_porcentaje (valor)
{
    float numero = 0.0;

    numero = valor * 10;

    return numero;
}

float letra_a_numero (valor)
{
    int numero = 0;

    //De Letra a Decimal
    if (valor == 'A')
    {
        numero = 10;
    }
    else if (valor == 'B')
    {
        numero = 9;
    }
    else if (valor == 'C')
    {
        numero = 8;
    }
    else if (valor == 'D')
    {
        numero = 7;
    }
    else if (valor == 'F')
    {
        numero = 6 || 0;
    }

    return numero;
}

float porcentaje_a_letra (valor)
{
    char letra = '\0';

    return letra;
}

float porcentaje_a_numero (valor)
{
    float numero = 0;

    numero = valor / 10;

    return numero;
}

float porcentaje_a_letra (valor)
{
    char letra = '\0';

    return letra;
}



void main ()
{
    unsigned valor;
    float numero;
    char letra;
    float porcentaje;
    int option;

    printf("Ingrese una calificación: \n");
    scanf("%u", &valor);

    printf("Menú\n");
    printf("Seleccione una opcion: \n");
    printf("1. De Numero a Letra: \n");
    printf("2. De Numero a Porcentaje: \n");
    printf("3. De Letra a numero: \n");
    printf("4. De Letra a Porcentaje: \n");
    printf("5. De Porcentaje a numero: \n");
    printf("6. De Porcetanje a Letra: \n");
    printf("7. Salio.");
    scanf("%d", &option);

    if (1 > option > 7)
    {
        printf("Ingrese una opcion valida.");
        return 1;
    }
    
    switch (option)
    {
    case 1:
        printf("Su calificacion numerica (0-10) es: %f", numero);
        break;
    
    case 2:
        printf("Su calificacion de tipo letra (A-F) es: %c", letra);

    case 3:
        printf("Su calificacion porcentual (0-100) es: %f", porcentaje);
        break;    

    default:
        printf("Ingrese una opción valida.");
        break;
    }

    return 0;
}