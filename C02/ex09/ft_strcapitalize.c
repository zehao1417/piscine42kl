/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zetan <zetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 16:29:26 by zetan             #+#    #+#             */
/*   Updated: 2026/04/14 17:50:36 by zetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 32 && str[i] <= 47) || (str[i] >= 58 && str[i] <= 63))
		{
			i++;
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = 'A' + (str[i] - 'a');
			else
				i--;
		}
		else if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
			str[i] = 'A' + (str[i] - 'a');
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = 'a' + (str[i] - 'A');
		i++;
	}
	return (str);
}
