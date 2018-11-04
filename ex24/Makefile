# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ykopiika <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/29 16:51:50 by ykopiika          #+#    #+#              #
#    Updated: 2018/10/29 16:54:31 by ykopiika         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

S = ./srcs/
I = -Wall -Wextra -Werror -c -I
H = ./includes/*.h
SRC = $(S)ft_putchar.c $(S)ft_putstr.c $(S)ft_strcmp.c \
		$(S)ft_strlen.c $(S)ft_swap.c
SRCOB = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all: $(NAME)

$(NAME):
	gcc $(I) $(H) $(SRC)
	ar rc $(NAME) $(SRCOB)

clean:
	/bin/rm -f $(SRCOB)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
