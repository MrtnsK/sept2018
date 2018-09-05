/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 18:26:32 by kemartin          #+#    #+#             */
/*   Updated: 2018/08/27 23:57:52 by kemartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	display(int x)
{
	ft_putchar(x / 10 + '0');
	ft_putchar(x % 10 + '0');
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	b = 1;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			display(a);
			ft_putchar(' ');
			display(b);
			if (a == 98)
				return ;
			ft_putchar(',');
			ft_putchar(' ');
			b++;
		}
		a++;
	}
}
