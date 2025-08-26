/*
Ejercicio 1.14 – Números amigos
Solicitar dos números enteros positivos y determinar si son números amigos.
Dos números son amigos si la suma de los divisores propios de cada uno es igual al otro número.
Ejemplo: 220 y 284 son amigos.
-----------------
Facundo Argerich
ArgerichFacu
*/

#include <stdio.h>
#include <math.h>

int suma_divisores_propios(int n) 
{
    if (n <= 1) 
    {
        return 0;
    }
    
    int suma = 1; // 1 es divisor propio
    int limite = (int)sqrt(n);
    
    for (int i = 2; i <= limite; i++) 
    {
        if (n % i == 0) 
        {
            suma += i;
            int complemento = n / i;
        
            if (complemento != i) 
            {
                suma += complemento;
            }
        }
    }
    return suma;
}

int son_amigos(int a, int b) 
{
    if (a == b)
    {
        return 0; // Un número no puede ser amigo de sí mismo
    }

    int suma_a = suma_divisores_propios(a);
    int suma_b = suma_divisores_propios(b);
    
    return (suma_a == b && suma_b == a);
}

int main() 
{
    int num1;
    int num2;
    
    printf("NUMEROS AMIGOS\n");
    printf("Ingrese dos numeros enteros positivos:\n");
    scanf("%d %d", &num1, &num2);
    
    if (son_amigos(num1, num2)) 
    {
        printf("%d y %d SON numeros amigos\n", num1, num2);
    }

    else 
    {
        printf("%d y %d NO son numeros amigos\n", num1, num2);
    }

    return 0;
}