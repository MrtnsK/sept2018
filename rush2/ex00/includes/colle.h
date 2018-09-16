/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 10:41:01 by kemartin          #+#    #+#             */
/*   Updated: 2018/09/16 21:22:13 by kemartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COLLE_H
# define COLLE_H

# include <unistd.h>
# include <stdlib.h>
# define BUF_SIZE 4096

char	*rush0(int x, int y, char *buf);
char	*rush1(int x, int y, char *buf);
char	*rush2(int x, int y, char *buf);
char	*rush3(int x, int y, char *buf);
char	*rush4(int x, int y, char *buf);
char	*ft_fakecat(char *s1, char *s2);
int		ft_strcmp(char *s1, char *s2);
int		buffercmp(char *buf, int rushnb, int wd, int bn);
int		ft_strlen(char *str);
void	match(int wd, int bn, char *buf);
void	size_rush(char *buf);
void	colle_2(void);
void	displayrush(int *res, int wd, int bn);
void	ft_putnbr(int nb);
void	printrush(int rush, int wd, int bn);
void	ft_putchar(char c);
void	ft_putstr(char *str);

#endif
