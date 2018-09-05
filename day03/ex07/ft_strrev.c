/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 10:12:12 by kemartin          #+#    #+#             */
/*   Updated: 2018/08/28 17:02:55 by kemartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		i;
	int		rev;
	char	tmp;

	i = 0;
	rev = 0;
	while (str[i])
		i++;
	i--;
	while (rev <= i)
	{
		tmp = str[rev];
		str[rev] = str[i];
		str[i] = tmp;
		rev++;
		i--;
	}
	return (str);
}
