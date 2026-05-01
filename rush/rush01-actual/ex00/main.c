/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: winhein <winhein@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/19 14:04:20 by winhein           #+#    #+#             */
/*   Updated: 2026/04/19 18:40:46 by zetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		visible_count(int *line);
int		check_row(int grid[4][4], int clues[4][4], int row);
int		check_col(int grid[4][4], int clues[4][4], int col);
int		check_duplicate(int grid[4][4], int row, int col, int num);
int		solve_rec(int grid[4][4], int clues[4][4], int row, int col);
void	solve(int grid[4][4], int clues[4][4]);
void	print_grid(int grid[4][4]);
void	set_grid(int grid[4][4]);

void	storing_data(char *data, int clues[4][4])
{
	int	i;
	int	j;
	int	count;

	i = 0;
	count = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (data[count] >= '1' && data[count] <= '4')
			{
				clues[i][j] = data[count] - '0';
				j++;
			}
			count++;
		}
		i++;
	}
}

int	count_len(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
		n++;
	if (n != 31)
		return (0);
	return (1);
}

int	main(int argc, char *argv[])
{
	int	clues[4][4];
	int	grid[4][4];

	set_grid(grid);
	if (argc == 2)
	{
		if (count_len(argv[1]) == 0)
		{
			write(1, "Invalid clue count", 18);
			return (0);
		}
		storing_data(argv[argc - 1], clues);
	}
	else
		return (0);
	solve(grid, clues);
	print_grid(grid);
}
