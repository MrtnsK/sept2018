/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 17:55:45 by kemartin          #+#    #+#             */
/*   Updated: 2018/09/17 16:59:32 by kemartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *start;

	start = ft_create_elem(data);
	if (*begin_list)
		start->next = (*begin_list);
	(*begin_list) = start;
}

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*node;
	int		i;

	node = NULL;
	i = 0;
	while (i < ac)
	{
		ft_list_push_front(&node, av[i]);
		i++;
	}
	return (node);
}
