/*
Usá un for para mostrar los múltiplos de 3 entre 0 y 30.
*/

#include <stdio.h>

int main()
{
    int i = 0;

    printf("Los multiplos de 3 entre 0 y 30 son: \n");

    for (int i = 0; i <= 30; i++)
    {
        if (i % 3 == 0)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}
