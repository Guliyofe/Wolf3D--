/*
** my_fond.c for wolf3d in /home/blonde_f/Documents/lol/Sources
** 
** Made by Guillaume Blondeau
** Login   <blonde_f@epitech.net>
** 
** Started on  Wed Jan  8 18:29:59 2014 Guillaume Blondeau
** Last update Sun Jan 12 02:30:23 2014 Guillaume Blondeau
*/

#include	<stdlib.h>
#include	"../Include/my_wolf3d.h"

int		my_init_fond(t_init *init, t_img *img, t_player *player)
{
  t_cord	shape;
  t_pos		pos;

  my_fill_cord(HEIGHT / 2, WIDTH, 0x000099CC, &shape);
  my_fill_pos(0, 0, &pos);
  my_pixel_put_img(shape, img, init, pos);
  my_fill_cord(HEIGHT / 2, WIDTH, 0x00003300, &shape);
  my_fill_pos(0, HEIGHT / 2, &pos);
  my_pixel_put_img(shape, img, init, pos);
  if (my_wall(init, img, player) == -1)
    return (-1);
  my_aff_img(init, img);
  return (0);
}
