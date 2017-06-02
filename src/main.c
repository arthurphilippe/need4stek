/*
** main.c for n4s in /home/arthur/Projects/CPE_2016_n4s/src/
**
** Made by Arthur Philippe
** Login   <arthur.philippe@epitech.eu>
**
** Started on  Wed May  3 10:55:23 2017 Arthur Philippe
** Last update Fri Jun  2 12:06:33 2017 Arthur Philippe
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "ai.h"
#include "acp.h"
#include "n4s_cmd.h"

int	main()
{
  free(send_cmd("START_SIMULATION", 0.0, 0));
  ai();
  free(send_cmd("STOP_SIMULATION", 0.0, 0));
  get_next_line(-2);
  return (0);
}
