/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 12:19:31 by kemartin          #+#    #+#             */
/*   Updated: 2018/09/17 14:35:32 by kemartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	if ((*begin_list1) == NULL)
		(*begin_list1) = begin_list2;
	else if (!((*begin_list1)->next))
		(*begin_list1)->next = begin_list2;
	else
		ft_list_merge(&((*begin_list1)->next), begin_list2);
}
