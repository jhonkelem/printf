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
	int n_displayed = 0;
	char *str = NULL;
	va_list args;

	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			n_displayed++;
		}
		else
		{
			if (format[i + 1] == 'c')
			{
				_print_char(va_arg(args, int));
				n_displayed++;
				i++;
			}
			else if (format[i + 1] == 's')
			{
				i++;
				str = va_arg(args, char *);
				_print_str(str);
			}
			else if (format[i + 1] == '%')
			{
				i++;
				_putchar('%');
				n_displayed++;
			}
		}

		i++;
	}

	va_end(args);
	return (n_displayed);
}
