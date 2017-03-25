/*
** my_put_nbr.c for my_put_nbr in /home/blonde_f/rendu/Piscine-C-Jour_03
** 
** Made by Guillaume Blondeau
** Login   <blonde_f@epitech.net>
** 
** Started on  Wed Oct  2 12:52:52 2013 Guillaume Blondeau
** Last update Wed Nov 13 14:55:44 2013 Guillaume Blondeau
*/

#include	"my.h"

void		my_put_nbr(int nb)
{
  int		tall;

  tall = 1;
  if (nb < 0)
    {
      nb = nb * -1;
      my_putchar('-');
    }
  while (nb / tall > 9)
    tall = tall * 10;
  while (tall != 0)
    {
      my_putchar(nb / tall % 10 + 48);
      tall = tall / 10;
    }
}
