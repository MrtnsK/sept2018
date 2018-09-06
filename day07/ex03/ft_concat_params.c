/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 19:24:26 by kemartin          #+#    #+#             */
/*   Updated: 2018/09/05 21:56:02 by kemartin         ###   ########.fr       */
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
	int		k;
	int		len;

	k = 0;
	i = 1;
	len = argv_len(argc, argv);
	if (!(str = malloc(sizeof(char) * (len + 1))))
		return (0);
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			str[k] = argv[i][j];
			k++;
			j++;
		}
		str[k] = '\n';
		k++;
		i++;
	}
	str[k - 1] = '\0';
	return (str);
}
