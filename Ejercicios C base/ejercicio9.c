/*
Reescribí el ingreso de clave usando una bandera booleana en lugar de break o do...while.
*/

#include <stdio.h>
#include <stdbool.h>


int main()
{
    int clave = 0;
    int clave_correcta = 123;
    bool continuar = true;

    while (continuar)
    {
        printf("Ingrese la clave del edificio (123): ");
        scanf("%d", &clave);
        
        if (clave == clave_correcta)
        {
            printf("Clave correcta!");
            continuar = false;
        }
        else
        {
            printf("Clave incorrecta.\n");
        }
    }
    return 0;
}