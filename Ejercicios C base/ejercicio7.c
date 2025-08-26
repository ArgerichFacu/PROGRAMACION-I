/*
Modificá el siguiente código para que no utilice la instrucción break.
'''
#include <stdio.h>

int main()
{
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("valor actual: %d\n", i);
        if (i == 4)
        {
            break;
        }
    }
    return 0;
}
'''
*/
#include <stdio.h>

int main()
{
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("valor actual: %d\n", i);
    }
    return 0;
}