/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zetan <zetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 21:18:25 by zetan             #+#    #+#             */
/*   Updated: 2026/04/19 17:31:01 by zetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	check_duplicate(int grid[4][4],int clues[4][4], int row, int col, int num)
{
	int	check_row;
	int	check_col;

	check_row = 0;
	check_col = 0;
	while (check_col < 4)
	{
		if (grid[row][check_col] == num)
			return 0;
		check_col++;
	}

	while (check_row < 4)
	{
		if (grid[check_row][col] == num)
			return 0;
		check_row++;
	}
	return 1;
}

void	print_grid(int grid[4][4])
{
	int	row;
	int	column;
	char	out;

	row = 0;
	while (row < 4)
	{
		column = 0;
		while (column < 4){
			out = grid[row][column] + '0';
			write(1, &out, 1);
			column++;
		}
		write(1, "\n", 1);
		row++;
	}
}

void	set_grid(int grid[][4])
{
	int	col;
	int	row;

	while (row < 4)
	{
		while (col < 4)
		{
			grid[row][col] = 0;
			col++;
		}
		row++;
	}
}

int	solve(int grid[4][4],int clues[4][4], int row, int col)
{
	int	num;
	int	max;

	max = 4;
	//checking whether it is the end of everything
	if (row == max - 1 && col == max)
		return 1;
	//checking whether it is the end of col
	if (col == max)
	{
		row++;
		col = 0;
	}
	//if cell is already occupied then move forward
	if (grid[row][col] != 0)
		return solve(grid, clues, row, col + 1);

	num = 1;
	while (num <= max)
	{
		if (check_duplicate(grid, clues, row, col, num))
		{
			grid[row][col] = num;
			if (solve(grid, clues, row, col + 1))
				return 1;
		}
		num ++;
	}
	return 0;
}

int	row_left_valid(int grid[4][4], char *clues, int row, int col)
{
	int	highest;
	int	visible;

	highest = 0;
	while (row < 4)
	{
		visible = 1;
		while (col < 4)
		{
			if (grid[row][col] < grid[row][col + 1])
			{
				highest = grid[row][col];
				visible++;
			}
			col++;
		}
		if (visible != clues[9])
			

		row++;
	}
}

int	check_clues(char* clues)
{
	int	n;
	int	x; /* x is the actual clue count */
	
	n = 0;
	x = 0;
	while (clues[n] != '\0')
	{
		if (clues[n] >= '1' && clues[n] <= '4')
		{
			x++;
		}
		n++;
	}
	if (x != 16)
		return (0);
	return (1);
}

int	main(int argc, *argv[]){
	int	grid[4][4];

	if (argc != 2 || check_clues(argv[1]) == 0)
	{
		write(1, "Invalid clue count.", 30);
		return (0);
	}
	set_grid(grid);
}
