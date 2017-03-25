/*
** my_player.c for wolf3d in /home/blonde_f/rendu/MUL_2013_wolf3d/Sources
** 
** Made by Guillaume Blondeau
** Login   <blonde_f@epitech.net>
** 
** Started on  Sat Jan 11 10:10:37 2014 Guillaume Blondeau
** Last update Sun Jan 12 15:42:36 2014 Guillaume Blondeau
*/

#include	<stdlib.h>
#include	<math.h>
#include	"my_wolf3d.h"

int		my_init_player(t_player *player, char *level)
{
  player->x = 1.3;
  player->y = 1.3;
  player->angle = M_PI * 90 / 180;
  player->level = level;
  if ((player->map = my_read_map(player->map, player->level)) == NULL)
    return (-1);
  return (0);
}

void		my_player(t_player *player, int x, t_vec *vec)
{
  double	yp;

  yp = (WIDTH / 2 - x);
  yp = yp / WIDTH;
  vec->x = 0.5 * cos(player->angle) - yp * sin(player->angle);
  vec->y = 0.5 * sin(player->angle) + yp * cos(player->angle);
}
