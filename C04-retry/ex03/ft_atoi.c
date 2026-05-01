/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zetan <zetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 16:59:59 by zetan             #+#    #+#             */
/*   Updated: 2026/04/18 14:34:48 by zetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_space(char c)
{
	if (c == ' ' || c == '\n' || c == '\v')
		return (1);
	else if (c == '\t' || c == '\r' || c == '\f')
		return (1);
	return (0);
}

int	ft_atoi(char*str)
{
	int	num;
	int	n;
	int	x;

	n = 0;
	x = 0;
	num = 1;
	while (is_space(str[n])
		|| (!(str[n] == '-' || str[n] == '+')
			&& !(str[n] >= '0' && str[n] <= '9')))
		n++;
	while (str[n] == '-' || str[n] == '+')
	{
		if (str[n] == '-')
			num *= -1;
		n++;
	}
	while (str[n] >= '0' && str[n] <= '9')
	{
		x = x * 10 + (str[n] - '0');
		n++;
	}
	return (num * x);
}
