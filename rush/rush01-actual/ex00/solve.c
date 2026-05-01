/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zetan <zetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/19 18:10:38 by zetan             #+#    #+#             */
/*   Updated: 2026/04/19 18:13:38 by zetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	visible_count(int *line);
int	check_row(int grid[4][4], int clues[4][4], int row);
int	check_col(int grid[4][4], int clues[4][4], int col);
int	check_duplicate(int grid[4][4], int row, int col, int num);

int	solve_rec(int grid[4][4], int clues[4][4], int row, int col)
{
	int	num;

	if (row == 3 && col == 4)
		return (1);
	if (col == 4)
	{
		row++;
		col = 0;
	}
	num = 1;
	while (num <= 4)
	{
		if (check_duplicate(grid, row, col, num))
		{
			grid[row][col] = num;
			if ((col == 3 && !check_row(grid, clues, row))
				|| (row == 3 && !check_col(grid, clues, col)))
				grid[row][col] = 0;
			else if (solve_rec(grid, clues, row, col + 1))
				return (1);
			grid[row][col] = 0;
		}
		num++;
	}
	return (0);
}

void	solve(int grid[4][4], int clues[4][4])
{
	solve_rec(grid, clues, 0, 0);
}
