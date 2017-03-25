/*
** my_wolf.c for wolf3d in /home/blonde_f/rendu/MUL_2013_wolf3d/Sources
** 
** Made by Guillaume Blondeau
** Login   <blonde_f@epitech.net>
** 
** Started on  Tue Jan  7 09:55:56 2014 Guillaume Blondeau
** Last update Sun Jan 12 15:49:17 2014 Guillaume Blondeau
*/

#include	<stdlib.h>
#include	"my_wolf3d.h"
#include	"my.h"

void		my_gere_key(t_init *init, t_img *img, t_player *p, t_key *key)
{
  key->init = init;
  key->img = img;
  key->player = p;
}

int		my_wolf(char *opt)
{
  t_init	init;
  t_img		img;
  t_player	player;
  t_key		key;

  if ((init.init = mlx_init()) == NULL)
    return (-1);
  if ((init.win = mlx_new_window(init.init, WIDTH, HEIGHT, "wolf")) == NULL)
    return (-1);
  init.opt = opt;
  if ((img.img = mlx_new_image(init.init, WIDTH, HEIGHT)) == NULL)
    return (-1);
  img.data = mlx_get_data_addr(img.img, &img.bpp, &img.s_l, &img.endian);
  if (my_init_player(&player, "level_love") == -1)
    return (-1);
  if (my_init_fond(&init, &img, &player) == -1)
    return (-1);
  my_gere_key(&init, &img, &player, &key);
  mlx_do_key_autorepeaton(init.init);
  mlx_hook(init.win, 2, (1L>>0), key_hook, &key);
  mlx_expose_hook(init.win, expose_hook, &key);
  mlx_loop(init.init);
  return (0);
}
