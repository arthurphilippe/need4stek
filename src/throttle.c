/*
** throttle.c for n4s in /home/arthur/Projects/CPE_2016_n4s/src/
**
** Made by Arthur Philippe
** Login   <arthur.philippe@epitech.eu>
**
** Started on  Fri Jun  2 10:52:00 2017 Arthur Philippe
** Last update Fri Jun  2 11:13:40 2017 Arthur Philippe
*/

float	throttle(float *lidar)
{
  float	throttle_coef;

  throttle_coef = 0.1;
  if (lidar[15] > 2000)
    throttle_coef = 1.0;
  else if (lidar[15] > 1500)
    throttle_coef = 0.8;
  else if (lidar[15] > 1000)
    throttle_coef = 0.5;
  else if (lidar[15] > 600)
    throttle_coef = 0.4;
  else if (lidar[15] > 400)
    throttle_coef = 0.3;
  else if (lidar[15] > 200)
    throttle_coef = 0.2;
  return (throttle_coef);
}
