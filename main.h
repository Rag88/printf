#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h> /* va_list */
#include <stdlib.h> /* malloc, free */
#include <unistd.h> /* write */

/**
 * struct formate - struct to choose the format
 * @ftype: type of format to print
 * @funty: function for printing
 */

typedef struct formate
{
	char *ftype;
	char* (*funty)(va_list);
} f_type;

/* printf functions */
int _putchar(char c);
int _printf(const char *format, ...);
int _putstring(char *s);
int _putint(int num);

#endif