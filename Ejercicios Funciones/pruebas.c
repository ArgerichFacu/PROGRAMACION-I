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

// ingresa un numero
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

/*
    @param num toma el numero ingresado por el usuario
    @param multiplo es el numero de la tabla por el que se multiplica - tiene que ser el contador i 
    @param resultado es la multiplicacion de num*multiplo
*/
void impresion (int num, int multiplo , int resultado)
{
    printf("%d x %d = %d \n",num, multiplo, resultado);
}
/* la funcion tabla
    un ciclo for que inicia con i en 1 y se repite hasta llegar a i = 10
    le pasa num, i y resultado a la funcion impresion para imprimir la tabla incrementando el multiplo
*/









