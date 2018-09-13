/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 12:16:09 by kemartin          #+#    #+#             */
/*   Updated: 2018/09/12 15:28:48 by kemartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doop.h"
#include "ft_opp.h"

int		ft_usage(int a, int b)
{
	int i;

	i = 0;
	ft_putstr("error : only [ ");
	while (i < 5)
	{
		ft_putstr(g_opptab[i].ope);
		ft_putchar(' ');
		i++;
	}
	ft_putstr("] are accepted.");
	return (a || b);
}

int		choose_op(char *ope)
{
	int operand;

	operand = 0;
	while (operand < 5)
	{
		if (ft_strcmp(ope, g_opptab[operand].ope) == 0)
			return (operand);
		operand++;
	}
	return (operand);
}

int		main(int ac, char **av)
{
	int nbr;
	int nbr2;
	int op;

	if (ac != 4)
		return (0);
	nbr = ft_atoi(av[1]);
	op = choose_op(av[2]);
	nbr2 = ft_atoi(av[3]);
	if (g_opptab[op].f == &ft_div && nbr2 == 0)
		return (ft_putstr("Stop : division by zero\n"));
	if (g_opptab[op].f == &ft_mod && nbr2 == 0)
		return (ft_putstr("Stop : modulo by zero\n"));
	if (!(g_opptab[op].f == &ft_usage))
		ft_putnbr(g_opptab[op].f(nbr, nbr2));
	else
		g_opptab[op].f(nbr, nbr2);
	ft_putchar('\n');
	return (0);
}
