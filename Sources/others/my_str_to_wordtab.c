/*
** my_str_to_wordtab.c for my_str_to_wordtab in /home/blonde_f
** 
** Made by Guillaume Blondeau
** Login   <blonde_f@epitech.net>
** 
** Started on  Mon Dec 23 09:43:05 2013 Guillaume Blondeau
** Last update Fri Jan 10 18:04:01 2014 Guillaume Blondeau
*/

#include	<stdlib.h>
#include	"my_wolf3d.h"
#include	"my.h"

int		my_count_words(char *str, char delim)
{
  int		i;
  int		words;

  i = 0;
  words = 0;
  while (str[i] != '\0')
    {
      if (str[i] == delim)
	words++;
      i++;
    }
  words++;
  return (words);
}

int		my_look_end_word(char *str, int *i, char delim)
{
  int		chars;

  chars = 0;
  while (str[*i] != delim && str[*i] != '\0')
    {
      *i = *i + 1;
      chars++;
    }
  return (chars);
}

char		**my_str_to_wordtab(char *str, char delim)
{
  int		i;
  int		j;
  char		**wordtab;
  int		words;

  i = 0;
  j = 0;
  words = my_count_words(str, delim);
  if ((wordtab = malloc((words + 1) * sizeof(char *))) == NULL)
    return (NULL);
  while (words > 0 && str[i] != '\0')
    {
      if (str[i] != delim)
	{
	  if ((wordtab[j] = my_strdup(str + i)) == NULL)
	    return (NULL);
	  wordtab[j][my_look_end_word(str, &i, delim)] = '\0';
	  j++;
	  words--;
	}
      i++;
    }
  wordtab[j] = NULL;
  return (wordtab);
}
