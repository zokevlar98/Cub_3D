/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqouri <zqouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 23:20:12 by zqouri            #+#    #+#             */
/*   Updated: 2024/12/22 23:20:12 by zqouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub.h"

int main(int argc, char const *argv[])
{
	if (argc == 3)
	{
		init_map(argv)
	}
	else
		return (printf("ERROR Invalid Argument\n"), 1);
	return 0;
}
