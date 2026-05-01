/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zetan <zetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 16:17:52 by zetan             #+#    #+#             */
/*   Updated: 2026/04/14 16:23:00 by zetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char*str);

int	main(void)
{
	char	n1[14] = "HeLL0, NiNJa!";

	printf("The original output is: %s\n", n1);
	printf("Now it is: %s", ft_strlowcase(n1));
}
