/*
** my_putchar.c for my_putchar in /home/blonde_f/rendu/Piscine-C-Jour_03
** 
** Made by Guillaume Blondeau
** Login   <blonde_f@epitech.net>
** 
** Started on  Wed Oct  2 09:20:31 2013 Guillaume Blondeau
** Last update Mon Jan 27 13:10:22 2014 Guillaume BLONDEAU
*/

#include	"unistd.h"

void		my_putchar(char c)
{
  write(1, &c, 1);
}
