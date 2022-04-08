**_PRINTF(3)**		**Linux Programmer's Manual**	  **_PRINTF(3)**

## NAME 

	_printf


## SYNOPSIS

	#include <holberton.h>
	
	int (*get_format(chars))(va_list);
	int _printf(const char *format, ...);
	int print_char(va_list arg);
	int print_string(va_list arg);
	int print_int(va_list arg);
	int print_decimal(va_list arg);


## DESCRIPTION

	The function _printf() is a customized version of printf(), function that outputs according to a format. Under the control of a format string this function writes subsequent arguments (or arguments accessed via the variable-length argument facilities of stdarg(3)) are converted for output.

## RETURN VALUE

	This funtion returns the number of characters printed (but the null byte to end the output to strings)

## Format Of The Format String

	The format string is a character string, that begin and ends in its initial shift state, if threre is. It is composed by zero or more directives: ordinary characters 	(not **%**), that are copied unchanged to output sequence; and conversion specifications, each of which results in getting zero or more subsequent arguments. Eac	h conversion specification is introduced by **%** character and ends with a conversion specifier. There may be (in this order) in between zero or more flags, an optional minimum field width, an optional precision and an optional length modifier.
The arguments must correspond properly (after type promotion) with the conversion specifier. By default, the arguments are used in the given order, where each **'*'** and each conversion specifier requires the next argument - an error is if many arguments are given insufficiently. 
e.g
~~~
_printf("%*d", width);
~~~

## Flag Charaters

The character % is followed by zero or more of the following flags:

#### **'#'**

The value has to become an alternate  form for **o** conversions. The first output of the string character is 0 - prefixing 0 if 0 wasn't there. For **x** and **X** conversions , a nonzero result has the string **0x** (or **0X** for **X** conversions). For a **a**, **A**, **e**, **E**, **f**, **F**, **g** and **G** conversions, a decimal point will always be contained in the result.  For **g** and **G** conversions, trailing zeros are not removed from the result as they would be otherwise.

####  **'0'** (number zero)

Its value should be padded for all covesions but n, the converted value should be padded on the left with zeros instead of blanks. If precision is given with a numeric onversion (**d**, **i**, **o**, **u**, **x**, and  **X**). The flag 0 is not taken into account. For other conversions the behavior is undefined. 

#### **-**
The converted value should be left adjusted  on the field boundary. The default is the right justification) Except for **n** conversion, the converted value is padded on the right with blanks instead of to the left with blanks or zeros. **A** - nullifies a **0** if them both are given.

#### "

A space or blank should be left before a positive number or empty string done by a signed conversion

#### **'+'**

Signs **+** or **-** should be always placed right before a number produced by a signed conversion. By default a signed is used only for negative numbers. **A** **+** nullifies a space if both are being used

#### '

For decimal conversions (**i**, **d**, **u**, **f**, **F**, **g**, **G**) the ouput is to be grouped with wons of grouping character if the local information indicates any. Take in count that there are many version of **gcc**(1) can't parse this option and will show a warning.

## The Field Width 

An optional string of decimal digits (with a first digit different than zero) that specifies the minimum width of the field. In case the converted values has less characters than the field width, it will be padded with blanks to the left (or right, if the adjustment flags of the left have been given) instead of a string of digits just **'*'** or **'*m$'** can be written (for some decimal integer m) to specify the field width provided by the next argument, or in the m-th argument, respectively, whic has to ne of type *int*. A negative field width is taken as a **'-'** flag followed by a positive field width. 

## Presicion 

An optional precision is the for of a period (**.**) followed by an optional deimal of string digits. Instead of a decimal string digit you can write **'*'** or **'*m$'** - for some integer decimal m) to specify that the precision happens in the next argument or in the m-th argument and must be of the type *int*. If the precission is given only as **'.'** of if it is negative , then will be taken to be a zero. This way it gives the minimum number of digits that appear after the [radix character](https://en.wikipedia.org/wiki/Radix) for **a**, **A**, **e**, **E**, **f** and **F** conversion. 

## Example 
 

~~~
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    _printf("%S\n", "Holberton\nSchool");
    return (0);
}
~~~

## See also 

[printf(1)](https://linux.die.net/man/1/printf)

## Bugs

The **printf** family of functions do not correctly handle multibyte characters in the format argument