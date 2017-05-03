/*
** str_to_word_tab.c for lemin in /home/arthur/delivery/CPE_2016_Lemin/src/
**
** Made by Arthur Philippe
** Login   <arthur.philippe@epitech.eu>
**
** Started on  Wed Apr 12 14:47:39 2017 Arthur Philippe
** Last update Wed Apr 12 14:47:45 2017 Arthur Philippe
*/

#include <stdlib.h>
#include "acp.h"

int	word_count(char *str)
{
  int	c;
  int	i;
  int	state;

  c = 0;
  i = 0;
  state = 0;
  while (str[i])
    {
      if (str[i] == ' ' || str[i] == '\t')
	state = 0;
      else if (!state)
	{
	  state = 1;
	  c += 1;
	}
      i += 1;
    }
  c += 1;
  return (c);
}

int	len_to_next_spacer(char *str)
{
  int	i;

  i = 0;
  while (str[i] && str[i] != ' ')
    i += 1;
  return (i);
}

char	**my_str_to_word_tab(char *str)
{
  char	**tab_out;
  int	it;
  int	i;
  int	i2;

  it = 0;
  i = 0;
  if (!(tab_out = malloc(sizeof(char *) * word_count(str))))
    return (NULL);
  while (str[it])
    {
      tab_out[i] = malloc(sizeof(char) * my_strlen(str) + 2);
      if (!tab_out[i])
	return (0);
      while (str[it] && (str[it] == ' ' || str[it] == '\t'))
	it += 1;
      i2 = 0;
      while (str[it] && str[it] != ' ' && str[it] != '\t')
	tab_out[i][i2++] = str[it++];
      tab_out[i][i2] = 0;
      i += 1;
    }
  tab_out[i] = 0;
  return (tab_out);
}

void	free_word_tab(char **tab)
{
  int	i;

  i = 0;
  while (tab[i])
    {
      free(tab[i]);
      i += 1;
    }
  free(tab);
}
