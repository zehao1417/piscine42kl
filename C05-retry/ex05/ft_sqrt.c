/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zetan <zetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 17:03:46 by zetan             #+#    #+#             */
/*   Updated: 2026/04/22 14:52:58 by zetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	root;
	int	num;

	root = 0;
	num = 0;
	while (num != nb && num < nb)
	{
		root++;
		num = root * root;
	}
	if (num > nb && num != nb)
		return (0);
	return (root);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_sqrt(25));
	printf("%d\n", ft_sqrt(-5));
	printf("%d\n", ft_sqrt(0));
	printf("%d\n", ft_sqrt(-25));
	printf("%d\n", ft_sqrt(1));
}
*/
