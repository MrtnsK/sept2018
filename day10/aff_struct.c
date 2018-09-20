/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_struct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 11:24:21 by kemartin          #+#    #+#             */
/*   Updated: 2018/09/13 16:16:58 by kemartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data);

void	*ft_print_list(t_list *elem)
{
	if (elem)
		printf("%c\n", elem->data);
	else
		return (elem);
	ft_print_list(elem->next);
}


t_list	*ft_create_elem(void *data)
{
	t_list	*elem;

	if (!(elem = (t_list*)malloc(sizeof(t_list))))
		return (0);
	if (elem)
	{
		elem->next = 0;
		elem->data = data;
	}
	return (elem);
}

int		main(void)
{
	t_list *par;
	par->data = 'Z';
	par = par->next;
	par->data = "o"
	ft_list_push_back(&par, 'A');
	ft_list_push_back(&par, 'B');
	ft_list_push_back(&par, 'C');
		printf("ok\n");
	ft_print_list(par);
	return (0);
}
