/*
Mostrá los números del 1 al 100
*/

#include <stdio.h>

int main()
{
    int i = 0;
    int numero = 1;

    while (i < 100)
    {
        printf("%d\n", numero);
        numero = numero + 1;
        i++;
    }
    return 0;
}
