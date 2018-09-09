/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 20:52:49 by kemartin          #+#    #+#             */
/*   Updated: 2018/09/09 22:20:48 by kemartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

void	cpy_tab(int grid[9][9], int tab[9][9])
{
	int l;
	int c;

	c = 0;
	while (c < 9 && grid[c])
	{
		l = 0;
		while (l < 9 && grid[c][l])
		{
			tab[c][l] = grid[c][l];
			l++;
		}
		c++;
	}
}

int		solution(int grid[9][9], int tab[9][9], int *res)
{
	if (*res == 0)
		cpy_tab(grid, tab);
	(*res)++;
	if (*res == 2)
		return (1);
	return (0);
}

int		process(int grid[9][9], int tab[9][9], int position, int *res)
{
	int line;
	int column;
	int nb;

	line = position / 9;
	column = position % 9;
	nb = 1;
	if (position == 81)
		return (solution(grid, tab, res));
	if (grid[line][column] != 0)
		return (process(grid, tab, position + 1, res));
	while (nb <= 9)
	{
		if (check_row(nb, line, column, grid) &&
				check_square(nb, line, column, grid))
		{
			grid[line][column] = nb;
			if (process(grid, tab, position + 1, res) == 1)
				return (1);
		}
		nb++;
		grid[line][column] = 0;
	}
	return (0);
}

void	sudoku(char **av)
{
	int grid[9][9];
	int tab[9][9];
	int res;

	res = 0;
	fill_grid(av, grid);
	fill_grid(av, tab);
	if (is_valid(grid) == 0)
	{
		ft_putstr("Error\n");
		return ;
	}
	process(grid, tab, 0, &res);
	if (res == 1)
		display(tab);
	else
		ft_putstr("Error\n");
}

int		main(int ac, char **av)
{
	if (ac == 10)
	{
		if (check_params(av) == 1)
			sudoku(av);
		else
			ft_putstr("Error\n");
	}
	else if (ac != 10)
		ft_putstr("Error\n");
	return (0);
}
