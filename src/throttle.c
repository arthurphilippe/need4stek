/*
** throttle.c for n4s in /home/arthur/Projects/CPE_2016_n4s/src/
**
** Made by Arthur Philippe
** Login   <arthur.philippe@epitech.eu>
**
** Started on  Fri Jun  2 10:52:00 2017 Arthur Philippe
** Last update Fri Jun  2 16:24:54 2017 Arthur Philippe
*/

#include "throttle.h"

static const t_throttle_table	g_table[] =
{
  {2000, 1},
  {1500, 0.8},
  {1000, 0.5},
  {600, 0.4},
  {400, 0.3},
  {200, 0.2},
  {TABLE_END, TABLE_END},
};

float	throttle(float *lidar)
{
  float	throttle_coef;
  int	i;

  throttle_coef = 0.1;
  i = 0;
  while (g_table[i].lidar_val != TABLE_END)
    {
      if (lidar[15] > g_table[i].lidar_val)
	return (g_table[i].throttle_coef);
      i += 1;
    }
  return (throttle_coef);
}
