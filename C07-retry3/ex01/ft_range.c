/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zetan <zetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 21:25:04 by zetan             #+#    #+#             */
/*   Updated: 2026/04/28 15:38:04 by zetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	n;
	int	count;
	int	*num;

	if (min >= max)
		return (NULL);
	n = min;
	count = 0;
	while (n++ < max)
		count++;
	num = malloc(count * sizeof(int));
	if (!num)
		return (NULL);
	count = 0;
	n = min;
	while (n < max)
	{
		num[count] = n;
		n++;
		count++;
	}
	return (num);
}
/*
#include <stdio.h>

int	main(void)
{
	int	n;
	int	*num;

	num = ft_range(1, 20);
	n = 0;
	while (n < 20)
	{
		printf("%i\n", num[n]);
		n++;
	}
}
*/
