/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 12:16:09 by kemartin          #+#    #+#             */
/*   Updated: 2018/09/11 16:08:13 by kemartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doop.h"

int		choose_op(char opera)
{
	if (opera == '+')
		return (0);
	if (opera == '-')
		return (1);
	if (opera == '*')
		return (2);
	if (opera == '/')
		return (3);
	if (opera == '%')
		return (4);
	else
		return (-1);
}

int		do_op(int nbr1, char opera, int nbr2)
{
	int i;
	int (*calcul[5])(int, int);
	int ope;

	i = 0;
	calcul[0] = ft_add;
	calcul[1] = ft_sub;
	calcul[2] = ft_mul;
	calcul[3] = ft_div;
	calcul[4] = ft_mod;
	if ((ope = choose_op(opera)) == -1)
		return (ft_putstr("0\n"));
	if (ope == 3 && nbr2 == 0)
		ft_putstr("Stop : division by zero\n");
	else if (ope == 4 && nbr2 == 0)
		ft_putstr("Stop : modulo by zero\n");
	else
	{
		ft_putnbr(calcul[ope](nbr1, nbr2));
		ft_putchar('\n');
	}
	return (0);
}

int		main(int ac, char **av)
{
	if (ac != 4)
		return (0);
	else if (ft_strlen(av[2]) != 1)
		return (ft_putstr("0\n"));
	else
		do_op(ft_atoi(av[1]), av[2][0], ft_atoi(av[3]));
	return (0);
}
