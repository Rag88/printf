#include "main.h"

/**
 * _printf - Function that works as printf
 * @format: it's the format
 * Return: count
 */

int _printf(const char *format, ...)
{
	/* va_list valist; <- Variable donde se van a almacenar las variadics */
	/* va_start(); <- Macro que inicia la lista */
	/* va_arg(nombre, tipo); <- Macro que accede a un dato de la lista */
	/* va_end(nombre); <- Macro que finaliza la lista cuando acabe */

	int i = 0;
    	int count = 0;
    	va_list argumentos;
    	char letra;
    	char *str;
    	int num;

	va_start(argumentos, format); /* nombre de la variable, el ultimo argumento con nombre */    

	while (format[i] != '\0')
	{
        if (format[i] != '%')
        {
            /* Impresiones regulares */
            count += _putchar(format[i]);
            i++;
        }
        else
        {
            switch(format[i + 1])
            { 
                /* En los casos del switch es donde usaremos los va_args */
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
