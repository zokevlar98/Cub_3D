/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pars.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqouri <zqouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 23:22:10 by zqouri            #+#    #+#             */
/*   Updated: 2024/12/22 23:22:10 by zqouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub.h"

void	init_map(char const *argv)
{
	t_map	*data;

	data = (t_map *)malloc(sizeof(t_map));
	if (!data)
	{
		ft_putstr_fd("ERROR malloc\n", 2);
		exit(1);
	}
	data->name_map = argv[2];
	data->line = NULL;
	data->map = NULL;
}

void	pars(t_map *map)
{
	check_file(map);
}
