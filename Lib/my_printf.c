/*
** my_printf.c for my_printf in /home/blonde_f/rendu/PSU_2013_my_printf
** 
** Made by Guillaume Blondeau
** Login   <blonde_f@epitech.net>
** 
** Started on  Wed Nov 13 10:48:49 2013 Guillaume Blondeau
** Last update Fri Nov 15 15:30:44 2013 Guillaume Blondeau
*/

#include	<stdlib.h>
#include	<stdarg.h>
#include	"my.h"

void		put_arg(char *str, va_list arg, int i)
{
  if (str[i + 1] == 'd' || str[i + 1] == 'i')
    my_put_nbr(va_arg(arg, int));
  if (str[i + 1] == 's')
    my_putstr(va_arg(arg, char *));
  if (str[i + 1] == 'c')
    my_putchar((unsigned char) va_arg(arg, int));
  if (str[i + 1] == '%')
    my_putchar('%');
  if (str[i + 1] == 'u')
    my_put_uint(va_arg(arg,  unsigned int));
  if (str[i + 1] == 'b')
    my_put_nbrbase(va_arg(arg, unsigned int), "01");
  if (str[i + 1] == 'o')
    my_put_unbrbase(va_arg(arg, unsigned int), "01234567");
  if (str[i + 1] == 'x')
    my_put_unbrbase(va_arg(arg, unsigned int), "0123456789abcdef");
  if (str[i + 1] == 'X')
    my_put_unbrbase(va_arg(arg, unsigned int), "0123456789ABCDEF");
  if (str[i + 1] == 'S')
    my_put_nistr(va_arg(arg, char *));
}

int		my_printf(char *str, ...)
{
  va_list	arg;
  int		i;

  va_start(arg, str);
  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] == '%')
	{
	  put_arg(str, arg, i);
	  i++;
	}
      else
	my_putchar(str[i]);
      i++;
    }
  va_end(arg);
  return (i);
}
