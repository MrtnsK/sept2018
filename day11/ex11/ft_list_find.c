/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 00:36:54 by kemartin          #+#    #+#             */
/*   Updated: 2018/09/17 22:07:31 by kemartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	if (!begin_list)
		return (NULL);
	else if ((*cmp)(begin_list->data, data_ref) == 0)
		return (begin_list);
	else
		return (ft_list_find(begin_list->next, data_ref, cmp));
}
