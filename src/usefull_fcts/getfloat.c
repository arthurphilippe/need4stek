/*
** getfloat.c for get_float in /home/cheap/Code_Arena/Delivery/CPE/CPE_2016_n4s/src/usefull_fcts
** 
** Made by Cheap
** Login   <anthony.tram@epitech.eu>
** 
** Started on  Wed May  3 12:32:30 2017 Cheap
** Last update Wed May  3 12:48:20 2017 Cheap
*/

#include "defines.h"
#include "n4s.h"
#include "acp.h"

float		get_float(char *str)
{
  int		k;
  float		div;
  float		nbr;

  div = 10;
  if (my_strlen(str) < 3)
    return (FAILURE);
  nbr = 0;
  k = 2;
  while (str[k] != '\0')
    {
      nbr = str[k] - '0' + nbr;
      if (str[k + 1] != '\0')
	{
	  div = div * 10;
	  nbr = nbr * 10;
	}
      k += 1;
    }
  return (nbr / div);
}
