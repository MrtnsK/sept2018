/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 12:07:06 by kemartin          #+#    #+#             */
/*   Updated: 2018/09/16 14:31:19 by kemartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colle.h"

void	printrush(int rush, int wd, int bn)
{
	ft_putstr("[colle-0");
	ft_putnbr(rush);
	ft_putchar(']');
	ft_putchar(' ');
	ft_putchar('[');
	ft_putnbr(wd);
	ft_putchar(']');
	ft_putchar(' ');
	ft_putchar('[');
	ft_putnbr(bn);
	ft_putchar(']');
}

void	displayrush(int *res, int wd, int bn)
{
	if (res[0] == 1)
		printrush(0, wd, bn);
	if (res[1] == 1)
		printrush(1, wd, bn);
	if (res[2] == 1)
	{
		printrush(2, wd, bn);
		if (res[3] == 1 || res[4] == 1)
			ft_putstr(" || ");
	}
	if (res[3] == 1)
	{
		printrush(3, wd, bn);
		if (res[4] == 1)
			ft_putstr(" || ");
	}
	if (res[4] == 1)
		printrush(4, wd, bn);
	if (res[0] == 0 && res[1] == 0 && res[2] == 0 && res[3] == 0 && res[4] == 0)
		ft_putstr("aucune");
	ft_putchar('\n');
}
