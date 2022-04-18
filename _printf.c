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

if (format != NULL)

{

int count = 0, i;

int (*m)(va_list);

va_list args;

va_start(args, format);

i = 0;

if (format[0] == '%' && format[1] == '\0')
										return (-1);

while (format != NULL && format[i] != '\0')
										{
										if (format[i] == '%')
										{																				if (format[i + 1] == '%')
										{

count += _putchar(format[i]);

i += 2;
					
}
										else
										{
										m = get_func(format[i + 1]);
																				if (m)																														count += m(args);
										else																																								count = _putchar(format[i]) + _putchar(format[i + 1]);

i += 2;

}

}
										else
										{
										count += _putchar(format[i]);	
										i++;																				}
										}

va_end(args);
		
return (count);
				
}

return (-1);

{	
