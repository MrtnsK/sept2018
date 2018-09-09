/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allopez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 20:46:08 by allopez           #+#    #+#             */
/*   Updated: 2018/09/09 22:19:16 by kemartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		check_row(int nbr, int line, int column, int grid[9][9])
{
	int l;
	int c;

	l = 0;
	while (l < 9)
	{
		if (l != line && grid[l][column] == nbr)
			return (0);
		l++;
	}
	c = 0;
	while (c < 9)
	{
		if (c != column && grid[line][c] == nbr)
			return (0);
		c++;
	}
	return (1);
}

int		check_square(int nbr, int l, int c, int grid[9][9])
{
	int s;
	int q;

	s = 0;
	q = 0;
	while (q < 3)
	{
		while (s < 3)
		{
			if (l - (l % 3) + q != l && c - (c % 3) + s != c
				&& grid[(l - (l % 3)) + q][(c - (c % 3)) + s] == nbr)
				return (0);
			s++;
		}
		s = 0;
		q++;
	}
	return (1);
}

int		is_valid(int grid[9][9])
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (grid[i][j] != 0 && !check_square(grid[i][j], i, j, grid) &&
					!check_row(grid[i][j], i, j, grid))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
