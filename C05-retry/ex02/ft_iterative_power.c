/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zetan <zetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 01:19:11 by zetan             #+#    #+#             */
/*   Updated: 2026/04/22 14:51:34 by zetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	out;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	out = nb;
	while (power > 1)
	{
		out = out * nb;
		power--;
	}
	return (out);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%i\n", ft_iterative_power(4, 3));
	printf("%i\n", ft_iterative_power(1, 3));
	printf("%i\n", ft_iterative_power(5, -2));
	printf("%i\n", ft_iterative_power(1, 1));
	printf("%i\n", ft_iterative_power(0, 1));
	printf("%i\n", ft_iterative_power(0, 0));
}
*/
