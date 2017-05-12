##
## Makefile for misc in /home/arthur/delivery/.misc
##
## Made by Arthur Philippe
## Login   <arthur@epitech.net>
##
## Started on  Mon Nov  7 11:39:45 2016 Arthur Philippe
## Last update Fri May 12 13:18:44 2017 Arthur Philippe
##

CC	=	gcc

RM	=	rm -f

NAME	=	ai

SRCS	=	src/main.c				\
		src/usefull_fcts/getfloat.c		\
		src/usefull_fcts/match.c		\
		src/usefull_fcts/str_fcts.c		\
		src/usefull_fcts/str.c			\
		src/usefull_fcts/str_to_word_tab.c	\
		src/usefull_fcts/get_next_line.c	\

OBJS	=	$(SRCS:.c=.o)

CFLAGS	=	-Wextra -Wall

# CFLAGS	=	-ggdb
##CFLAGS	+=	-Werror

CFLAGS	+=	-I include/

LDFLAGS	=	-L./lib/acp -lacp -lm

all: $(NAME)

$(NAME): $(OBJS)
	$(MAKE) -C lib/acp
	$(CC) $(OBJS) -o $(NAME) $(LDFLAGS)
	cp $(NAME) n4s_package/.

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
