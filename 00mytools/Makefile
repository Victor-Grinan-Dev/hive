# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vgrinan <vgrinan@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/12 09:00:34 by vgrinan           #+#    #+#              #
#    Updated: 2021/06/12 12:08:57 by vgrinan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

EXE = victool
LIB = ft_mylib
SRC = main.c src/ft_putchar.c src/ft_putstr.c src/ft_putnbr.c src/rush00.c\
	src/rush01.c src/rush02.c src/rush03.c src/rush04.c
OBJ = *.o
HEADERS = includes/
COMPILER = gcc -Wall -Werror -Wextra

all: $(EXE)

exe: $(EXE)
$(EXE):
	$(COMPILER) $(SRC) $(INC) -I$(HEADERS) -o $(EXE)

lib: 
	$(COMPILER) -c $(SRC) $(INC) -I$(HEADERS)
	ar rc $(LIB) $(OBJ)
	rm $(OBJ)

test: exe
	ar rc $(LIB) $(OBJ)
	norminette $(SCR) $(HEADER)
	./$(EXE)
	rm $(LIB)
	rm $(OBJ)

fclean:
	rm $(LIB)

clean:
	rm $(OBJ)

re: fclean all