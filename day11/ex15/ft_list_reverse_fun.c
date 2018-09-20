/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 11:50:43 by kemartin          #+#    #+#             */
/*   Updated: 2018/09/17 18:29:59 by kemartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	if (!begin_list)
		return (0);
	else
		return (ft_list_size(begin_list->next) + 1);
}

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int i;

	i = 0;
	while (i < nbr)
	{
		begin_list = begin_list->next;
		i++;
	}
	if (i == nbr)
		return (&(*begin_list));
	else
		return (NULL);
}

void	swap_data(void **a, void **b)
{
	void	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_list_reverse_fun(t_list *begin_list)
{
	int		size;
	int		i;

	size = ft_list_size(begin_list);
	i = 0;
	while (i < size / 2)
	{
		swap_data(&((ft_list_at(begin_list, i))->data),
				&(ft_list_at(begin_list, size - i - 1)->data));
		i++;
	}
}
