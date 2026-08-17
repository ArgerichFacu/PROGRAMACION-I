
/*
Ejercicio 4-38 – Tabla de Multiplicar Completa (Pitagórica con cabeceras)
Mostrá tabla de multiplicar del 1 al 10 (todas las tablas).
-----------------
Facundo Argerich
Github: ArgerichFacu
*/

#include <stdio.h>

int main()
{
    int fila = 0;
    int columna = 0;
    int resultado = 0;

    printf("\n");

    printf("X  |\t");
    
    for (columna = 1; columna <= 10; columna++)
    {
        printf("%d\t", columna);
    }
    printf("\n");
    
    printf("-----------------------------------------------------------------------------------\n");

    for (fila = 1; fila <= 10; fila++)
    {
        printf("%d  |\t", fila);

        for (columna = 1; columna <= 10; columna++)
        {
            resultado = fila * columna;
            
            printf("%d\t", resultado);
        }
        
        printf("\n\n");
    }

    return 0;
}
