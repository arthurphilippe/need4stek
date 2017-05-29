/*
** n4s_cmd.c for n4s in /home/arthur/Projects/CPE_2016_n4s/src/
**
** Made by Arthur Philippe
** Login   <arthur.philippe@epitech.eu>
**
** Started on  Fri May 12 13:27:20 2017 Arthur Philippe
** Last update Mon May 29 12:23:29 2017 Arthur Philippe
*/

#include <stdio.h>
#include "defines.h"
#include "n4s_cmd.h"
#include "str.h"

t_cmd_n4s g_cmds[] =
  {
    {CMD_START, VAL_START, ASW_START},
    {CMD_STOP, VAL_STOP, ASW_STOP},
    {CMD_FWD, VAL_FWD, ASW_FWD},
    {CMD_BWD, VAL_BWD, ASW_BWD},
    {CMD_STEER, VAL_STEER, ASW_STEER},
    {CMD_GET_LIDAR, VAL_GET_LIDAR, ASW_GET_LIDAR},
    {CMD_GET_SPEED, VAL_GET_SPEED, ASW_GET_SPEED},
    {CMD_GET_STEER, VAL_GET_STEER, ASW_GET_STEER},
    {CMD_WAIT, VAL_WAIT, ASW_WAIT},
    {CMD_GET_MSPEED, VAL_GET_MSPEED, ASW_GET_MSPEED},
    {CMD_GET_LSPEED, VAL_GET_LSPEED, ASW_GET_LSPEED},
    {CMD_GET_SIM_T, VAL_GET_SIM_T, ASW_GET_SIM_T},
    {NULL, 0, 0},
  };

int	get_val_type(char *cmd)
{
  int	i;

  i = 0;
  while (g_cmds[i].cmd_line)
    {
      if (match(g_cmds[i].cmd_line, cmd))
	return (g_cmds[i].f_type);
      i += 1;
    }
  return (ERR);
}

void	send_cmd(char *cmd, float arg_fl, int arg_int)
{
  int	type_f;

  type_f = get_val_type(cmd);
  dprintf(1, "%s", cmd);
  dprintf(2, "sent: %s", cmd);
  if (type_f == TYPE_U_FLOAT || type_f == TYPE_S_FLOAT)
    {
      dprintf(1, ":%f", arg_fl);
      dprintf(2, ":%f", arg_fl);
    }
  else if (type_f == TYPE_INT)
    {
      dprintf(1, ":%d", arg_int);
      dprintf(2, ":%d", arg_int);
    }
  dprintf(1, "\n");
  dprintf(2, "\n");
}
