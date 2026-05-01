/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zetan <zetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 17:12:55 by zetan             #+#    #+#             */
/*   Updated: 2026/04/29 19:39:32 by zetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
		n++;
	return (n);
}

char	*ft_strdup(char *str)
{
	int		n;
	char	*array_str;

	n = 0;
	array_str = malloc(sizeof(char) * (ft_strlen(str) + 1));
	while (str[n] != '\0')
	{
		array_str[n] = str[n];
		n++;
	}
	array_str[n] = '\0';
	return (array_str);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					n;
	struct s_stock_str	*array;

	array = malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (!array)
		return (NULL);
	n = 0;
	while (n < ac)
	{
		array[n].size = ft_strlen(av[n]);
		array[n].str = av[n];
		array[n].copy = ft_strdup(av[n]);
		n++;
	}
	array[n].str = 0;
	return (array);
}
