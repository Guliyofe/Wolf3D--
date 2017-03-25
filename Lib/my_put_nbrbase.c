/*
** my_put_nbrbase.c for my_put_nbrbase in /home/blonde_f/rendu/PSU_2013_my_printf
** 
** Made by Guillaume Blondeau
** Login   <blonde_f@epitech.net>
** 
** Started on  Fri Nov 15 13:03:12 2013 Guillaume Blondeau
** Last update Sun Jan  5 10:50:15 2014 Guillaume Blondeau
*/

#include	<stdlib.h>
#include	"my.h"

void		my_putbase(char *res, char *base)
{
  int		i;
  int		j;

  i = my_strlen(res) - 1;
  while (i >= 0)
    {
      j = 0;
      while (res[i] != j)
	j++;
      my_putchar(base[j]);
      i--;
    }
}

int		my_put_nbrbase(int nb, char *base)
{
  int		tall;
  int		i;
  char		*res;

  res = malloc(30 * sizeof(char));
  if (res == NULL)
    {
      my_putstr("Malloc Error");
      return (-1);
    }
  tall = my_strlen(base);
  i = 0;
  while (nb > tall)
    {
      res[i++] = nb % tall;
      nb = nb / tall;
    }
  res[i++] = nb;
  res[i] = '\0';
  my_putbase(res, base);
  free(res);
  return (0);
}
