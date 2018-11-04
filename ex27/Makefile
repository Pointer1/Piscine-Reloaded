# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ykopiika <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/29 20:13:43 by ykopiika          #+#    #+#              #
#    Updated: 2018/11/03 18:21:07 by ykopiika         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
F = -Wall -Wextra -Werror -o
C = main.c

all: $(NAME)

$(NAME):
	gcc $(F) $(NAME) $(C)

clean:
	rm -f "*.o"

fclean: clean
	rm $(NAME)

re: clean all
