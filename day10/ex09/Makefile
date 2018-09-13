# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kemartin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/10 15:42:31 by kemartin          #+#    #+#              #
#    Updated: 2018/09/12 17:39:32 by kemartin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_advanced_do-op

IDIR = .
_INC = do_op.h
INC = $(patsubst %,$(IDIR)/%,$(_INC))\

SDIR = srcs
_SRC =	do_op.c \
		ft_putchar.c \
		ft_atoi.c \
		ft_strlen.c \
		calcul.c \
		ft_putnbr.c \
		ft_putstr.c \
		ft_strcmp.c

SRC = $(patsubst %,$(SDIR)/%,$(_SRC))

OBJ = $(_SRC:.c=.o)

FLAGS = -Wall -Wextra -Werror
OPTS = -o $(NAME) -I$(IDIR)

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

.phony : all $(NAME) $(OBJ) clean fclean re
