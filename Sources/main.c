/*
** main.c for wolf3d in /home/blonde_f/rendu/MUL_2013_wolf3d/Sources
** 
** Made by Guillaume Blondeau
** Login   <blonde_f@epitech.net>
** 
** Started on  Tue Jan  7 09:50:19 2014 Guillaume Blondeau
** Last update Sun Jan 12 01:35:11 2014 Guillaume Blondeau
*/

#include	"my_wolf3d.h"

int		main(int ac, char **av)
{
  if (ac != 0)
    {
      if (my_wolf(av[1]) == -1)
	return (-1);
    }
  return (0);
}
