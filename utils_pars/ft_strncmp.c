/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqouri <zqouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 00:10:19 by zqouri            #+#    #+#             */
/*   Updated: 2024/12/23 00:10:19 by zqouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub.h"

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*p1;
	unsigned char	*p2;

	i = 0;
	if (!s1 || !s2)
		return (-1);
	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	if (s1[i] == '\n' && s2[i] == '\0')
		return (0);
	while ((p1[i] == p2[i]) && (i < n - 1) && p1[i] && p2[i])
	{
		i++;
	}
	return (p1[i] - p2[i]);
}
