/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zetan <zetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 15:23:58 by zetan             #+#    #+#             */
/*   Updated: 2026/04/16 13:32:06 by zetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char*s1, char*s2);

int	main(void)
{
	char	n1[14] = "Hello, Ninja!";
	char	n2[14] = "Hello, Ninj!";

	printf("n1: %s\nn2: %s\nThe output is: %i", n1, n2, ft_strcmp(n1, n2));
}
