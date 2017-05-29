/*
** ai_core.c for n4s in /home/arthur/Projects/CPE_2016_n4s/src/usefull_fcts/
**
** Made by Arthur Philippe
** Login   <arthur.philippe@epitech.eu>
**
** Started on  Fri May 12 14:20:28 2017 Arthur Philippe
** Last update Mon May 29 14:35:07 2017 Arthur Philippe
*/

#include <stdlib.h>
#include <stdio.h>
#include "defines.h"
#include "ai.h"
#include "acp.h"
#include "n4s_cmd.h"
#include "fcts.h"

void	display_tab(char **tab)
{
  int	i;

  i = 0;
  while (tab[i])
    {
      dprintf(2, "%d: %s\n", i, tab[i]);
      i += 1;
    }
}

int		ai(void)
{
  t_cmd_outp	*asw;
  int		run;

  run = 1;
  while (run)
    {
      asw = send_cmd(CMD_GET_LIDAR, 0.0, 0);
      display_float_tab(asw->lidar);
      run = 0;
    }
  return (SUCCESS);
}
