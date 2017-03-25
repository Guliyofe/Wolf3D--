/*
** my_fill.c for wolf3d in /home/blonde_f/Documents/lol/Sources
** 
** Made by Guillaume Blondeau
** Login   <blonde_f@epitech.net>
** 
** Started on  Fri Jan 10 12:40:34 2014 Guillaume Blondeau
** Last update Sat Jan 11 13:14:50 2014 Guillaume Blondeau
*/

#include	"my_wolf3d.h"

void		my_fill_pos(int x, int y, t_pos *pos)
{
  pos->x = x;
  pos->y = y;
}

void		my_fill_cord(int h, int w, int color, t_cord *shape)
{
  shape->h = h;
  shape->w = w;
  shape->color = color;
}

void		my_fill_vec(t_vec *vec)
{
  vec->x = 0;
  vec->y = 0;
}
