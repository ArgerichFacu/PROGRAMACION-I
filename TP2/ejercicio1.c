/*
*Ejercicio 1. – Contador de digitos
*Escribe una función que cuente y muestre en pantalla la cantidad de
*dígitos en un número entero positivo.
*-----------------
*Facundo Argerich
*ArgerichFacu
*/

#include <stdio.h>

int contador_digito(int);
void mostrar(int);

/*
*@param numero
*
*/
int contador_digito(int numero)
{
    int i = 0;

    if (numero == 0) 
    {
        return 1;
    }

    while (numero > 0)
    {
        numero /= 10;
        i++;
    }
    return i;
}

void mostrar(int i)
{
    printf("La cantidad de digitos es: %d", i);
}

int main()
{
    int numero = 0;
    int cantidad = 0;

    printf("CONTADOR DE DIGITOS\n");

    printf("Ingrese un numero: \n");
    scanf("%d", &numero);

    cantidad = contador_digito(numero);
    mostrar(cantidad);

    return 0;
}