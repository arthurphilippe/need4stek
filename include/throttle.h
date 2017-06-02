/*
** throttle.h for n4s in /home/arthur/Projects/CPE_2016_n4s/include/
**
** Made by Arthur Philippe
** Login   <arthur.philippe@epitech.eu>
**
** Started on  Fri Jun  2 16:11:00 2017 Arthur Philippe
** Last update Fri Jun  2 16:32:54 2017 Arthur Philippe
*/

#ifndef THROTTLE_H_
# define THROTTLE_H_

typedef struct	s_throttle_table
{
  float		lidar_val;
  float		throttle_coef;
}		t_throttle_table;

# define TABLE_END -1.00

#endif /* !THROTTLE_H_ */
