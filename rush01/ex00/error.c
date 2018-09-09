/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 23:04:45 by kemartin          #+#    #+#             */
/*   Updated: 2018/09/09 20:45:58 by kemartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		size_param(char **av, int c)
{
	int l;

	l = 0;
	while (av[c][l])
		l++;
	if (l != 9)
		return (0);
	else
		return (1);
}

int		char_params(char **av, int c)
{
	int l;

	l = 0;
	while (l < 9 && av[c][l])
	{
		if ((av[c][l] >= '0' && av[c][l] <= '9') || av[c][l] == '.')
			l++;
		else
			return (0);
	}
	return (1);
}

int		check_params(char **av)
{
	int c;

	c = 1;
	while (c <= 9)
	{
		if (size_param(av, c) == 0)
			return (0);
		if (char_params(av, c) == 0)
			return (0);
		c++;
	}
	return (1);
}
