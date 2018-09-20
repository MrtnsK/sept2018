/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fakecat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 20:35:12 by kemartin          #+#    #+#             */
/*   Updated: 2018/09/17 19:28:42 by kemartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "display.h"

char	*ft_fakecat(char *s1, char *s2)
{
	char	*res;
	int		len1;
	int		len2;
	int		i;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	if (!(res = (char *)malloc(sizeof(char) * (len1 + len2 + 1))))
		return (NULL);
	i = 0;
	while (i < len1)
	{
		res[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < len2)
	{
		res[len1 + i] = s2[i];
		i++;
	}
	res[len1 + i] = '\0';
	return (res);
}
