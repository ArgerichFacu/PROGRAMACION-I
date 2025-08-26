/*
Escribí un programa que lea tres notas, calcule el promedio y lo muestre.
*/

#include <stdio.h>

int ingreso_notas(float *nota1, float *nota2, float *nota3);
float promedio(float nota1, float nota2, float nota3);
void mostrar(float prom);

int main()
{
    printf("PROMEDIO\n");
    float nota1, nota2, nota3;
    
    if (ingreso_notas(&nota1, &nota2, &nota3) == 0) 
    {
        float prom = promedio(nota1, nota2, nota3);
        mostrar(prom);
    }
    
    return 0;
}

int ingreso_notas(float *nota1, float *nota2, float *nota3)
{
    printf("Ingrese sus 3 notas (separadas por espacios): \n");
    if (scanf("%f %f %f", nota1, nota2, nota3) != 3)
    {
        printf("Debe ingresar solamente 3 numeros\n");
        return 1;
    }

    if (*nota1 < 0 || *nota2 < 0 || *nota3 < 0 || *nota1 > 10 || *nota2 > 10 || *nota3 > 10)
    {
        printf("Debe ingresar solamente numeros entre 0 y 10\n");
        return 1;
    }

    return 0;
}

float promedio(float nota1, float nota2, float nota3)
{
    return (nota1 + nota2 + nota3) / 3.0f;
}

void mostrar(float prom)
{
    printf("Su promedio es: %.2f\n", prom);
}



