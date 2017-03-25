##
## Makefile for wolf3d in /home/blonde_f/rendu/MUL_2013_wolf3d
## 
## Made by Guillaume Blondeau
## Login   <blonde_f@epitech.net>
## 
## Started on  Tue Jan  7 09:46:24 2014 Guillaume Blondeau
## Last update Sun Jan 12 12:38:00 2014 Guillaume Blondeau
##

CC	= gcc

RM	= rm -rf

NAME	= wolf3d

CFLAGS	= -W -Wall -Wextra -Werror -IInclude -I/usr/X11/include

LIB	= -lm -L/usr/X11/lib  -lX11 -lXext minilibx/libmlx.a

SCRS	= Sources/main.c			\
	  Sources/my_wolf.c			\
	  Sources/hook.c			\
	  Sources/my_pixel_put_to_image.c	\
	  Sources/my_fond.c			\
	  Sources/my_fill.c			\
	  Sources/my_aff_img.c			\
	  Sources/my_wall.c			\
	  Sources/map/my_map.c			\
	  Sources/others/my_str_to_wordtab.c	\
	  Sources/others/my_strdup.c		\
	  Sources/others/my_streq.c		\
	  Sources/others/my_putchar.c		\
	  Sources/others/my_putstr.c		\
	  Sources/others/my_strlen.c		\
	  Sources/my_player.c			\
	  Sources/my_move.c			\
	  Sources/my_bonus.c

OBJS	= $(SCRS:.c=.o)


all	: $(NAME)

$(NAME)	: $(OBJS)
	  $(CC) -o $(NAME) $(OBJS) $(LIB) $(CFLAGS)

clean	:
	  $(RM) $(OBJS)

fclean	: clean
	  $(RM) $(NAME)

re	: fclean all
