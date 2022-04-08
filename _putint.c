#include "main.h"

/**
 * _putint - function that print integer
 * @num: integer 
 * Return: count
 */


int _putint(int num)
{
    /* INT_MAX is +2147483647 <-- 10 digit number */
    /* INT_MIN is -2147483648 <-- 10 digit number */
    int count = 0;
    int n = num;
    int arr[10];
    int i = 0;
    int j, r;
    
    if (n < 0)
    {
        count += _putchar('-');
        n = n * -1; /* Vamos a volver "positivo" para poder imprirlo sin preocuparnos */
    }
    
    while (n != 0) /* Transformamos al entero en un arreglo (al reves) */
    {
        r = n % 10;
        arr[i] = r;
        i++;
        n = n / 10;
    }

    for (j = i - 1; j > -1; j--) /* imprimimos el arrreglo (al reves) */
    {
        count += _putchar(48 + arr[j]); /* Hay que meterlo en codigo ASCII */
    }
    
    return (count);
}
