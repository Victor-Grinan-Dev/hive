# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vgrinan <vgrinan@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/07 14:07:13 by vgrinan           #+#    #+#              #
#    Updated: 2021/06/09 09:07:32 by vgrinan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SCR = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c\
	srcs/ft_swap.c
OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
HEADER = includes/

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra -c $(SCR) -I$(HEADER)
	ar  rc $(NAME) $(OBJ)
	ranlib $(NAME)
	
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all