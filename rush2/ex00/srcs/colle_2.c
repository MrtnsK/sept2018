/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 10:35:29 by kemartin          #+#    #+#             */
/*   Updated: 2018/09/16 21:48:21 by kemartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colle.h"

int		buffercmp(char *buf, int rushnb, int wd, int bn)
{
	char	*rush;
	int		ok;

	if (!(rush = malloc(sizeof(char*) * ((wd * bn) + 1))))
		return (0);
	if (rushnb == 0)
		rush = rush0(wd, bn, rush);
	if (rushnb == 1)
		rush = rush1(wd, bn, rush);
	if (rushnb == 2)\
		rush = rush2(wd, bn, rush);
	if (rushnb == 3)
		rush = rush3(wd, bn, rush);
	if (rushnb == 4)
		rush = rush4(wd, bn, rush);
	ok = (ft_strcmp(rush, buf) == 0 ? 1 : 0);
	free(rush);
	return (ok);
}

void	match(int wd, int bn, char *buf)
{
	int res[6];

	res[0] = buffercmp(buf, 0, wd, bn);
	res[1] = buffercmp(buf, 1, wd, bn);
	res[2] = buffercmp(buf, 2, wd, bn);
	res[3] = buffercmp(buf, 3, wd, bn);
	res[4] = buffercmp(buf, 4, wd, bn);
	res[5] = 0;
	displayrush(res, wd, bn);
}

void	size_rush(char *buf)
{
	int i;
	int bn;
	int wd;

	i = 0;
	bn = 0;
	wd = 0;
	while (buf[i])
	{
		if (bn == 0)
			wd++;
		if (buf[i] == '\n' || buf[i] == '\0')
			bn++;
		i++;
	}
	if ((bn == 1 && wd == 1 && i == 1)
			|| (bn == 0 && wd == 0 && i == 0))
	{
		ft_putstr("aucune\n");
		return ;
	}
	wd--;
	match(wd, bn, buf);
}

void	colle_2(void)
{
	char	buf[BUF_SIZE + 1];
	int		put;
	char	*str;

	if (!(str = (char *)malloc(sizeof(char))))
		return ;
	str[0] = '\0';
	while ((put = read(0, buf, BUF_SIZE)))
	{
		buf[put] = '\0';
		str = ft_fakecat(str, buf);
		str = ft_fakecat(str, "\0");
	}
	if (str[0] == '\0' || str[0] == '\n')
	{
		ft_putstr("aucune\n");
		return ;
	}
	size_rush(str);
}

int		main(void)
{
	colle_2();
	return (0);
}
