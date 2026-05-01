/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zetan <zetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 19:24:01 by zetan             #+#    #+#             */
/*   Updated: 2026/04/15 19:28:44 by zetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char*dest, char*src, unsigned int nb);

int	main(void)
{
	char dest[50] = "Hello ninja,";
	char src[18] = " have you ate yet";

	ft_strncat(dest, src, 13);
	printf("%s", dest);
}
