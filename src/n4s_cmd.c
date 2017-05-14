/*
** n4s_cmd.c for n4s in /home/arthur/Projects/CPE_2016_n4s/src/
**
** Made by Arthur Philippe
** Login   <arthur.philippe@epitech.eu>
**
** Started on  Fri May 12 13:27:20 2017 Arthur Philippe
** Last update Fri May 12 14:41:00 2017 Arthur Philippe
*/

#include <stdio.h>
#include "n4s_cmd.h"

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
  };

void	send_cmd(char *cmd)
{
  dprintf(1, "%s\n", cmd);
  // dprintf(2, "%s\n", cmd);
}
