/*
Usá un lazo do..while para controlar el acceso a un edificio, pidiéndole al usuario que ingrese un número usado como clave.
*/

#include <stdio.h>

int main()
{
    int clave = 0;
    int clave_correcta = 123;

    do
    {
        printf("Ingrese la clave del edificio (123): ");
        scanf("%d", &clave);
        
        if (clave == clave_correcta)
        {
            printf("Clave correcta!");
        }
        else
        {
            printf("Clave incorrecta\n");
        }
    } 
    while (clave != clave_correcta);

    return 0;
}