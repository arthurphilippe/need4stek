/*
** n4s_asw.c for n4s in /home/arthur/Projects/CPE_2016_n4s/src/
**
** Made by Arthur Philippe
** Login   <arthur.philippe@epitech.eu>
**
** Started on  Mon May 29 13:07:59 2017 Arthur Philippe
** Last update Fri Jun  2 11:52:08 2017 Arthur Philippe
*/

#include <stdlib.h>
#include <stdio.h>
#include "ai.h"
#include "defines.h"
#include "n4s_cmd.h"
#include "str.h"
#include "acp.h"

int	get_asw_type(char *cmd)
{
  int	i;

  i = 0;
  while (g_cmds[i].cmd_line)
    {
      if (match(g_cmds[i].cmd_line, cmd))
	return (g_cmds[i].f_asw);
      i += 1;
    }
  return (ERR);
}

int	count_tab_entries(char **tab)
{
  int	i;

  i = 0;
  if (!tab)
    return (0);
  while (tab[i])
    {
      i += 1;
    }
  return (i);
}

int	fill_asw_vals(char *asw_str, t_cmd_outp *asw, int type_f_asw)
{
  char	**asw_tab;
  int	size;

  if (!(asw_tab = my_str_to_word_tab(asw_str)))
    return (ERR);
  size = count_tab_entries(asw_tab);
  asw->ret_code = atoi(asw_tab[0]);
  if (type_f_asw == 1)
    {
      free_tab(asw_tab);
      return (0);
    }
  else if (type_f_asw == 2 && size >= 36)
    asw->lidar = get_laser_tab(asw_tab);
  else if (type_f_asw == 3)
    asw->float_ret = atof(asw_tab[3]);
  else
    {
      free_tab(asw_tab);
      return (ERR);
    }
  free_tab(asw_tab);
  return (0);
}

t_cmd_outp	*get_asw(char *cmd)
{
  t_cmd_outp	*asw;
  int		type_f_asw;
  char		*asw_str;

  if (!(asw_str = get_next_line(0)))
    return (NULL);
  dprintf(2, "got: %s\n------------------------------\n", asw_str);
  if (match(asw_str, "*KO*") || match(asw_str, "*Track Cleared*")
      || (type_f_asw = get_asw_type(cmd)) == ERR
      || !(asw = ub_malloc(sizeof(t_cmd_outp))))
    {
      free(asw_str);
      return (NULL);
    }
  fill_asw_vals(asw_str, asw, type_f_asw);
  free(asw_str);
  return (asw);
}
