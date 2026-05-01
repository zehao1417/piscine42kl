/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zetan <zetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 19:29:39 by zetan             #+#    #+#             */
/*   Updated: 2026/04/20 16:44:56 by zetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char*str, char*to_find)
{
	int		n;
	int		i;

	n = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[n] != '\0')
	{
		i = 0;
		while (str[n + i] == to_find[i] && to_find[i] != '\0')
			i++;
		if (to_find[i] == '\0')
			return (&str[i]);
		n++;
	}
	return (NULL);
}
