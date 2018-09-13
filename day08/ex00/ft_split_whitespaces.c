/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 22:06:03 by kemartin          #+#    #+#             */
/*   Updated: 2018/09/06 03:39:37 by kemartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_wp(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

int		count_word(char *str)
{
	int cmpt;
	int i;

	cmpt = 0;
	i = 0;
	while (str[i])
	{
		while (is_wp(str[i]) && str[i])
			i++;
		if (!is_wp(str[i]) && str[i])
			cmpt++;
		while (!is_wp(str[i]) && str[i])
			i++;
	}
	return (cmpt);
}

char	*countnput_letter(char *str, int debut, char *tab)
{
	int fin;
	int i;
	int j;

	i = 0;
	fin = debut;
	while (!is_wp(str[fin]))
		fin++;
	if (!(tab = malloc(sizeof(char) * (fin - debut + 1))))
		return (0);
	j = debut;
	while (j < fin && str[j])
	{
		tab[i] = str[j];
		i++;
		j++;
	}
	tab[i] = '\0';
	return (tab);
}

char	**ft_split_whitespaces(char *str)
{
	char	**tab;
	int		w;
	int		hmany;
	int		letter;

	tab = NULL;
	w = 0;
	letter = 0;
	hmany = count_word(str);
	if (!(tab = malloc(sizeof(char*) * (hmany + 1))))
		return (0);
	while (w <= hmany - 1)
	{
		while (is_wp(str[letter]) && str[letter])
			letter++;
		tab[w] = countnput_letter(str, letter, tab[w]);
		while (!is_wp(str[letter]) && str[letter])
			letter++;
		w++;
	}
	tab[w] = 0;
	return (tab);
}
