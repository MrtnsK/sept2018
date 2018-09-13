/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 11:04:15 by kemartin          #+#    #+#             */
/*   Updated: 2018/09/10 18:49:05 by kemartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H
# include <unistd.h>

# define TRUE 1
# define FALSE 0

typedef	unsigned char	t_bool;

# define EVEN(nbr) (nbr % 2 == 0)
# define EVEN_MSG ("I have an even number of arguments.\n")
# define ODD_MSG ("I have an odd number of arguments.\n")
# define SUCCESS 0

#endif
