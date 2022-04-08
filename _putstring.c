#include "main.h"
#include <stdio.h>

/**
 * _putstring - function that print one string
 * @s: string to print
 * Return: count
 */

int _putstring(char *s)
{
	int i = 0, count = 0;

	while (s[i] != '\0')
	{
		count += _putchar(s[i]);
		i++;
	}
	return (count);
}
/**
 * _putint - function that priunts one integer
 *
 * @num: integer to print
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
		n = n * -1;
		/* Vamos a volver "positivo" para poder imprirlo sin preocuparnos*/
	}
	while (n != 0)
		/* Transformamos al entero en un arreglo (al reves)*/
	{
		r = n % 10;
		arr[i] = r;
		i++;
		n = n / 10;
	}
	for (j = i - 1; j > -1; j--)
		/* imprimimos el arrreglo (al reves)*/
	{
		count += _putchar(48 + arr[j]);
		/* Hay que meterlo en codigo ASCII*/
	}
	return (count);
}
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: on success 1.
 * On error, -1 is returned, and errno is set approprietaly.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
