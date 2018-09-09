/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kemartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 20:42:12 by kemartin          #+#    #+#             */
/*   Updated: 2018/09/09 22:27:19 by kemartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKU_H
# define SUDOKU_H

# include <unistd.h>

void	sudoku(char **av);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	fill_grid(char **av, int grid[9][9]);
void	grid_init(int grid[9][9]);
void	display(int grid[9][9]);
void	cpy_tab(int grid[9][9], int tab[9][9]);
int		check_params(char **av);
int		char_params(char **av, int c);
int		size_param(char **av, int c);
int		check_square(int nbr, int line, int column, int grid[9][9]);
int		check_row(int nbr, int line, int column, int grid[9][9]);
int		process(int grid[9][9], int tab[9][9], int position, int *res);
int		solution(int grid[9][9], int tab[9][9], int *res);
int		is_valid(int grid[9][9]);

#endif
