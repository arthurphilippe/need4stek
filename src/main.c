/*
** main.c for n4s in /home/arthur/Projects/CPE_2016_n4s/src/
**
** Made by Arthur Philippe
** Login   <arthur.philippe@epitech.eu>
**
** Started on  Wed May  3 10:55:23 2017 Arthur Philippe
** Last update Fri May 12 16:24:01 2017 Arthur Philippe
*/

#include <unistd.h>
#include <stdio.h>
#include "ai.h"
#include "acp.h"
#include "n4s_cmd.h"
#include "fcts.h"

int	main()
{
  send_cmd("START_SIMULATION");
  // dprintf(2, get_next_line(0));
  // dprintf(2, "\n");
  send_cmd(CMD_GET_LIDAR);
  // dprintf(2, get_next_line(0));
  // dprintf(2, "\n");
  get_next_line(0);
  get_next_line(0);
  ai();
  send_cmd("STOP_SIMULATION");
  // dprintf(2, get_next_line(0));
  // dprintf(2, "\n");
  return (0);
}
