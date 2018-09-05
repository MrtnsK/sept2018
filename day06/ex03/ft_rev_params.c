/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 13:06:10 by kemartin          #+#    #+#             */
/*   Updated: 2018/08/31 13:06:12 by kemartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_rev_params(int ac, char **av)
{
	int i;
	int j;

	i = ac - 1;
	while (i >= 1)
	{
		j = -1;
		while (av[i][++j] != '\0')
			ft_putchar(av[i][j]);
		ft_putchar('\n');
		i--;
	}
}

int		main(int ac, char **av)
{
	ft_rev_params(ac, av);
	return (0);
}
