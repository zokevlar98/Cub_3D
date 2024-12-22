#ifndef CUB_H
# define CUB_H

# include <unistd.h>
# include <stdlib.h>
# include <errno.h>
# include <stdio.h>


# define W 13
# define A 0
# define S 1
# define D 2
# define UP 126
# define LEFT 123
# define DOWN 125
# define RIGHT 124
# define BOUTON_CLOSE 17

char	**ft_split(char *s, char c);
void	ft_putstr_fd(char *str, int fd);

# endif