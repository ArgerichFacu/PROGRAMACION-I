/*
*Ejercicio 2. – 
*Escribe una función que determine si un número entero positivo es un
*número defectivo.Un número defectivo o número deficiente es un número n para el que la
*suma de sus divisores es menor que 2n. De manera equivalente, es un
*número para el que la suma de sus divisores propios (o suma alícuota) es
*menor que n.
*-----------------
*Facundo Argerich
*ArgerichFacu
*/

#include <stdio.h>

int suma_divisores(int numero);
int es_defectivo(int numero);

int main()
{
    int numero = 0;
    int resultado = 0;

    printf("Ingrese un numero: \n");
    scanf("%d", &numero);

    if (numero <= 0) 
    {
        printf("Por favor ingrese un numero positivo mayor que 0.\n");
        return 1;
    }

    resultado = es_defectivo(numero);

    if (resultado == 1) 
    {
        printf("El numero %d es defectivo\n", numero);
    } 
    else 
    {
        printf("El numero %d NO es defectivo\n", numero);
    }

    return 0;
}

int suma_divisores(int numero)
{
    int suma = 0;
    
    if (numero <= 1) 
    {
        return 0;
    }

    for (int i = 1; i <= numero / 2; i++)  
    {
        if (numero % i == 0)
        {
            suma = suma + i;
        }
    }
    return suma;
}

int es_defectivo(int numero)
{
    if (numero <= 1) 
    {
        return 1;  
    }
    
    int suma = suma_divisores(numero);
    return suma < numero;
}
