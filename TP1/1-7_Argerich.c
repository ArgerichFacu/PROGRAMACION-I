/*
Ejercicio 1.7 – Números primos
 Escribir una solución que retorne `true` si un número entero indicado es Primo y `false` cuando no lo sea.
 
 La obtención de este resultado debe ser mediante divisiones sucesivas.
 
 Un número es primo cuando sus divisores son solo si mismo y 1.
 
 Por ejemplo:
  - `7` es primo porque es solo divisible por `7` y `1`. (si mismo y el neutro con respecto a la división)
  - `8` no es primo, es divisible por varios números adicionales; `8`, `4`, `2` y `1`.
-----------------
Facundo Argerich
ArgerichFacu
*/

#include <stdio.h>
#include <stdbool.h>

int main()
{
    int choice;
    bool primo = true;

    printf("Ingrese un número:\n");
    scanf("%d", &choice);   
    if (choice <= 1)
    {
        primo = false;
    }
    else
    {
        for (int i = 2; i < choice; i++)
        {
            if ( choice % i == 0)
            {
                primo = false;
            }
        }
    }

    if (primo){
        printf("Su número es primo\n");
    }
    else {
        printf("su número no es primo\n");
    }
}