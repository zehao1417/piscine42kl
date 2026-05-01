/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zetan <zetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 15:46:35 by zetan             #+#    #+#             */
/*   Updated: 2026/04/26 22:24:13 by zetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	count;
	int	n;
	int	*arr_num;

	if (min >= max)
	{
		arr_num = NULL;
		return (0);
	}
	arr_num = malloc(sizeof(int) * (max - min));
	n = min;
	count = 0;
	if (arr_num != NULL)
	{
		while (n < max)
		{
			arr_num[count] = n;
			count++;
			n++;
		}
		*range = arr_num;
	}
	else
		return (-1);
	return (count);
}
/*
#include <stdio.h>

int	main(void)
{
	int	min;
	int	max;
	int	*range;
	int	n;

	min = 1;
	max = 20;
	n = 0;
	while (n < ft_ultimate_range(&range, min, max))
	{
		printf("%i\n", range[n]);
		n++;
	}
}
*/
