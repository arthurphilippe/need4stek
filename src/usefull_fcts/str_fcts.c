/*
** str_fcts.c for QQ in src
**
** Made by Cheap
** Login   <anthony.tram@epitech.eu>
**
** Started on  Tue Mar 21 09:18:18 2017 Cheap
** Last update Fri Jun  2 11:41:56 2017 Arthur Philippe
*/

#include <stdlib.h>
#include "acp.h"
#include "defines.h"

void		fully(char *str, int size)
{
  int		k;

  k = 0;
  while (k < size)
    {
      str[k] = '\0';
      k += 1;
    }
}

int		is_alphanumerical(char *str)
{
  int		k;

  k = 0;
  while (str[k] != '\0')
    {
      if (str[k] < '0' || str[k] > '9')
	return (FAILURE);
      else if (str[k] < 'a' || str[k] > 'z')
	return (FAILURE);
      else if (str[k] < 'A' || str[k] > 'Z')
	return (FAILURE);
      k++;
    }
  return (0);
}

int		is_present(char *str, char token)
{
  int		k;

  k = 0;
  while (str[k] != '\0')
    {
      if (str[k] == token)
	return (0);
      k += 1;
    }
  return (FAILURE);
}

int		my_strcmp(char *str1, char *str2)
{
  int		k;

  k = 0;
  while (str1[k] != '\0' && str2[k] != '\0')
    {
      if (str1[k] != str2[k])
	return (FAILURE);
      k++;
    }
  return (0);
}

char		*my_strdup(char *str)
{
  int		k;
  char		*dest;

  k = my_strlen(str) + 1;
  if ((dest = malloc(sizeof(char) * k)) == NULL)
    return (NULL);
  fully(dest, k);
  k = 0;
  while (str[k] != '\0')
    {
      dest[k] = str[k];
      k++;
    }
  dest[k] = '\0';
  return (dest);
}
