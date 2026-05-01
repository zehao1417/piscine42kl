/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zetan <zetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 17:43:07 by zetan             #+#    #+#             */
/*   Updated: 2026/04/27 14:11:43 by zetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*out;
	int		n;

	n = 0;
	while (src[n] != '\0')
		n++;
	out = malloc((n + 1) * sizeof(char));
	if (!out)
		return (NULL);
	n = 0;
	while (src[n] != '\0')
	{
		out[n] = src[n];
		n++;
	}
	out[n] = '\0';
	return (out);
}
/*
#include <stdio.h>
int	main(void)
{
	ft_strdup("Hello");
	printf("%s\n", ft_strdup("Hello"));
}
*/
