/*
** ai_core.c for n4s in /home/arthur/Projects/CPE_2016_n4s/src/usefull_fcts/
**
** Made by Arthur Philippe
** Login   <arthur.philippe@epitech.eu>
**
** Started on  Fri May 12 14:20:28 2017 Arthur Philippe
** Last update Fri Jun  2 11:58:09 2017 Arthur Philippe
*/

#include <stdlib.h>
#include <stdio.h>
#include "defines.h"
#include "ai.h"
#include "acp.h"
#include "n4s_cmd.h"

int		ai(void)
{
  t_cmd_outp	*asw;
  int		run;

  run = 1;
  while (run)
    {
      asw = send_cmd(CMD_GET_LIDAR, 0.0, 0);
      if (!asw)
	run = 0;
      else
	{
	  free(send_cmd(CMD_STEER, steer(asw->lidar), 0));
	  free(send_cmd(CMD_FWD, throttle(asw->lidar), 0));
	  free(asw->lidar);
	  free(asw);
	}
    }
  return (SUCCESS);
}
