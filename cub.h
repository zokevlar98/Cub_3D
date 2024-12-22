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


typedef struct s_map
{
	int		fd;
	int		height;
	int		width;
	char	*name_map;
	char	*line;
	char	**map;

}	t_map;



char	**ft_split(char *s, char c);
void	ft_putstr_fd(char *str, int fd);
void	ft_free(char **tab);
void	clear_map(char *error, t_map *data);
size_t	ft_strlen(char *str);
int		ft_strncmp(const char *s1, const char *s2, size_t n);

# endif