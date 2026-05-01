/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zetan <zetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/11 01:34:12 by zetan             #+#    #+#             */
/*   Updated: 2026/04/11 23:29:42 by zetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_spacefill(char type, int x)
{
	int	col;

	col = 2;
	while (x > col)
	{
		if (type == 'F' || type == 'L')
			ft_putchar('B');
		else if (type == 'M')
			ft_putchar(' ');
		col++;
	}
	if (type == 'F' && col == x)
		ft_putchar('C');
	else if (type == 'L' && col == x)
		ft_putchar('A');
	else
		ft_putchar('B');
}

void	ft_rowfill(char type, int x)
{
	if (type == 'M')
		ft_putchar('B');
	else if (type == 'F')
		ft_putchar('A');
	else if (type == 'L')
		ft_putchar('C');
	if (x > 1)
		ft_spacefill(type, x);
}

void	rush(int x, int y)
{
	int	row;
	int	col;

	if (x > 0 && y > 0)
	{
		row = 1;
		col = 1;
		while (y >= row)
		{
			if (row == 1)
				ft_rowfill('F', x);
			else if (row == y)
				ft_rowfill('L', x);
			else
				ft_rowfill('M', x);
			row++;
			ft_putchar('\n');
		}
	}
	else
	{
		return ;
	}
}
