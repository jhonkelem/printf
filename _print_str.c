#include "main.h"

/**
 * _print_str - produces output according to a format
 * @s: The string
 *
 * Return: The number of characters that were printed
 */
int _print_str(char *s)
{
  int k = 0;
  
  while (str[k] != '\0')
	{
    _putchar(str[k]);
    k++;
	}
  return (0);
}
