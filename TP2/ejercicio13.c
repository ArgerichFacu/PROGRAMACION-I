/*
* Ejercicio 13 – Arreglos
* 
* 13.1 Cargador de arreglos → cargar_arreglo
* 13.2 Impresora de arreglos → muestra_arreglo
* 13.3 Operaciones con arreglos:
*      - Suma
*      - Promedio (double)
*      - Valor mínimo
*      - Posición del valor máximo
*
* Emplear return como int para indicar potenciales fallos.
* Todo implementado en un solo archivo.
* -----------------
* Autor: Facundo Argerich
* Usuario de git: ArgerichFacu
*/


#include <stdio.h>
#include <stdlib.h>

/*
    Pide al usuario la longitud del arreglo.
    @return Número entero ingresado (longitud).
*/
int longitud(void);

/*
    Carga el arreglo con valores enteros ingresados por el usuario.
    @param array[] Arreglo donde se guardarán los números.
    @param largo Cantidad de elementos del arreglo.
*/
void rellenar_array(int array[], size_t largo);

/*
    Muestra el contenido del arreglo.
    @param array[] Arreglo de números enteros.
    @param largo Cantidad de elementos del arreglo.
*/
void imprimir_array(int array[], size_t largo);

/*
    Calcula la suma de los elementos del arreglo.
    @param array[] Arreglo de enteros.
    @param largo Cantidad de elementos.
    @return Entero con la suma total.
*/
int suma(int array[], size_t largo);

/*
    Calcula el promedio de los elementos del arreglo.
    @param array[] Arreglo de enteros.
    @param largo Cantidad de elementos.
    @return Promedio como double.
*/
double promedio(int array[], size_t largo);

/*
    Devuelve el valor máximo del arreglo.
    @param array[] Arreglo de enteros.
    @param largo Cantidad de elementos.
    @return Valor máximo encontrado.
*/
int maximo(int array[], size_t largo);

/*
    Devuelve el valor mínimo del arreglo.
    @param array[] Arreglo de enteros.
    @param largo Cantidad de elementos.
    @return Valor mínimo encontrado.
*/
int minimo(int array[], size_t largo);

// programa principal
int main()
{
    int largo = longitud();

    if (largo <= 0) {
        printf("Error: la longitud debe ser mayor a 0\n");
        return 1;
    }

    int array[largo];

    rellenar_array(array, largo);
    imprimir_array(array, largo);

    printf("Suma = %d \n", suma(array, largo));
    printf("Promedio = %.2f \n", promedio(array, largo));
    printf("Valor máximo = %d \n", maximo(array, largo));
    printf("Valor mínimo = %d \n", minimo(array, largo));
    
    return 0;
}

// desarrollo de funciones

int longitud(void)
{
    int longitud = 0;
    printf("Ingrese la longitud del arreglo: ");
    scanf("%d", &longitud);
    return longitud;
}

void rellenar_array(int array[], size_t largo)
{
    for(size_t i = 0; i < largo; i++)
    {
        printf("Ingrese el %zu° número: ", (i + 1));
        scanf("%d", &array[i]);
    }
}

void imprimir_array(int array[], size_t largo)
{
    for(size_t i = 0; i < largo; i++)
    {
        printf("Posición %zu -> %d \n", i, array[i]);
    }
}

int suma(int array[], size_t largo)
{
    int resultado = 0;
    for(size_t i = 0; i < largo; i++)
        resultado += array[i];
    return resultado;
}

double promedio(int array[], size_t largo)
{
    return (double)suma(array, largo) / largo;
}

int maximo(int array[], size_t largo)
{
    int max = array[0];
    for(size_t i = 1; i < largo; i++)
        if (array[i] > max) max = array[i];
    return max;
}

int minimo(int array[], size_t largo)
{
    int min = array[0];
    for(size_t i = 1; i < largo; i++)
        if(array[i] < min) min = array[i];
    return min;
}
