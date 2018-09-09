# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kemartin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/09 22:34:57 by kemartin          #+#    #+#              #
#    Updated: 2018/09/09 22:46:14 by kemartin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = sudoku

SRC = fonction.c main.c check.c error.c display.c

FLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) :
		@gcc $(FLAGS) -o $(NAME) $(SRC)

fclean :
		@/bin/rm -rf $(NAME)

re : fclean all
