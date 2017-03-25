/*
** my_strdup.c for my_strdup in /home/blonde_f/rendu/Piscine-C-Jour_08/ex_01
** 
** Made by Guillaume Blondeau
** Login   <blonde_f@epitech.net>
** 
** Started on  Thu Oct 10 10:54:36 2013 Guillaume Blondeau
** Last update Fri Jan 10 18:02:36 2014 Guillaume Blondeau
*/

#include	<stdlib.h>
#include	"my.h"

char		*my_strdup(char *src)
{
  char		*dest;
  int		i;

  i = 0;
  if ((dest = malloc((my_strlen(src) + 3) * sizeof(char))) == NULL)
    return (NULL);
  while (src[i] != '\0' && src[i] != '\n')
    {
      dest[i] = src[i];
      i++;
    }
  dest[i] = '\0';
  return (dest);
}
