/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 16:13:39 by kemartin          #+#    #+#             */
/*   Updated: 2018/09/12 15:14:00 by kemartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *grid;

	if (!(grid = malloc(sizeof(int) * length)))
		return (NULL);
	i = 0;
	while (i < length)
	{
		grid[i] = f(tab[i]);
		i++;
	}
	return (grid);
}
