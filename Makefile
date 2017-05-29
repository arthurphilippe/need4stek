##
## Makefile for misc in /home/arthur/delivery/.misc
##
## Made by Arthur Philippe
## Login   <arthur@epitech.net>
##
## Started on  Mon Nov  7 11:39:45 2016 Arthur Philippe
## Last update Mon May 29 12:26:38 2017 Arthur Philippe
##

CC	=	gcc

RM	=	rm -f

NAME	=	ai

LIBACP	=	lib/acp/libacp.a

SRCS	=	src/main.c				\
		src/ai_core.c				\
		src/n4s_cmd.c				\
		src/get_lidar.c				\
		src/usefull_fcts/getfloat.c		\
		src/usefull_fcts/match.c		\
		src/usefull_fcts/str_fcts.c		\
		src/usefull_fcts/str.c			\
		src/usefull_fcts/str_to_word_tab.c	\

OBJS	=	$(SRCS:.c=.o)

CFLAGS	=	-Wextra -Wall

##CFLAGS	+=	-Werror

CFLAGS	+=	-I include/

LDFLAGS	=	-L./lib/acp -lacp -lm

ifndef VERBOSE
 MAKEFLAGS	+=	--no-print-directory
endif

GREEN	=	\033[0;32m

RESET	=	\033[0m

all: $(NAME)

$(LIBACP):
	@$(MAKE) -C lib/acp/

$(NAME): $(LIBACP) $(OBJS)
	@$(CC) $(OBJS) -o $(NAME) $(LDFLAGS)
	@echo -e "\n$(GREEN)$(NAME) built$(RESET)\n--------------------"

clean:
	@$(MAKE) fclean -C lib/acp
	@echo -en "cleaned " ; $(RM) $(OBJS) | wc -l | tr -d '\n'
	@echo -e " of $(NAME)'s object files"

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re make_lacp
