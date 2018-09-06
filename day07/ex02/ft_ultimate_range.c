/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 12:18:57 by kemartin          #+#    #+#             */
/*   Updated: 2018/09/05 19:23:55 by kemartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int n;

	i = 0;
	n = min;
	if (min >= max)
		return (0);
	if (!(*range = malloc(sizeof(int) * (max - min))))
		return (0);
	while (n < max)
	{
		(*range)[i] = n;
		i++;
		n++;
	}
	return (i);
}
