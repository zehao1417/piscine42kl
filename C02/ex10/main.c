/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zetan <zetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 18:11:17 by zetan             #+#    #+#             */
/*   Updated: 2026/04/14 21:19:31 by zetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char*dest, char*src, unsigned int size);

int	main(void)
{
	unsigned int	size;
	char	src[14] = "Hello, ninja!";
	char	dest[14];
	
	size = 10;
	printf("The return is going to be the array size which is 14: %i", ft_strlcpy(dest, src, size));
}
