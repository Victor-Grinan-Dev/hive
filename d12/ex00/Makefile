# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vgrinan <vgrinan@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/10 07:26:53 by vgrinan           #+#    #+#              #
#    Updated: 2021/06/13 14:14:04 by vgrinan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

EXE = papi
NAME = libft.a
SCR = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_display_file.c main.c
OBJ = ft_putchar.o ft_putstr.o ft_display_file.o main.o
HEADER = includes/

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra -c $(SCR) -I$(HEADER) -o$(NAME)
	ar  rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

cleanx:
	rm -f $(EXE)

cleancore:
	rm -f core

exe: $(EXE)

$(EXE):
	gcc -Wall -Werror -Wextra $(SCR) -I$(HEADER)
	norminette -R CheckForbiddenSourceHeader $(SCR) $(HEADER)