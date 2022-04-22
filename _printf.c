#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: The specified format
 *
 * Return: The number of characters that were printed
 */
int _printf(const char *format, ...)
{
	int  i = 0, k = 0;
	char *str = NULL;
	va_list args;

	va_start(args, format);

	while (format[i] != '\0'))
	{
		if (format[i] != '%')
			_putchar(format[i]);
		else
		{
			/* format[i] == '%' */
			if (format[i + 1 ] == 'c')
			{
				_putchar(va_arg(args, int));
				i++;
			}
			else if(format[i + 1] == 's')
			{
				i++;
				str = va_arg(args, char *);
				k = 0;
				while (str[k] != '\0')
				{
					_putchar(str[k]);
					k++;
				}
			}
			else if (format[i + 1] == '%')
			{
				i++;
				_putchar('%');
			}
		}

		i++;
	}

	va_end(args);
	return(0);
}
