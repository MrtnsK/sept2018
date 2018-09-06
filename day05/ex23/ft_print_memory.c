/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 00:36:39 by kemartin          #+#    #+#             */
/*   Updated: 2018/09/06 03:11:32 by kemartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr_base(int nbr)
{
	int		base_n;
	char	*base;

	base = "0123456789abcdef";
	base_n = 16;
	if (nbr >= base_n)
	{
		ft_putnbr_base(nbr / base_n);
		ft_putnbr_base(nbr % base_n);
	}
	else
		ft_putchar(base[nbr]);
}

void	ft_putstr(char *str, unsigned int size, unsigned int hexa)
{
	unsigned int i;

	i = hexa;
	ft_putchar(' ');
	while (i < hexa + 16 && i < size)
	{
		if (str[i] < 32 || str[i] == 127)
			ft_putchar('.');
		else
			ft_putchar(str[i]);
		i++;
	}
}

void	addr_mem(int memory)
{
	int i;

	i = 0;
	if (memory >= 1048576)
		ft_putchar('0');
	else if (memory >= 65536)
		while (++i <= 2)
			ft_putchar('0');
	else if (memory >= 4096)
		while (++i <= 3)
			ft_putchar('0');
	else if (memory >= 256)
		while (++i <= 4)
			ft_putchar('0');
	else if (memory >= 16)
		while (++i <= 5)
			ft_putchar('0');
	else if (memory >= 0)
		while (++i <= 6)
			ft_putchar('0');
	ft_putnbr_base(memory);
	ft_putchar('0');
	ft_putchar(':');
}

void	print_hexa(char *address, unsigned int hexa, unsigned int size,
		unsigned int global)
{
	unsigned int t;
	unsigned int index;

	t = hexa;
	index = 0;
	while (t < hexa + 16)
	{
		if (t % 2 == 0)
			ft_putchar(' ');
		if (global * 16 + index < size)
		{
			if (address[t] <= 15)
				ft_putchar('0');
			ft_putnbr_base(address[t]);
		}
		else if (!(global * 16 + index < size))
		{
			ft_putchar(' ');
			ft_putchar(' ');
		}
		t++;
		index++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	char			*address;
	unsigned int	hexa;

	i = 0;
	address = addr;
	hexa = 0;
	if (size == 0)
		return (0);
	while (hexa <= size)
	{
		addr_mem(i);
		print_hexa(address, hexa, size, i);
		ft_putstr(address, size, hexa);
		ft_putchar('\n');
		hexa += 16;
		i++;
	}
	return (address);
}
