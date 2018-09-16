/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 10:55:50 by kemartin          #+#    #+#             */
/*   Updated: 2018/09/16 14:50:07 by kemartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colle.h"

char	display1(int dim[2], int a, int b, char buf)
{
	if (a == 1 & b == 1)
		buf = '/';
	else if (a == 1 && b == dim[1])
		buf = '\\';
	else if (a == dim[0] && b == 1)
		buf = '\\';
	else if (a == dim[0] && b == dim[1])
		buf = '/';
	else if (b == 1 || b == dim[1])
		buf = '*';
	else if (a == 1 || a == dim[0])
		buf = '*';
	else
		buf = ' ';
	return (buf);
}

char	*rush1(int x, int y, char *buf)
{
	int a;
	int b;
	int i;
	int dim[2];

	dim[0] = x;
	dim[1] = y;
	i = 0;
	if (x <= 0 || y <= 0)
		return (0);
	b = 1;
	while (b <= y)
	{
		a = 1;
		while (a <= x)
		{
			buf[i] = display1(dim, a, b, buf[i]);
			i++;
			a++;
		}
		b++;
		buf[i++] = '\n';
	}
	buf[i] = '\0';
	return (buf);
}
