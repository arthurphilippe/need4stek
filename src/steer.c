/*
** steer.c for n4s in /home/arthur/Projects/CPE_2016_n4s/src/
**
** Made by Arthur Philippe
** Login   <arthur.philippe@epitech.eu>
**
** Started on  Fri Jun  2 10:35:12 2017 Arthur Philippe
** Last update Fri Jun  2 16:09:47 2017 Arthur Philippe
*/

#include "n4s_cmd.h"
#include "steer.h"

static const t_steer_table	g_table[] =
{
  {1500, 0.005},
  {1000, 0.05},
  {600, 0.15},
  {400, 0.25},
  {200, 0.4},
  {TABLE_END, TABLE_END},
};

float	sign_coef(float a, float b, float coef)
{
  if (a - b < 0.00)
    coef *= -1;
  return (coef);
}

float	steer(float *lidar)
{
  float	st_coef;
  int	i;

  st_coef = 0.5;
  i = 0;
  while (g_table[i].lidar_val != TABLE_END)
    {
      if (lidar[15] > g_table[i].lidar_val)
	{
	  st_coef = sign_coef(lidar[0], lidar[31],
			      g_table[i].steer_coef);
	  return (st_coef);
	}
      i += 1;
    }
  return (st_coef);
}
