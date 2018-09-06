/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 10:46:43 by kemartin          #+#    #+#             */
/*   Updated: 2018/09/06 12:02:05 by kemartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

long	ft_atoi(char *str)
{
	long i;
	long res;
	int neg;

	i = 0;
	res = 0;
	neg = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		neg = ((str[i] == '-') ? -1 : 1);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (str[i] - '0') + (res * 10);
		i++;
	}
	return (res * neg);
}

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

char	ft_putnbr_base(long nbr, char *base)
{
	int		base_n;
	char	*str;
	int		i;

	i = 0;
	base_n = base_ok(base);
	if (base_n <= 1)
		return (0);
	else if (nbr < 0)
		str[i] = '-';
	while (str[i + 1] != '\0')
	{
		str[i] = (nbr / base_n);
		i++;
	}
	str[i] = (nbr % base_n);
	i++;
	str[i] = '\0';
	return (*str);
}

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

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		i;
	long	nbr_ten;
	char	*str;

	i= 0;
	nbr_ten = ft_atoi(base_from);
	str = ft_putnbr_base(nbr_ten, base_to);
	str = ft_strrev(str);
	return (str);
}
