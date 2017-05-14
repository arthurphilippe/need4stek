/*
** ai.h for n4s in /home/arthur/Projects/CPE_2016_n4s/include/
**
** Made by Arthur Philippe
** Login   <arthur.philippe@epitech.eu>
**
** Started on  Fri May 12 14:21:12 2017 Arthur Philippe
** Last update Fri May 12 16:23:48 2017 Arthur Philippe
*/

#ifndef AI_H_
# define AI_H_

int	ai(void);
float	*get_lidar(void);
void	send_cmd(char *cmd);
char	**my_str_to_word_tab(char *str);
void	free_tab(char **);

#endif /* !AI_H_ */
