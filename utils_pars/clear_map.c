/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqouri <zqouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 00:01:34 by zqouri            #+#    #+#             */
/*   Updated: 2024/12/23 00:01:34 by zqouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub.h"

void	clear_map(char *error, t_map *data)
{
	if (error)
		ft_putstr_fd(error, 2);
	if (data)
	{
		if (data->line)
			free(data->line);
		if (data->map)
			ft_free(data->map);
	}
	exit(1);
}
