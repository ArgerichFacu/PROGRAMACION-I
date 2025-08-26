#include <stdio.h>

int ingrese_numeros(void);
void tabla(int);
void impresion(int, int, int);

int main()
{
    int numero = ingrese_numeros();
    tabla(numero);

    return 0;
}

int ingrese_numeros(void)
{
    int numero = 0;

    printf("Ingrese numero entero positivo \n"); 
    scanf("%d", &numero);
    return numero;
}

void tabla (int num)
{
    int i = 0; 
    
    for (i = 1 ; i <= 10; i++)
    {
        int resultado = num * i;
        impresion(num, i, resultado);
    }
}

void impresion (int num, int multiplo , int resultado)
{
    printf("%d x %d = %d\n",num, multiplo, resultado);
}