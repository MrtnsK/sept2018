/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 12:22:46 by kemartin          #+#    #+#             */
/*   Updated: 2018/09/05 12:57:13 by kemartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		base_ok(char *base)
{
	int i;
	int len;

	len = 0;
	while (base[len])
	{
		if (base[len] == '-' || base[len] == '+')
			return (0);
		i = len;
		while (i-- >= 0)
			if (base[i] == base[len])
				return (0);
		len++;
	}
	return (len);
}

int		base_in(char *base, char c)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int		ft_atoi_base(char *str, char *base)
{
	int i;
	int res;
	int neg;
	int base_n;

	i = 0;
	res = 0;
	neg = 1;
	base_n = base_ok(base);
	if (base_n < 2)
		return (0);
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
		neg *= (str[i++] == '-' ? -1 : 1);
	while (base_in(base, str[i]) != -1)
	{
		res = (res * base_n) + base_in(base, str[i]);
		i++;
	}
	if (!str[i] || str[i] == '-' || str[i] == '+')
		return (res * neg);
	else
		return (0);
}
