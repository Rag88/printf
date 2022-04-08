#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main()
{
    int s1;
    int s2;
    
    s1 = printf("%i\n", 15);
    s2 = _printf("%i\n", 15);
    printf("\ns1: %i s2: %i\n", s1, s2);
    return 0;
}
