/*
** my_put_nistr.c for my_put_nistr in /home/blonde_f/rendu/PSU_2013_my_printf
** 
** Made by Guillaume Blondeau
** Login   <blonde_f@epitech.net>
** 
** Started on  Fri Nov 15 15:07:25 2013 Guillaume Blondeau
** Last update Fri Nov 15 15:12:14 2013 Guillaume Blondeau
*/

#include	"my.h"

void		my_put_nistr(char *str)
{
  int		i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] < 32 || str[i] >= 127)
	{
	  my_putchar('\\');
	  my_put_nbrbase(str[i], "01234567");
	}
      else
	my_putchar(str[i]);
      i++;
    }
}
