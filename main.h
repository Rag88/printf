#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h> /* va_list */
#include <unistd.h> /* write */

/* printf functions */
int _putchar(char c);
int _printf(const char *format, ...);
int _putstring(char *s);

#endif