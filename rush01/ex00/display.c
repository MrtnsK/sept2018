/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 20:41:35 by kemartin          #+#    #+#             */
/*   Updated: 2018/09/09 16:44:32 by kemartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

void	display(int grid[9][9])
{
	int c;
	int l;

	c = 0;
	while (c < 9)
	{
		l = 0;
		while (l < 9)
		{
			if (grid[c][l] == '0')
				ft_putchar('.');
			else
				ft_putchar(grid[c][l] + '0');
			l++;
			if (l != 9)
				ft_putchar(' ');
		}
		ft_putchar('\n');
		c++;
	}
}

void	grid_init(int grid[9][9])
{
	int c;
	int l;

	c = 0;
	l = 0;
	while (c < 9)
	{
		l = 0;
		while (l < 9)
		{
			grid[c][l] = 0;
			l++;
		}
		c++;
	}
}

void	fill_grid(char **av, int grid[9][9])
{
	int c;
	int l;

	c = 1;
	grid_init(grid);
	while (c <= 9)
	{
		l = 0;
		while (l < 9)
		{
			if (av[c][l] == '.')
				grid[c - 1][l] = 0;
			else
				grid[c - 1][l] = av[c][l] - '0';
			l++;
		}
		c++;
	}
}
