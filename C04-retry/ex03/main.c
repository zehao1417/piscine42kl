/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zetan <zetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 21:46:41 by zetan             #+#    #+#             */
/*   Updated: 2026/04/18 14:27:27 by zetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char*str);

int	main(void)
{
	char x[] = "-----+1413";
	char x2[] = "  -+- +13";
	char x3[] = "+-123abc-+13";
	char x4[] = "   abs\n \v hey---+13";
	
	printf("The string to convert: %s. Converted: %i\n", x, ft_atoi(x));
	printf("The string to convert: %s. Converted: %i\n", x2, ft_atoi(x2));
	printf("The string to convert: %s. Converted: %i\n", x3, ft_atoi(x3));
	printf("The string to convert: %s. Converted: %i", x4, ft_atoi(x4));

}
