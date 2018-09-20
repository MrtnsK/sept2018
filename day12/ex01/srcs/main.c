/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 15:24:36 by kemartin          #+#    #+#             */
/*   Updated: 2018/09/17 19:01:00 by kemartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "display.h"

void	dis_error(char *str)
{
	ft_putstr_e("cat: ");
	ft_putstr_e(str);
	if (errno == EACCES)
		ft_putstr_e(": Permission denied\n");
	else
		ft_putstr_e(": No such file or directory\n");
	return ;
}

void	read_files(char *str)
{
	int		fd;
	char	buf[BUF_SIZE];
	int		ret;

	fd = open(str, O_RDONLY);
	if (fd == -1)
	{
		dis_error(str);
		close(fd);
		return ;
	}
	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
		ft_putstr(buf);
	}
	close(fd);
}

int		main(int ac, char **av)
{
	int i;

	i = 1;
	if (ac < 2)
		while (1)
			i++;
	while (i <= ac - 1)
	{
		if (ft_strcmp(av[1], "-") == 0)
		{
			while (1)
				i++;
		}
		read_files(av[i]);
		i++;
	}
	return (0);
}
