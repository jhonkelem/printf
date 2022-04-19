#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * _printf - function that produces output according to format
 * @format: type of argument passed to function
 * Return: k, number of charcters printed
 */

int _printf(const char *format, ...)

{

const char *string;

int cont = 0;

va_list arg;

if (!format)

return (-1);


va_start(arg, format);

string = format;

cont = loop_format(arg, string);

va_end(arg);

return (cont);

}
