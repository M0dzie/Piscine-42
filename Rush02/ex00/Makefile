# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thmeyer <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/23 12:48:47 by thmeyer           #+#    #+#              #
#    Updated: 2022/07/24 18:32:39 by thmeyer          ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME = rush-02

SRC = ft_lib.c ft_lib_2.c check_error.c main.c

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -o $(NAME) $(SRC)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
