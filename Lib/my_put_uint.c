/*
** my_put_uint.c for my_put_uint in /home/blonde_f/rendu/PSU_2013_my_printf
** 
** Made by Guillaume Blondeau
** Login   <blonde_f@epitech.net>
** 
** Started on  Fri Nov 15 10:41:51 2013 Guillaume Blondeau
** Last update Mon Jan 27 13:08:33 2014 Guillaume BLONDEAU
*/

#include	"my.h"

void		my_put_uint(unsigned int nb)
{
  int		tall;

  tall = 1;
  while (nb / tall > 9)
    tall = tall * 10;
  while (tall != 0)
    {
      my_putchar(nb / tall % 10 + 48);
      tall = tall / 10;
    }
}
