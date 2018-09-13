/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 10:43:20 by kemartin          #+#    #+#             */
/*   Updated: 2018/09/11 12:07:39 by kemartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int lenght, int (*f)(int, int))
{
	int i;
	int cmpt1;
	int cmpt2;

	i = 0;
	cmpt1 = 0;
	cmpt2 = 0;
	while (i < lenght - 1)
	{
		if ((*f)(tab[i], tab[i + 1]) > 0)
			cmpt1++;
		if ((*f)(tab[i], tab[i + 1]) < 0)
			cmpt2++;
		i++;
	}
	if (cmpt1 != 0 && cmpt2 != 0)
		return (0);
	return (1);
}
