#include "main.h"

/**
 * _printf - Function that works as printf
 * @format: formato
 * Return: count
 */

int _printf(const char *format, ...)
{
	int i = 0;
	int count = 0;
	va_list argumentos;
	char letra;
	char *str;
	int num;

	va_start(argumentos, format);

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
