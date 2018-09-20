/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 15:20:58 by kemartin          #+#    #+#             */
/*   Updated: 2018/09/17 18:53:04 by kemartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DISPLAY_H
# define DISPLAY_H

# define BUF_SIZE (32 * 1024)

# include <unistd.h>
# include <fcntl.h>
# include <errno.h>

void	ft_putchar(char c);
void	ft_putchar_e(char c);
void	ft_putstr(char *str);
void	ft_putstr_e(char *str);
int		ft_strcmp(char *s1, char *s2);

#endif
