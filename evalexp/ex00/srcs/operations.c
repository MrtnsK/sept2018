/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 22:30:33 by kemartin          #+#    #+#             */
/*   Updated: 2018/09/16 22:30:34 by kemartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"

int		ft_add(int nb1, int nb2)
{
	return (nb1 + nb2);
}

int		ft_sub(int nb1, int nb2)
{
	return (nb1 - nb2);
}

int		ft_mul(int nb1, int nb2)
{
	return (nb1 * nb2);
}

int		ft_div(int nb1, int nb2)
{
	return (nb1 / nb2);
}

int		ft_mod(int nb1, int nb2)
{
	return (nb1 % nb2);
}
