/*
Ejercicio 1.15 – Invertir un número entero 
Pedir un número entero positivo y mostrarlo con sus dígitos en orden inverso, sin usar arreglos ni cadenas de caracteres.  
Ejemplo: Entrada `12345` → Salida `54321`.
-----------------
Facundo Argerich
ArgerichFacu
*/

#include <stdio.h>

int main() 
{
    int numero;
    int original;
    int inverso = 0;
    int ceros_finales = 0;
    
    printf("INVERTIR NUMERO ENTERO\n");
    printf("Ingrese un numero entero positivo: ");
    
    if (scanf("%d", &numero) != 1 || numero < 0) 
    {
        printf("Error: Debe ser un entero positivo.\n");
        return 1;
    }
    
    original = numero;
    
    if (numero == 0) 
    {
        printf("Numero invertido: 0\n");
        return 0;
    }
    
    while (numero % 10 == 0 && numero != 0)     // Contar ceros finales
    {
        ceros_finales++;
        numero /= 10;
    }
    
    while (numero != 0)     // Invertir el número (sin ceros finales)
    {
        inverso = inverso * 10 + (numero % 10);
        numero /= 10;
    }
    
    printf("Numero invertido: ");   // Imprimir resultado con ceros "recuperados"
    
    for (int i = 0; i < ceros_finales; i++) 
    {
        printf("0"); // Imprime ceros perdidos
    }
    printf("%d\n", inverso); // Imprime el número invertido
    
    return 0;
}