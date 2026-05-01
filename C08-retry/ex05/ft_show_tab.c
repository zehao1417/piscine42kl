/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zetan <zetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 19:12:35 by zetan             #+#    #+#             */
/*   Updated: 2026/04/27 23:23:20 by zetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);

void	ft_putnbr(int nb)
{
	int	n;

	n = 0;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	else if (nb >= 10)
		ft_putnbr(nb / 10);
	else if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
		ft_putnbr(nb / 10);
	}
	nb = '0' + (nb % 10);
	write (1, &nb, 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;
	int	n;

	i = 0;
	while (par[i].str)
	{
		n = 0;
		while (par[i].str[n])
			write(1, &par[i].str[n++], 1);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		n = 0;
		while (par[i].copy[n])
			write(1, &par[i].copy[n++], 1);
		write(1, "\n", 1);
		i++;
	}
}
/*
int main(int argc, char **argv)
{
	struct s_stock_str *my_tab;

	my_tab = ft_strs_to_tab(argc, argv);
	ft_show_tab(my_tab);
}
*/
