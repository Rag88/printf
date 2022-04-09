#include "main.h"

/**
 * _printf - Function that works as printf
 * @format: it's the format.
 * Return: count
 */

int _printf(const char *format, ...)
{
	int i = 0;
	int count = 0;
	va_list argumento;
	char letra;
	char *str;

	if (format == NULL)
	return (-1);
	va_start(argumento, format);

	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			count += _putchar(format[i]);
				i++;
		}
		else
		{
			switch (format[i + 1])
			{
				case 'c':
				letra = va_arg(argumento, int);
				count += _putchar(letra);
				i = i + 2;
				break;
				case 's':
				str = va_arg(argumento, char *);
				count += _putstring(str);
				i = i + 2;
				break;
				case '%':
				count += _putchar('%');
				i = i + 2;
				break;
			}
		}
	}
	va_end(argumento);
	return (count);
}
