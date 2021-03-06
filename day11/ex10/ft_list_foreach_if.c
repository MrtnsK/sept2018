/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 00:09:51 by kemartin          #+#    #+#             */
/*   Updated: 2018/09/17 14:36:56 by kemartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *),
		void *data_ref, int (*cmp)(void *, void *))
{
	if (!begin_list)
		return ;
	if (!(*cmp)(begin_list->data, data_ref))
		f(begin_list->data);
	ft_list_foreach_if(begin_list->next, f, data_ref, cmp);
}
