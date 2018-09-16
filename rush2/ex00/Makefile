# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kemartin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/10 15:42:31 by kemartin          #+#    #+#              #
#    Updated: 2018/09/16 20:56:23 by kemartin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = colle-2

IDIR = includes
_INC = colle.h
INC = $(patsubst %,$(IDIR)/%,$(_INC))\

SDIR = srcs
_SRC =	colle_2.c \
		ft_putchar.c \
		ft_putstr.c \
		rush00.c \
		rush01.c\
		rush02.c\
		rush03.c \
		rush04.c \
		ft_atoi.c \
		ft_strcmp.c \
		display.c \
		ft_putnbr.c \
		ft_strlen.c \
		ft_fakecat.c

SRC = $(patsubst %,$(SDIR)/%,$(_SRC))

OBJ = $(_SRC:.c=.o)

FLAGS = -Wall -Wextra -Werror
OPTS = -o $(NAME) -I$(IDIR)

.PHONY : all clean fclean re

all : $(NAME)

$(NAME) : $(OBJ)
		@gcc $(FLAGS) $(OPTS) $(SRC)

$(OBJ) : $(SRC)
		@gcc -c -I$(IDIR) $(SRC)

clean :
		@/bin/rm -rf $(OBJ)

fclean : clean
		@/bin/rm -rf $(NAME)

re : fclean all
