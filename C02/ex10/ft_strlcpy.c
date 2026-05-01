/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zetan <zetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 17:34:39 by zetan             #+#    #+#             */
/*   Updated: 2026/04/14 22:10:13 by zetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char*dest, char*src, unsigned int size)
{
	unsigned int	i;
	int				n;

	i = 0;
	n = 0;
	while (src[n] != '\0')
		n++;
	i++;
	while (i <= size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	n++;
	return (n);
}
