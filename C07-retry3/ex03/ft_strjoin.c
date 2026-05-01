/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zetan <zetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 17:39:07 by zetan             #+#    #+#             */
/*   Updated: 2026/04/29 17:48:05 by zetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
		n++;
	return (n);
}

char	*ft_strcat(char *dest, char *src)
{
	int	n;
	int	i;

	n = 0;
	i = 0;
	while (dest[i] != '\0')
		i++;
	while (src[n] != '\0')
	{
		dest[i] = src[n];
		n++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_getlen(int size, char **strs, char *sep)
{
	int	len;
	int	n;
	int	count;

	len = 0;
	n = 0;
	count = ft_strlen(sep) * (size - 1);
	while (n < size)
	{
		count += ft_strlen(strs[n]);
		n++;
	}
	return (count);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*total_string;
	int		n;

	if (size == 0)
	{
		total_string = malloc(1);
		total_string[0] = '\0';
		return (total_string);
	}
	total_string = malloc(sizeof(char) * (ft_getlen(size, strs, sep) + 1));
	if (!total_string)
		return (NULL);
	n = 0;
	total_string[n] = '\0';
	while (n < size)
	{
		ft_strcat(total_string, strs[n]);
		if (n < size - 1)
			ft_strcat(total_string, sep);
		n++;
	}
	return (total_string);
}
/*
#include <stdio.h>
int	main(void)
{
	int	size;
	char	*strings[] = {"hello", "hey"};
	char	*sep = "wo";
	
	size = 2;
	char	*res = ft_strjoin(size, strings, sep);
	printf("%s\n", res);
	free(res);
}
*/
