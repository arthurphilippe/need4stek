/*
** steer.h for n4s in /home/arthur/Projects/CPE_2016_n4s/include/
**
** Made by Arthur Philippe
** Login   <arthur.philippe@epitech.eu>
**
** Started on  Fri Jun  2 15:53:12 2017 Arthur Philippe
** Last update Fri Jun  2 15:57:16 2017 Arthur Philippe
*/

#ifndef STEER_H_
# define STEER_H_

typedef struct	s_steer_table
{
  float		lidar_val;
  float		steer_coef;
}		t_steer_table;

# define TABLE_END -1.00

#endif /* STEER_H_ */
