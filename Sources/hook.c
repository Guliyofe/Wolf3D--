/*
** hook.c for wolf3d in /home/blonde_f/rendu/MUL_2013_wolf3d/Sources
** 
** Made by Guillaume Blondeau
** Login   <blonde_f@epitech.net>
** 
** Started on  Tue Jan  7 09:59:07 2014 Guillaume Blondeau
** Last update Sun Jan 12 15:53:39 2014 Guillaume Blondeau
*/

#include	<stdlib.h>
#include	"my_wolf3d.h"

int		expose_hook(t_key *key)
{
  mlx_put_image_to_window(key->init->init, key->init->win, key->img->img, \
			  0, 0);
  return (0);
}

int		key_hook(int keycode, t_key *key)
{
  if (keycode == 65307)
    {
      mlx_destroy_window(key->init->init, key->init->win);
      exit (-1);
    }
  if (keycode == 65361)
    key->player->angle = key->player->angle + ANGLE;
  if (keycode == 65363)
    key->player->angle = key->player->angle - ANGLE;
  if (keycode == 65362)
    my_forward(key->player);
  if (keycode == 65364)
    my_backward(key->player);
  if (keycode == 114)
    my_init_player(key->player, "level_love");
  if (my_init_fond(key->init, key->img, key->player) == -1)
    return (-1);
  return (0);
}
