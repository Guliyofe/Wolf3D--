/*
** my_putstr.c for my_putstr in /home/blonde_f/rendu/Piscine-C-Jour_04
** 
** Made by Guillaume Blondeau
** Login   <blonde_f@epitech.net>
** 
** Started on  Thu Oct  3 09:23:20 2013 Guillaume Blondeau
** Last update Fri Nov 15 15:06:41 2013 Guillaume Blondeau
*/

#include	"my.h"

void		my_putstr(char *str)
{
  int		i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i++;
    }
}
