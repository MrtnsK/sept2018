/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 20:31:41 by kemartin          #+#    #+#             */
/*   Updated: 2018/09/06 23:45:50 by kemartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_wp(char c, char *charset)
{
	int i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int		count_word(char *str, char *charset)
{
	int cmpt;
	int i;

	cmpt = 0;
	i = 0;
	while (str[i])
	{
		while (is_wp(str[i], charset) && str[i])
			i++;
		if (!is_wp(str[i], charset) && str[i])
			cmpt++;
		while (!is_wp(str[i], charset) && str[i])
			i++;
	}
	return (cmpt);
}

char	*countnput_letter(char *str, int debut, char *tab, char *charset)
{
	int fin;
	int i;
	int j;

	i = 0;
	fin = debut;
	while (!is_wp(str[fin], charset))
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

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		w;
	int		hmany;
	int		letter;

	tab = NULL;
	w = 0;
	letter = 0;
	hmany = count_word(str, charset);
	if (!(tab = malloc(sizeof(char*) * (hmany + 1))))
		return (0);
	while (w <= hmany - 1)
	{
		while (is_wp(str[letter], charset) && str[letter])
			letter++;
		tab[w] = countnput_letter(str, letter, tab[w], charset);
		while (!is_wp(str[letter], charset) && str[letter])
			letter++;
		w++;
	}
	tab[w] = 0;
	return (tab);
}
