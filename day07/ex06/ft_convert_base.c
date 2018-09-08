/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 10:46:43 by kemartin          #+#    #+#             */
/*   Updated: 2018/09/08 01:44:00 by kemartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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
		while (i--)
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

void	ft_putnbr_base(long nbr, char *base, char **str, int len)
{
	int base_n;

	base_n = base_ok(base);
	if (base_n > 1)
	{
		if (nbr < 0)
		{
			str[0][0] = '-';
			ft_putnbr_base(-nbr, base, str, 1);
		}
		else if (nbr >= base_n)
		{
			ft_putnbr_base(nbr / base_n, base, str, len + 1);
			ft_putnbr_base(nbr % base_n, base, str, len);
		}
		else
			str[0][len] = base[nbr];
	}
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		i;
	long	nbr_ten;
	char	*str;
	int		j;
	char	tmp;

	j = -1;
	i = 0;
	nbr_ten = ft_atoi_base(nbr, base_from);
	if (!(str = (char*)malloc(sizeof(char) * 50)))
		return (0);
	while (i < 50)
		str[i++] = 0;
	ft_putnbr_base(nbr_ten, base_to, &str, 0);
	i = 0;
	while (str[i] != '\0')
		i++;
	i--;
	while (j++ < i && (tmp = str[j]))
	{
		str[j] = str[i];
		str[i] = tmp;
		i--;
	}
	return (str);
}
