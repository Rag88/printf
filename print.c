#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * _printf - function replicating printf
 * @format: format to be printed
 * Return: count
 */

int _printf(const char *format, ...)
{
	unsigned int i = 0, count = 0, num;
	va_list argumentos;
	char letra, *str;

	va_start(argumentos, format);

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
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
					letra = va_arg(argumentos, int);
					count += _putchar(letra);
					i = i + 2;
					break;
				case 's':
					str = va_arg(argumentos, char *);
					count += _putstring(str);
					i = i + 2;
					break;
				case '%':
					count += _putchar('%');
					i = i + 2;
					break;
				case 'd':
					num = va_arg(argumentos, int);
					count += _putint(num);
					i = i + 2;
					break;
				case 'i':
					num = va_arg(argumentos, int);
					count += _putint(num);
					i = i + 2;
					break;
			}
		}
	}
	va_end(argumentos);
	return (count);
}


