/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 14:29:54 by kemartin          #+#    #+#             */
/*   Updated: 2018/09/17 14:51:46 by kemartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	merge_list(t_list **begin_list1, t_list *begin_list2)
{
	if ((*begin_list1) == NULL)
		(*begin_list1) = begin_list2;
	else if (!((*begin_list1)->next))
		(*begin_list1)->next = begin_list2;
	else
		merge_list(&((*begin_list1)->next), begin_list2);
}

void	sort_list(t_list **begin_list, int (*cmp)())
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

void	ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2,
		int (*cmp)())
{
	merge_list(begin_list1, begin_list2);
	sort_list(begin_list1, cmp);
}
