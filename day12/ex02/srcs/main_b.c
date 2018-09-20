/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 17:53:49 by kemartin          #+#    #+#             */
/*   Updated: 2018/09/20 18:27:52 by kemartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "display.h"

void	offset(char *str)
{
	ft_putstr_e("tail: illegal offset -- ");
	ft_putstr_e(str);
	ft_putstr_e("\n");
}

void	multifiles(char *file, int i)
{
	int fd;

	fd = open(file, O_RDONLY);
	close(fd);
	if (fd != -1)
	{
		if (i >= 4)
			ft_putstr("\n");
		ft_putstr("==> ");
		ft_putstr(file);
		ft_putstr(" <==\n");
	}
}

void	plus_line(char *str, int bits)
{
	int i;
	int prints;

	i = 0;
	while (str[i] != '\0')
		i++;
	prints = bits;
	while (prints <= i && str[prints])
	{
		ft_putchar(str[prints]);
		prints++;
	}
}
