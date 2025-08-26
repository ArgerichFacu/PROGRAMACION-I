/*
*Ejercicio 7. – Potencia lenta
*Desarrolla una función que calcule la potencia de un número elevado a una
*potencia dada, sin utilizar el operador de multiplicación.
*-----------------
*Facundo Argerich
*ArgerichFacu
*/

#include <stdio.h>

int leer_base(void);
int leer_exponente(void);
int multiplicar(int n1, int n2);
int potencia_lenta(int base, int exponente);
void resultado_potencia(int base, int exponente, int resultado);

int main()
{
    int base = 0;
    int exponente = 0;
    int resultado = 0;

    base = leer_base();
    exponente = leer_exponente();   
    resultado = potencia_lenta(base, exponente);
    resultado_potencia(base, exponente, resultado);
}

int leer_base(void)
{
    int base = 0;

    printf("POTENCIA LENTA\n");

    printf("Ingrese una un numero: \n");
    scanf("%d", &base);

    return base;
}

int leer_exponente(void)
{
    int exponente = 0;

    printf("Ingrese la potencia a la que quiera elevar el numero: \n");
    scanf("%d", &exponente);

    return exponente;
}

int multiplicar(int n1, int n2)
{
    int resultado = 0;
    int i = 0;
    for (i = 0; i < n2; i++)
    {
        resultado = resultado + n1;
    }
    return resultado;
}

int potencia_lenta(int base, int exponente)
{
    int resultado = base;
    int i = 0;

    if (exponente == 0)
    {
        return 1;
    }

    for (i = 1; i < exponente; i++)
    {
        resultado = multiplicar(resultado, base);
    }
    return resultado;
}

void resultado_potencia(int base, int exponente, int resultado)
{
    printf("%d ^ %d = %d\n", base, exponente, resultado);
}


