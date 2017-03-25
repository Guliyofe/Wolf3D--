/*
** my_getnbr.c for my_getnbr in /home/blonde_f/rendu/Piscine-C-Jour_04
** 
** Made by Guillaume Blondeau
** Login   <blonde_f@epitech.net>
** 
** Started on  Thu Oct  3 11:34:10 2013 Guillaume Blondeau
** Last update Sun Jan  5 10:48:42 2014 Guillaume Blondeau
*/

int	verif_n(char *str)
{
  int	i;

  i = 0;
  while (str[i] < 48 || str[i] > 57)
    i++;
  if (str[i - 1] == '-')
    return (1);
  if (str[i - 1] == '+')
    return (0);
  return (7);
}

int	my_getnbr(char *str)
{
  int	nb;
  int	i;

  nb = 0;
  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] >= 48 && str[i] <= 57)
	nb = (nb * 10) + (str[i] - 48);
      i++;
      if ((str[i] < 48 || str[i] > 57) && str[i] != 45 && str[i] != 43)
	{
          if (verif_n(str) == 1)
            nb = nb * -1;
          return (nb);
        }
    }
  if (verif_n(str) == 1)
    nb = nb * -1;
  return (nb);
}
