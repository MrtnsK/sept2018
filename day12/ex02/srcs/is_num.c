/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_num.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 00:12:06 by kemartin          #+#    #+#             */
/*   Updated: 2018/09/20 17:35:27 by kemartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "display.h"

int		is_num(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (!((str[i] >= '0' && str[i] <= '9')
					|| str[i] == '-' || str[i] == '+'))
			return (0);
		i++;
	}
	return (1);
}