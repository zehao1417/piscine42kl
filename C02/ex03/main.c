/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zetan <zetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 00:24:40 by zetan             #+#    #+#             */
/*   Updated: 2026/04/14 01:13:21 by zetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char*str);

int	main()
{
	char*	n;
	char*	n1;

	n = "onlywords";
	n1 = "123456789";

	printf("Output should be 0: %d\n", ft_str_is_numeric(n));
	printf("Output should be 1: %d", ft_str_is_numeric(n1));
}
