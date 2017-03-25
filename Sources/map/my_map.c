/*
** my_map.c for wolf3d in /home/blonde_f/Documents/lol/Sources
** 
** Made by Guillaume Blondeau
** Login   <blonde_f@epitech.net>
** 
** Started on  Fri Jan 10 14:14:10 2014 Guillaume Blondeau
** Last update Sun Jan 12 15:29:16 2014 Guillaume Blondeau
*/

#include	<unistd.h>
#include	<stdlib.h>
#include	<sys/stat.h>
#include	<sys/types.h>
#include	<fcntl.h>
#include	"my.h"
#include	"my_wolf3d.h"

int		my_open(int *fd, char *level)
{
  if ((*fd = open(level, O_RDONLY)) == -1)
    {
      my_putstr("Open Error\n");
      return (-1);
    }
  return (0);
}

int		my_close(int *fd)
{
  if (close(*fd) == -1)
    {
      my_putstr("Close Error\n");
      return (-1);
    }
  return (0);
}

char		**my_read_map(char **map, char *level)
{
  int		fd;
  char		*buff;

  if ((buff = malloc(1000 * sizeof(char))) == NULL)
    {
      my_putstr("Malloc Error\n");
      return (NULL);
    }
  if (my_open(&fd, level) == -1)
    return (NULL);
  if (read(fd, buff, 1000) == -1)
    {
      my_putstr("Read Error");
      return (NULL);
    }
  if (my_close(&fd) == -1)
    return (NULL);
  if ((map = my_str_to_wordtab(buff, '\n')) == NULL)
    {
      my_putstr("Malloc Error\n");
      return (NULL);
    }
  return (map);
}
