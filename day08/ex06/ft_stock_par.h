/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 12:47:40 by kemartin          #+#    #+#             */
/*   Updated: 2018/09/10 18:50:14 by kemartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_PAR_H
# define FT_STOCK_PAR_H

# include <stdlib.h>

typedef struct		s_stock_par
{
	int		size_param;
	char	*str;
	char	*copy;
	char	**tab;
}					t_stock_par;

void				ft_putchar(char c);
char				**ft_split_whitespaces(char *str);
struct s_stock_par	*ft_param_to_tab(int ac, char **av);
void				ft_show_tab(struct s_stock_par *par);

#endif
