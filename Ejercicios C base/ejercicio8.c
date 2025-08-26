/*
Modificá el siguiente código para que no utilice la instrucción continue.
'''
#include <stdio.h>

int main()
{
    for (int i = 0; i <= 10; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        printf("i = %d\n", i);
    }
    return 0;
}
'''
*/

#include <stdio.h>

int main()
{
    for (int i = 0; i <= 10; i++)
    {
        printf("i = %d\n", i);
    }
    return 0;
}