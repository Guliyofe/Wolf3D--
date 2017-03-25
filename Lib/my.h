/*
** my.h for my in /home/blonde_f/rendu/Piscine-C-include
** 
** Made by Guillaume Blondeau
** Login   <blonde_f@epitech.net>
** 
** Started on  Thu Oct 10 14:29:05 2013 Guillaume Blondeau
** Last update Mon Jan 27 13:10:59 2014 Guillaume BLONDEAU
*/

#ifndef		MY_H_
# define	MY_H_

int		my_putchar(char c);
void		my_put_nbr(int nb);
void		my_put_uint(unsigned int nb);
void		my_putstr(char *str);
int		my_strlen(char *str);
int		my_getnbr(char *str);
int		my_printf(char *str, ...);
int		my_put_nbrbase(int nb, char *base);
int		my_put_unbrbase(unsigned int nb, char *base);
void		my_put_nistr(char *str);

#endif
