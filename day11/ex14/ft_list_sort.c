/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 13:08:22 by kemartin          #+#    #+#             */
/*   Updated: 2018/09/17 14:51:24 by kemartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*tmp1;
	t_list	*tmp2;
	t_list	*tmp3;
	void	*trie;

	tmp1 = (*begin_list);
	while (tmp1)
	{
		tmp3 = tmp1;
		trie = tmp1->data;
		tmp2 = tmp1->next;
		while (tmp2)
		{
			if ((*cmp)(trie, tmp2->data) > 0)
			{
				tmp3 = tmp2;
				trie = tmp3->data;
			}
			tmp2 = tmp2->next;
		}
		tmp3->data = tmp1->data;
		tmp1->data = trie;
		tmp1 = tmp1->next;
	}
}
