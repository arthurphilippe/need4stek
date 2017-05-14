/*
** acp.h for lib in /home/arthur/Documents/dev/lib/include/
**
** Made by Arthur Philippe
** Login   <arthur.philippe@epitech.eu>
**
** Started on  Wed Jan 25 18:46:40 2017 Arthur Philippe
** Last update Fri May 12 14:19:16 2017 Arthur Philippe
*/

#ifndef ACP_H_
# define ACP_H_

# define TRUE		1
# define FALSE		0

int	acp_print(char *, ...);
int	my_putchar(char);
int	my_putstr(char *);
int	my_strlen(char *);
int	my_power_it(int, int);
char	*get_next_line(const int fd);

#endif /* !ACP_H_ */
