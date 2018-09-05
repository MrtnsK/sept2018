/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 22:05:33 by kemartin          #+#    #+#             */
/*   Updated: 2018/09/04 00:35:38 by kemartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

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

void	ft_putnbr_base(int nbr, char *base)
{
	int base_n;

	base_n = base_ok(base);
	if (base_n <= 1)
		return ;
	if (nbr == -2147483648)
	{
		ft_putchar('-');
		ft_putnbr_base((nbr / base_n) * -1, base);
		ft_putchar(base[(nbr % base_n) * -1]);
	}
	else if (nbr < 0)
	{
		ft_putchar('-');
		ft_putnbr_base(-nbr, base);
	}
	else if (nbr >= base_n)
	{
		ft_putnbr_base((nbr / base_n), base);
		ft_putnbr_base((nbr % base_n), base);
	}
	else
		ft_putchar(base[nbr]);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	*base;

	base = "0123456789abcdef";
	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] == 127)
		{
			ft_putchar('\\');
			if (str[i] <= 15)
				ft_putchar('0');
			ft_putnbr_base(str[i], base);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
