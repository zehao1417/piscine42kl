/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zetan <zetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 14:59:12 by zetan             #+#    #+#             */
/*   Updated: 2026/04/14 15:14:19 by zetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char*str);

int	main(void)
{
	char* n1;
	char* n2;
	char* n3;
	char* n4;

	n1 = "Hey Low";
	n2 = "thisoutputisone";
	n3 = "HEYLOW";
	n4 = "";
	printf("Output is 0: %i\n", ft_str_is_uppercase(n1));
	printf("Output is 0: %i\n", ft_str_is_uppercase(n2));
	printf("Output is 1: %i\n", ft_str_is_uppercase(n3));
	printf("Output is 1: %i\n", ft_str_is_uppercase(n4));
}
