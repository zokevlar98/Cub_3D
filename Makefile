NAME = cub

CC = cc

CFLAGS = -Wall -Wextra -Werror -g -fsanitize=address -I .

RM = rm -f

SRCS =	utils_pars/ft_putstr_fd.c		\
		utils_pars/ft_split.c			\


OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS)  $(NAME) -o $(OBJS)

%.o : %.c cub.h
	$(CC) $(CFLAGS) -c $< -o $@
clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : clean