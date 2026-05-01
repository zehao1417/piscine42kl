/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   line_validation.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zetan <zetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/19 18:09:43 by zetan             #+#    #+#             */
/*   Updated: 2026/04/19 18:09:46 by zetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	visible_count(int *line)
{
	int	tallest;
	int	visible;
	int	i;

	tallest = 0;
	visible = 0;
	i = 0;
	while (i < 4)
	{
		if (tallest < line[i])
		{
			tallest = line[i];
			visible++;
		}
		i++;
	}
	return (visible);
}

int	check_row(int grid[4][4], int clues[4][4], int row)
{
	int	i;
	int	temp[4];

	i = 0;
	while (i < 4)
	{
		temp[i] = grid[row][i];
		i++;
	}
	if (visible_count(temp) != clues[2][row])
		return (0);
	i = 0;
	while (i < 4)
	{
		temp[i] = grid[row][3 - i];
		i++;
	}
	if (visible_count(temp) != clues[3][row])
		return (0);
	return (1);
}

int	check_col(int grid[4][4], int clues[4][4], int col)
{
	int	i;
	int	temp[4];

	i = 0;
	while (i < 4)
	{
		temp[i] = grid[i][col];
		i++;
	}
	if (visible_count(temp) != clues[0][col])
		return (0);
	i = 0;
	while (i < 4)
	{
		temp[i] = grid[3 - i][col];
		i++;
	}
	if (visible_count(temp) != clues[1][col])
		return (0);
	return (1);
}

int	check_duplicate(int grid[4][4], int row, int col, int num)
{
	int	check_row;
	int	check_col;

	check_row = 0;
	check_col = 0;
	while (check_col < 4)
	{
		if (grid[row][check_col] == num)
			return (0);
		check_col++;
	}
	while (check_row < 4)
	{
		if (grid[check_row][col] == num)
			return (0);
		check_row++;
	}
	return (1);
}
