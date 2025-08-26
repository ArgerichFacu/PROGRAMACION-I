/*
Hacé un programa que pida contraseña hasta que sea la correcta
*/

#include <stdio.h>
#include <stdbool.h>


int main()
{
    int clave = 0;
    int clave_correcta = 2205;
    bool continuar = true;

    while (continuar)
    {
        printf("Ingrese la contrasenia (2205): ");
        scanf("%d", &clave);
        
        if (clave == clave_correcta)
        {
            printf("Contrasenia correcta!");
            continuar = false;
        }
        else
        {
            printf("Contrasenia incorrecta.\n");
        }
    }
    return 0;
}