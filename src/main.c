/*
** main.c for n4s in /home/arthur/Projects/CPE_2016_n4s/src/
**
** Made by Arthur Philippe
** Login   <arthur.philippe@epitech.eu>
**
** Started on  Wed May  3 10:55:23 2017 Arthur Philippe
** Last update Mon May 29 12:30:19 2017 Arthur Philippe
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
  get_next_line(0);
  ai();
  send_cmd("STOP_SIMULATION");
  return (0);
}
