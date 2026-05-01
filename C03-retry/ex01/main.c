/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zetan <zetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 15:44:32 by zetan             #+#    #+#             */
/*   Updated: 2026/04/20 14:25:58 by zetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char*s1, char*s2, unsigned int n);

int	main(void)
{
	unsigned int	n;
	char	n1[14] = "Hello Ninja!";
	char	n2[] = "testing testing";

	n = 10;
	printf("s1: %s\ns2: %s\nThe output is: %i", n1, n2, ft_strncmp(n1, n2, n));
}
