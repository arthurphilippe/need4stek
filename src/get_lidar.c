/*
** get_lidar.c for n4s in /home/arthur/Projects/CPE_2016_n4s/src/
**
** Made by Arthur Philippe
** Login   <arthur.philippe@epitech.eu>
**
** Started on  Fri May 12 14:24:00 2017 Arthur Philippe
** Last update Mon May 29 12:53:38 2017 Arthur Philippe
*/

#include <stdlib.h>
#include <stdio.h>
#include "defines.h"
#include "ai.h"
#include "acp.h"
#include "str.h"
#include "n4s_cmd.h"
#include "fcts.h"

int	is_a_float(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      if (str[i] < '0' && str[i] > '9' && str[i] != '.')
	return (0);
      i += 1;
    }
  return (1);
}

void	display_float_tab(float *tab)
{
  int	i;

  i = 0;
  while (tab && *tab != -1.00)
    {
      dprintf(2, "#%d = %f\n", i, *tab);
      tab += 1;
      i += 1;
    }
}

float	*get_laser_tab(char **asw_tab)
{
  float	*laser_tab;
  float	tmp;
  int	idx;

  if (!(laser_tab = ub_malloc(sizeof(float) * 42)))
    return (NULL);
  idx = 0;
  asw_tab += 3;
  while (*asw_tab && idx < 32)
    {
      if (is_a_float(*asw_tab))
	{
	  tmp = (float) atof(*asw_tab);
          laser_tab[idx++] = tmp;
	}
      asw_tab += 1;
    }
  laser_tab[idx] = -1;
  return (laser_tab);
}

float	*get_lidar(void)
{
  char	*asw;
  char	**asw_tab;
  float	*laser_tab;

  send_cmd(CMD_GET_LIDAR);
  asw = get_next_line(0);
  dprintf(2, "got: %s\n", asw);
  laser_tab = NULL;
  if (asw)
    {
      asw_tab = my_str_to_word_tab(asw);
      if (asw_tab)
	laser_tab = get_laser_tab(asw_tab);
      free_tab(asw_tab);
      free(asw);
    }
  display_float_tab(laser_tab);
  return (laser_tab);
}
