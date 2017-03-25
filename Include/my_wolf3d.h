/*
** my_wolf3d.h for wolf3d in /home/blonde_f/rendu/MUL_2013_wolf3d/Include
** 
** Made by Guillaume Blondeau
** Login   <blonde_f@epitech.net>
** 
** Started on  Tue Jan  7 09:51:17 2014 Guillaume Blondeau
** Last update Sun Jan 12 16:15:31 2014 Guillaume Blondeau
*/

#ifndef		MY_WOLF3D_H_
# define	MY_WOLF3D_H_

# define	HEIGHT		720
# define	WIDTH		1280
# define	PRECISION	0.01
# define	SPEED		2
# define	ANGLE		0.1
# define	VIEW		4

# include	"mlx.h"
# include	"my_struct.h"

/*
** main.c
*/

int		main(int ac, char **av);

/*
** wolf.c
*/

int		my_wolf(char *opt);

/*
** hook.c
*/
int		key_hook(int keycode, t_key *key);
int		expose_hook(t_key *key);

/*
** my_pixel_put_to_image.c
*/

void		my_pixel_put_img(t_cord s, t_img *img, t_init *i, t_pos pos);

/*
** fond.c
*/

int		my_init_fond(t_init *init, t_img *fond, t_player *player);

/*
** my_fill.c
*/

void		my_fill_cord(int h, int w, int color, t_cord *shape);
void		my_fill_pos(int x, int y, t_pos *pos);
void		my_fill_vec(t_vec *vec);

/*
** my_aff_img.c
*/

void		my_aff_img(t_init *init, t_img *img);

/*
** my_wall.c
*/

int		my_wall(t_init *init, t_img *img, t_player *player);
void		my_init_var(t_inter *inter, t_player *player);
void		my_put_wall(t_inter *inter, t_img *img, t_init *i, t_vec *vec);

/*
** my_map.c
*/

int		my_open(int *fd, char *level);
int		my_close(int *fd);
char		**my_read_map(char **map, char *level);

/*
** my_str_to_wordtab.c
*/

char		**my_str_to_wordtab(char *str, char delim);

/*
** my_strdup.c
*/

char		*my_strdup(char *src);

/*
** my_player.c
*/

void		my_player(t_player *player, int x, t_vec *vec);
int		my_init_player(t_player *player, char *level);

/*
** my_move.c
*/

int		my_collid_f(t_player *player, double vx, double vy);
int		my_collid_b(t_player *player, double vx, double vy);
void		my_forward(t_player *player);
void		my_backward(t_player *player);

/*
** my_streq.c
*/

int		my_streq(char *str1, char *str2);

/*
** my_view.c
*/

void		my_view_up(t_player *player);
void		my_view_down(t_player *player);

/*
** my_bonus.c
*/

void		my_cross(t_img *img, t_init *init);
void		my_spe(t_inter *inter, t_img *img, t_init *i);
void		my_door(t_inter *inter, t_img *img, t_init *i);
void		my_end(t_inter *inter, t_img *img, t_init *i);

#endif
