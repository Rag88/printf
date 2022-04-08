#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _putstring - function that prints a string
 * @s: string
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
