/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqouri <zqouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 22:52:27 by zqouri            #+#    #+#             */
/*   Updated: 2024/12/22 22:52:27 by zqouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "cub.h"

void	ft_putstr_fd(char *str, int fd)
{
	size_t	i;

	if (!str)
		return ;
	i = 0;
	while (i < ft_strlen(str))
	{
		write(fd, &str[i], 1);
		i++;
	}
}
