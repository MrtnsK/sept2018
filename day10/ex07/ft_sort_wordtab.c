/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 17:25:07 by kemartin          #+#    #+#             */
/*   Updated: 2018/09/12 15:48:38 by kemartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_swap(char **tab, int j, int i, int swap)
{
	tab[swap] = tab[j];
	tab[j] = tab[i];
	tab[i] = tab[swap];
	tab[swap] = NULL;
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_sort_wordtab(char **tab)
{
	int		i;
	int		j;
	int		swap;

	i = 0;
	j = 0;
	while (tab[i])
		i++;
	swap = i;
	i--;
	while (i > 0)
	{
		j = i - 1;
		while (j >= 0)
		{
			if (ft_strcmp(tab[j], tab[i]) > 0)
				ft_swap(tab, j, i, swap);
			j--;
		}
		i--;
	}
}
