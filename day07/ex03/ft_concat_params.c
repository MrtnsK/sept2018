/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 19:24:26 by kemartin          #+#    #+#             */
/*   Updated: 2018/09/08 19:24:37 by kemartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		argv_len(int argc, char **argv)
{
	int i;
	int j;
	int len;

	i = 1;
	j = 0;
	len = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
			j++;
		i++;
		len += j;
	}
	return (len);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*str;
	int		i;
	int		j;
	int		len;

	i = 1;
	len = argv_len(argc, argv);
	if (argc <= 1)
		return ("");
	if (!(str = malloc(sizeof(char) * (len + 2))))
		return ("");
	len = 0;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			str[len++] = argv[i][j];
			j++;
		}
		str[len++] = '\n';
		i++;
	}
	str[len - 1] = '\0';
	return (str);
}
