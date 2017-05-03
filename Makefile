##
## Makefile for misc in /home/arthur/delivery/.misc
##
## Made by Arthur Philippe
## Login   <arthur@epitech.net>
##
## Started on  Mon Nov  7 11:39:45 2016 Arthur Philippe
## Last update Wed May  3 11:24:31 2017 Arthur Philippe
##

CC	=	gcc

RM	=	rm -f

NAME	=	ai

SRCS	=	src/main.c				\

OBJS	=	$(SRCS:.c=.o)

CFLAGS	=	-Wextra -Wall

##CFLAGS	+=	-Werror

CFLAGS	+=	-I include/

LDFLAGS	=	-L./lib/acp -lacp -lm

all: $(NAME)

$(NAME): make_lacp $(OBJS)
	$(CC) $(OBJS) -o $(NAME) $(LDFLAGS)

make_lacp:
	$(MAKE) -C lib/acp

clean:
	$(RM) $(OBJS)
	$(MAKE) clean -C lib/acp

fclean: clean
	$(RM) $(NAME)
	$(MAKE) fclean -C lib/acp

re: fclean all

.PHONY: all clean fclean re make_lacp
