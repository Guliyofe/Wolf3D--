/*
** my_strlen.c for my_strlen in /home/blonde_f/rendu/Piscine-C-Jour_04
** 
** Made by Guillaume Blondeau
** Login   <blonde_f@epitech.net>
** 
** Started on  Thu Oct  3 09:43:49 2013 Guillaume Blondeau
** Last update Fri Nov 15 08:55:13 2013 Guillaume Blondeau
*/

int		my_strlen(char *str)
{
  int		l;

  l = 0;
  while (str[l] != '\0')
    l++;
  return (l);
}
