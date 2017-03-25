/*
** my_bonus.c for wolf3d in /home/blonde_f/rendu/MUL_2013_wolf3d/Sources
** 
** Made by Guillaume Blondeau
** Login   <blonde_f@epitech.net>
** 
** Started on  Sun Jan 12 12:34:26 2014 Guillaume Blondeau
** Last update Sun Jan 12 16:18:43 2014 Guillaume Blondeau
*/

#include	"my_wolf3d.h"

void		my_cross(t_img *img, t_init *init)
{
  t_pos		pos;
  t_cord	shape;

  my_fill_cord(1, 40, 0x00000000, &shape);
  my_fill_pos(WIDTH / 2 - 20, HEIGHT / 2, &pos);
  my_pixel_put_img(shape, img, init, pos);
  my_fill_cord(40, 1, 0x00000000, &shape);
  my_fill_pos(WIDTH / 2 , HEIGHT / 2 - 20, &pos);
  my_pixel_put_img(shape, img, init, pos);
}

void		my_spe(t_inter *inter, t_img *img, t_init *i)
{
  t_pos		pos;
  t_cord	shape;

  inter->w_s = HEIGHT / (2 * inter->k);
  my_fill_cord(1, 1, 0x00000000, &shape);
  my_fill_pos(inter->col, HEIGHT / 2 - inter->w_s, &pos);
  my_pixel_put_img(shape, img, i, pos);
  my_fill_cord(inter->w_s * 2, 1, 0x0033FF00, &shape);
  my_fill_pos(inter->col, HEIGHT / 2 - inter->w_s + 1, &pos);
  my_pixel_put_img(shape, img, i, pos);
  my_fill_cord(1, 1, 0x00000000, &shape);
  my_fill_pos(inter->col, HEIGHT / 2 + inter->w_s, &pos);
  my_pixel_put_img(shape, img, i, pos);
  my_cross(img, i);
}

void		my_end(t_inter *inter, t_img *img, t_init *i)
{
  t_pos		pos;
  t_cord	shape;

  inter->w_s = HEIGHT / (2 * inter->k);
  my_fill_cord(1, 1, 0x00000000, &shape);
  my_fill_pos(inter->col, HEIGHT / 2 - inter->w_s, &pos);
  my_pixel_put_img(shape, img, i, pos);
  my_fill_cord(inter->w_s * 2, 1, 0x00FFD700, &shape);
  my_fill_pos(inter->col, HEIGHT / 2 - inter->w_s + 1, &pos);
  my_pixel_put_img(shape, img, i, pos);
  my_fill_cord(1, 1, 0x00000000, &shape);
  my_fill_pos(inter->col, HEIGHT / 2 + inter->w_s, &pos);
  my_pixel_put_img(shape, img, i, pos);
  my_cross(img, i);
}

void		my_door(t_inter *inter, t_img *img, t_init *i)
{
  t_pos		pos;
  t_cord	shape;

  inter->w_s = HEIGHT / (2 * inter->k);
  my_fill_cord(1, 1, 0x00000000, &shape);
  my_fill_pos(inter->col, HEIGHT / 2 - inter->w_s, &pos);
  my_pixel_put_img(shape, img, i, pos);
  my_fill_cord(inter->w_s * 2, 1, 0x00DEB887, &shape);
  my_fill_pos(inter->col, HEIGHT / 2 - inter->w_s + 1, &pos);
  my_pixel_put_img(shape, img, i, pos);
  my_fill_cord(1, 1, 0x00000000, &shape);
  my_fill_pos(inter->col, HEIGHT / 2 + inter->w_s, &pos);
  my_pixel_put_img(shape, img, i, pos);
  my_cross(img, i);
}
