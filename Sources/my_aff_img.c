/*
** my_aff_img.c for wolf3d in /home/blonde_f/Documents/lol/Sources
** 
** Made by Guillaume Blondeau
** Login   <blonde_f@epitech.net>
** 
** Started on  Fri Jan 10 13:15:33 2014 Guillaume Blondeau
** Last update Sun Jan 12 00:19:47 2014 Guillaume Blondeau
*/

#include	"my_wolf3d.h"

void		my_aff_img(t_init *init, t_img *img)
{
  mlx_put_image_to_window(init->init, init->win, img->img, 0, 0);
}
