/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 12:24:59 by kemartin          #+#    #+#             */
/*   Updated: 2018/09/10 20:11:53 by kemartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

int					ft_strlen(char *str)
{
	int			i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char				*ft_strdup(char *str)
{
	int			i;
	char		*dest;

	i = 0;
	while (str[i])
		i++;
	if (!(dest = malloc(sizeof(char) * (i + 1))))
		return (0);
	i = 0;
	while (str[i])
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	int			i;
	t_stock_par	*par;

	i = 0;
	if (!(par = malloc(sizeof(t_stock_par) * (ac + 1))))
		return (0);
	while (i < ac)
	{
		par[i].size_param = ft_strlen(av[i]);
		par[i].str = av[i];
		par[i].copy = ft_strdup(av[i]);
		par[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	par[i].str = 0;
	return (par);
}
