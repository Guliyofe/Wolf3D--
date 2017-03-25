/*
** my_streq.c for minishell1 in /home/blonde_f/rendu/PSU_2013_minishell1/Sources
** 
** Made by Guillaume Blondeau
** Login   <blonde_f@epitech.net>
** 
** Started on  Mon Dec 23 16:04:44 2013 Guillaume Blondeau
** Last update Sun Jan 12 01:44:41 2014 Guillaume Blondeau
*/

int		my_streq(char *str1, char *str2)
{
  int		i;
  int		check;

  i = 0;
  check = 1;
  while (str1[i++] != '\0')
    {
      if (str1[i] == '\n')
	str1[i] = '\0';
    }
  i = 0;
  while (str1[i] != '\0' || str2[i] != '\0')
    {
      if (str1[i] != str2[i])
	check = 0;
      i++;
    }
  return (check);
}
