/*
** my_move.c for wolf3d in /home/blonde_f/rendu/MUL_2013_wolf3d/Sources
** 
** Made by Guillaume Blondeau
** Login   <blonde_f@epitech.net>
** 
** Started on  Sat Jan 11 19:07:27 2014 Guillaume Blondeau
** Last update Sun Jan 12 16:25:02 2014 Guillaume Blondeau
*/

#include	<stdlib.h>
#include	<math.h>
#include	"my.h"
#include	"my_wolf3d.h"

int		my_collid_f(t_player *player, double vx, double vy)
{
  int		tx;
  int		ty;

  tx = player->x + vx / SPEED;
  ty = player->y + vy / SPEED;
  if (player->map[ty][tx] == '3')
    player->map[ty][tx] = '0';
  if (player->map[ty][tx] == '2')
    {
      if (my_init_player(player, "level_1") == -1)
	exit(-1);
    }
  if (player->map[ty][tx] == '4')
    {
      my_putstr("\033[32mYou Win !\n\033[0m");
      exit(1);
    }
  if (player->map[ty][tx] == '0')
    return (1);
  else
    return (0);
}

int		my_collid_b(t_player *player, double vx, double vy)
{
  int		tx;
  int		ty;

  tx = player->x - vx / SPEED;
  ty = player->y - vy / SPEED;
  if (player->map[ty][tx] == '3')
    player->map[ty][tx] = '0';
  if (player->map[ty][tx] == '2')
    {
      if (my_init_player(player, "level_1") == -1)
	exit(-1);
    }
  if (player->map[ty][tx] == '4')
    {
      my_putstr("\033[32mYou Win !\n\033[0m");
      exit(1);
    }
  if (player->map[ty][tx] == '0')
    return (1);
  else
    return (0);
}

void		my_forward(t_player *player)
{
  double	vx;
  double	vy;

  vx = 0.5 * cos(player->angle);
  vy = 0.5 * sin(player->angle);
  if (my_collid_f(player, vx, vy) == 1)
    {
      player->x = player->x + vx / SPEED;
      player->y = player->y + vy / SPEED;
    }
}

void		my_backward(t_player *player)
{
  double	vx;
  double	vy;

  vx = 0.5 * cos(player->angle);
  vy = 0.5 * sin(player->angle);
  if (my_collid_b(player, vx, vy) == 1)
    {
      player->x = player->x - vx / SPEED;
      player->y = player->y - vy / SPEED;
    }
}
