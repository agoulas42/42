# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agoulas <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/07 18:55:37 by agoulas           #+#    #+#              #
#    Updated: 2017/11/08 10:43:05 by agoulas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC = gcc

CFLAGS = -Wall -Werror -Wextra
SRC = src/main.c\
		src/ft_putstr.c\
		src/ft_display.c\
		src/ft_printerror.c\

OBJ = main.o\
		ft_putstr.o\
		ft_display.o\
		ft_printerror.o\

HDR =/includes

NAME = ft_display_file 

all: $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME) -I.$(HDR)
	make clean

$(OBJ) :
	$(CC) $(CFLAGS) -c $(SRC)

re:
	make clean
	make all

clean:
	rm -rf *.o

fclean :
	make clean
	rm -rf $(NAME)
