/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 02:48:02 by kemartin          #+#    #+#             */
/*   Updated: 2018/09/02 02:49:41 by kemartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *s)
{
	int i;

	i = 0;
	while (s[i] >= '0' && s[i] <= '9')
		i++;
	if (s[i] != '\0')
		return (0);
	return (1);
}
