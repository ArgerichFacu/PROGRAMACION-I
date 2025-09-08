/*
*Ejercicio 1.1 – Largo de cadenas 
*Implementar una función que cuente el largo de una cadena de texto de
*manera segura, La función debe retornar el largo de la cadena o el código
*de error correspondiente.
*-----------------
*Facundo Argerich
*ArgerichFacu
*/

#include <stdio.h>

/**
 * La funcion cuenta los caracteres de la cadena sin exceder la capacidad 
 *  @param cadena es la secuencia de caracteres de la cual se obtendrá el 
            La secuencia es valida y posee un tamaño físico que permite 
 *  @param capacidad es cuantos caracteres pueden ser alojados en la caden
 *                   Este valor es mayor que cero y menor o igual al largo 
 *  @returns un numero entero en donde los valores positivos incluyendo el 
        y los valores negativos, las siguientes situaciones de error:
            CADENA_SIN_TERMINADOR cuando la cantidad de carateres sea igua
            indicada por el argumento
 */
int largo_seguro(size_t capacidad, char cadena[]);