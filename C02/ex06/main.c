/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zetan <zetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 15:27:32 by zetan             #+#    #+#             */
/*   Updated: 2026/04/14 15:44:36 by zetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char*str);

int	main(void)
{
	char	*n1;
	char	*n2;
	char	*n3;
	char	*n4;

	n1 = "Heylow";
	n2 = "hi";
	n3 = "";
	n4 = "\v";
	printf("Output is 1: %d\n", ft_str_is_printable(n1));
	printf("Output is 1: %d\n", ft_str_is_printable(n2));
	printf("Output is 1: %d\n", ft_str_is_printable(n3));
	printf("Output is 0: %d", ft_str_is_printable(n4));
}
