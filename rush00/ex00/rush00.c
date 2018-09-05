/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 10:55:39 by kemartin          #+#    #+#             */
/*   Updated: 2018/09/02 15:34:23 by kemartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	display(int x, int y, int a, int b)
{
	if (a == 1 & b == 1)
		ft_putchar('o');
	else if (a == 1 && b == y)
		ft_putchar('o');
	else if (a == x && b == 1)
		ft_putchar('o');
	else if (a == x && b == y)
		ft_putchar('o');
	else if (b == 1 || b == y)
		ft_putchar('-');
	else if (a == 1 || a == x)
		ft_putchar('|');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int a;
	int b;

	if (x <= 0 || y <= 0)
		return ;
	b = 1;
	while (b <= y)
	{
		a = 1;
		while (a <= x)
		{
			display(x, y, a, b);
			a++;
		}
		b++;
		ft_putchar('\n');
	}
}
