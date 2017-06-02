/*
** steer.c for n4s in /home/arthur/Projects/CPE_2016_n4s/src/
**
** Made by Arthur Philippe
** Login   <arthur.philippe@epitech.eu>
**
** Started on  Fri Jun  2 10:35:12 2017 Arthur Philippe
** Last update Fri Jun  2 11:18:38 2017 Arthur Philippe
*/

#include "defines.h"
#include "n4s_cmd.h"

float	sign_coef(float a, float b, float coef)
{
  if (a - b < 0.00)
    coef *= -1;
  return (coef);
}

float	steer(float *lidar)
{
  float	steer_coef;

  steer_coef = 0.5;
  if (lidar[15] > 1500)
    steer_coef = sign_coef(lidar[0], lidar[31], 0.005);
  else if (lidar[15] > 1000)
    steer_coef = sign_coef(lidar[0], lidar[31], 0.05);
  else if (lidar[15] > 600)
    steer_coef = sign_coef(lidar[0], lidar[31], 0.15);
  else if (lidar[15] > 400)
    steer_coef = sign_coef(lidar[0], lidar[31], 0.25);
  else if (lidar[15] > 200)
    steer_coef = sign_coef(lidar[0], lidar[31], 0.4);
  return (steer_coef);
}
