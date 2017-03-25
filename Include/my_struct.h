/*
** my_struct.h for wolf3d in /home/blonde_f/Documents/lol/Include
** 
** Made by Guillaume Blondeau
** Login   <blonde_f@epitech.net>
** 
** Started on  Fri Jan 10 13:32:22 2014 Guillaume Blondeau
** Last update Sun Jan 12 15:28:19 2014 Guillaume Blondeau
*/

#ifndef		MY_STRUCT_H_
# define	MY_STRUCT_H_

/*
** Structure pour les bases de la minilibx.
*/

typedef struct	s_init
{
  void		*init;
  void		*win;
  char		*opt;
} t_init;

/*
** Structure pour une image.
*/

typedef struct	s_img
{
  void		*img;
  char		*data;
  int		bpp;
  int		s_l;
  int		endian;
} t_img;

/*
** De combien doit-on remplir notre image, et de quelle couleur.
*/

typedef struct	s_cord
{
  int		h;
  int		w;
  int		color;
} t_cord;

/*
** Où doit-on remplir l'image.
*/

typedef struct	s_pos
{
  int		x;
  int		y;
} t_pos;

/*
** Structure pour le personnage.
*/

typedef struct	s_player
{
  double	x;
  double	y;
  double       	angle;
  char		*level;
  char		**map;
} t_player;

/*
** Structure pour le vecteur vitesse.
*/

typedef struct	s_vec
{
  double	x;
  double	y;
} t_vec;

/*
** Structure pour les événements.
*/

typedef struct	s_key
{
  t_init	*init;
  t_img		*img;
  t_player	*player;
} t_key;

/*
** Structure pour les calculs d'intersections.
*/

typedef struct	s_inter
{
  int		x;
  int		y;
  double	k;
  int		w_s;
  int		col;
  t_player	*p;
} t_inter;

#endif
