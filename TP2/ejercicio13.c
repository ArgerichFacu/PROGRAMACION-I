#include <stdio.h>
#include <stdlib.h>
// prototipos de funciones
/*
    Ingresa un valor entero para establecer como largo del arreglo.
    @return Retorna como valor entero el numero ingresado.
*/
int longitud(void);

/*
    Recorre el array para completar con valores enteros todas sus posiciones
    @param array[] Arreglo donde se guardaran los numeros
    @param largo Cantidad de elementos soportados en el arreglo.
*/
void rellenar_array(int array[], size_t largo);

/*
    Imprime el arreglo.
    @param array[] Un arreglo de numeros enteros.
    @param largo Cantidad de elementos del arreglo a imprimir.
*/
void imprimir_array(int array[], size_t largo);

/*
    Recorre el arreglo para obtener la suma todos los elementos del arreglo.
    @param array[] Arreglo de numeros enteros.
    @param largo Cantidad de elementos del arreglo.
    @return Retorna el resultado de la suma como valor entero.
*/
int suma(int array[], size_t largo);

/*
    Recorre el arreglo para obtener la suma y promedio de los elementos ingresados.
    @param array[] Arreglo de numeros enteros.
    @param largo Cantidad de elementos del arreglo.
    @return Retorna la division de la suma de los elementos dividido la cantidad de estos como un valor double.
*/
double promedio(int array[], size_t largo);

/*
    Recorre el arreglo en busca de la posicion en la que se encuentra el valor mas alto, comparando con una variable auxiliar y guardando la posicion.
    @param array[] Arreglo de numeros enteros.
    @param largo Cantidad de elementos del arreglo.
    @return Retorna comom valor entero la posicion en la que se encuentra el valor mas alto ingresado en el arreglo.
*/
int maximo(int array[], size_t largo);

/*
    Recorre el arreglo en busca del valor mas bajo, comparando con una variable auxiliar.
    @param array[] Arreglo de numeros enteros.
    @param largo Cantidad de elementos del arreglo.
    @return Retorna como valor entero el numero mas bajo ingresado en el arreglo.
*/
int minimo(int array[], size_t largo);

// programa principal
int main()
{
    int largo = longitud();
    int array[largo];
    rellenar_array(array, largo);
    imprimir_array(array, largo);
    int sum = suma(array, largo);
    printf("suma = %d \n", sum);
    double prom= promedio(array, largo);
    printf("promedio= %.2f \n", prom);
    int max=maximo(array, largo);
    printf("posicion del maximo = %d \n", max);
    int min=minimo(array, largo);
    printf("minimo = %d \n", min);
    
    return 0;
}

// desarrollo de funciones

int longitud(void)
{
    int longitud = 0;
    printf("ingrese la longitud del arreglo a trabajar");
    scanf("%d", &longitud);
    return longitud;
}

void rellenar_array(int array[], size_t largo)
{
    for(size_t i = 0; i < largo; i++)
    {
        printf("ingrese el %zu numero \n", (i+1));
        scanf("%d", &array[i]);
    }
}
void imprimir_array(int array[], size_t largo)
{
    for(size_t i = 0; i < largo; i++)
    {
        printf("El numero en la posicion %zu del array es : %d \n", i, array[i]);
    }
}

int suma(int array[], size_t largo)
{
    int resultado = 0;
    for(size_t i  =0; i < largo; i++)
    {
        resultado= resultado+ array[i];
    }
    return resultado;
}

double promedio(int array[], size_t largo)
{
    double promedio = 0;
    for( size_t i = 0; i < largo ; i++)
    {
        promedio = promedio+ array[i]; 
    }
    return (promedio / largo);
}

int maximo(int array[], size_t largo)
{
    int posicion = 0;
    int max = array[0];
    for(size_t i = 1; i < largo; i++)
    {
        if (array[i]> max){
            max= array[i];
            posicion= i;
        }
    }
    return posicion;
}
int minimo(int array[], size_t largo)
{
    int min = array[0];
    for(size_t i = 1; i < largo; i++)
    {
        if(min > array[i]){
            min = array[i];
        }
    }
    return min;
}
