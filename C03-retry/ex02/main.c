/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zetan <zetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 19:11:36 by zetan             #+#    #+#             */
/*   Updated: 2026/04/15 19:14:52 by zetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char*dest, char*src);

int	main(void)
{
	char dest[50] = "Hello ninja";
	char src[21] = ", have you ate yet?";
	
	ft_strcat(dest, src);
	printf("%s", dest);
}
