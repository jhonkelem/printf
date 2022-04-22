#include "main.h"

int (*_selec_func(char c))(va_list)
{
  if (c == 'c')
    return (_print_char);
  if (c == 's')
    return (_print_str);
  
  return (NULL);
}
