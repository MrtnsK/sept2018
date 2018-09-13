/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doop.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 12:23:29 by kemartin          #+#    #+#             */
/*   Updated: 2018/09/12 13:17:16 by kemartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOOP_H
# define DOOP_H

# include <unistd.h>

typedef struct	s_opp
{
	char	*ope;
	int		(*f)(int, int);
}				t_opp;

int				choose_op(char *ope);
int				do_op(int nbr1, char opera, int nbr2);
int				ft_add(int a, int b);
int				ft_sub(int a, int b);
int				ft_mul(int a, int b);
int				ft_div(int a, int b);
int				ft_mod(int a, int b);
int				ft_usage(int a, int b);
int				ft_strlen(char *str);
int				ft_atoi(char *str);
int				ft_putstr(char *str);
void			ft_putchar(char c);
void			ft_putnbr(int nb);
int				ft_strcmp(char *s1, char *s2);

#endif
