/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zetan <zetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 23:40:16 by zetan             #+#    #+#             */
/*   Updated: 2026/04/15 15:08:29 by zetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char*str);

int	main(void)
{
	char		*n;
	char		*n2;
	char		*n3;
	char		*n4;

	n = "blehblehbleh 1";
	n2 = " ";
	n3 = "";
	n4 = "lettersoNLy";
	printf("Output here is going to be 0: %d\n", ft_str_is_alpha(n));
	printf("Output here is going to be 0: %d\n", ft_str_is_alpha(n2));
	printf("Output here is going to be 1: %d\n", ft_str_is_alpha(n3));
	printf("Output here is going to be 1: %d\n", ft_str_is_alpha(n4));
	return (0);
}
