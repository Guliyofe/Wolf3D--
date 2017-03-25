/*
** my_pixel_put_to_image.c for wolf3d in /home/blonde_f/Documents/lol/Sources
** 
** Made by Guillaume Blondeau
** Login   <blonde_f@epitech.net>
** 
** Started on  Wed Jan  8 10:11:39 2014 Guillaume Blondeau
** Last update Sun Jan 12 02:29:53 2014 Guillaume Blondeau
*/

#include	"my_wolf3d.h"

void		my_pixel_put_img(t_cord s, t_img *img, t_init *i, t_pos pos)
{
  int		j;
  int		x;
  int		y;

  x = pos.x;
  s.color = mlx_get_color_value(i->init, s.color);
  while (x < s.w + pos.x)
    {
      y = pos.y;
      while (y < s.h + pos.y)
	{
	  j = (img->s_l * y) + (x * (img->bpp / 8));
	  img->data[j] = s.color;
	  img->data[j + 1] = s.color >> 8;
	  img->data[j + 2] = s.color >> 16;
	  img->data[j + 3] = s.color >> 24;
	  y++;
	}
      x++;
    }
}
