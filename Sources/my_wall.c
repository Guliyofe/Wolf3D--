/*
** my_wall.c for wolf3d in /home/blonde_f/Documents/lol/Sources
** 
** Made by Guillaume Blondeau
** Login   <blonde_f@epitech.net>
** 
** Started on  Fri Jan 10 13:31:01 2014 Guillaume Blondeau
** Last update Sun Jan 12 17:57:00 2014 Guillaume Blondeau
*/

#include	<unistd.h>
#include	<stdlib.h>
#include	<math.h>
#include	"my.h"
#include	"my_wolf3d.h"

void		my_side(t_cord *shape, t_vec *vec, t_inter *inter)
{
  double	d_distx;
  double	d_disty;
  double	s_distx;
  double	s_disty;

  d_distx = sqrt(1 + (vec->y * vec->y) / (vec->x * vec->x));
  d_disty = sqrt(1 + (vec->x * vec->x) / (vec->y * vec->y));
  if (vec->x > 0)
    s_distx = (inter->p->x - inter->x) * d_distx;
  else
    s_distx = (inter->x + 1.0 - inter->p->x) * d_distx;
  if (vec->y > 0)
    s_disty = (inter->p->y - inter->y) * d_disty;
  else
    s_disty = (inter->y + 1.0 - inter->p->y) * d_disty;
  if (s_distx < s_disty && vec->x < 0)
    my_fill_cord(inter->w_s * 2, 1, 0x00842E1B, shape);
  if (s_distx < s_disty && vec->x > 0)
    my_fill_cord(inter->w_s * 2, 1, 0x00842E1C, shape);
  if (s_distx > s_disty && vec->y < 0)
    my_fill_cord(inter->w_s * 2, 1, 0x00551E11, shape);
  if (s_distx > s_disty && vec->y > 0)
    my_fill_cord(inter->w_s * 2, 1, 0x00551E12, shape);
}

void		my_put_wall(t_inter *inter, t_img *img, t_init *i, t_vec *vec)
{
  t_pos		pos;
  t_cord	shape;

  inter->w_s = HEIGHT / (2 * inter->k);
  my_fill_cord(1, 1, 0x00000000, &shape);
  my_fill_pos(inter->col, HEIGHT / 2 - inter->w_s, &pos);
  my_pixel_put_img(shape, img, i, pos);
  if (i->opt != NULL && my_streq(i->opt, "allee_r") == 1)
    my_fill_cord(inter->w_s * 2, 1, 0x00842E1B * inter->w_s, &shape);
  else
    my_side(&shape, vec, inter);
  my_fill_pos(inter->col, HEIGHT / 2 - inter->w_s + 1, &pos);
  my_pixel_put_img(shape, img, i, pos);
  my_fill_cord(1, 1, 0x00000000, &shape);
  my_fill_pos(inter->col, HEIGHT / 2 + inter->w_s, &pos);
  my_pixel_put_img(shape, img, i, pos);
  my_cross(img, i);
}

void		my_init_var(t_inter *inter, t_player *player)
{
  inter->col = 0;
  inter->x = player->x;
  inter->y = player->y;
  inter->p = player;
}

void		what_wall(t_init *init, t_img *img, t_inter *inter, t_vec *vec)
{
  if (inter->p->map[inter->y][inter->x] == '1')
    my_put_wall(inter, img, init, vec);
  if (inter->p->map[inter->y][inter->x] == '2')
    my_spe(inter, img, init);
  if (inter->p->map[inter->y][inter->x] == '3')
    my_door(inter, img, init);
  if (inter->p->map[inter->y][inter->x] == '4')
    my_end(inter, img, init);
}

int		my_wall(t_init *init, t_img *img, t_player *player)
{
  t_inter	inter;
  t_vec		vec;

  my_init_var(&inter, player);
  my_fill_vec(&vec);
  while (inter.col < WIDTH)
    {
      inter.k = 1;
      my_player(player, inter.col, &vec);
      inter.x = (int)(player->x + inter.k * vec.x);
      inter.y = (int)(player->y + inter.k * vec.y);
      while (player->map[inter.y][inter.x] == '0')
	{
	  inter.x = (int)(player->x + inter.k * vec.x);
	  inter.y = (int)(player->y + inter.k * vec.y);
	  inter.k = inter.k + PRECISION;
	}
      what_wall(init, img, &inter, &vec);
      inter.col = inter.col + 1;
    }
  return (0);
}
