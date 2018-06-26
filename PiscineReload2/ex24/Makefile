# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agoulas <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/07 18:03:51 by agoulas           #+#    #+#              #
#    Updated: 2017/11/07 18:04:15 by agoulas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

C = gcc

CFLAGS =-Wall -Werror -Wextra

SRC  =srcs/ft_swap.c\
	  srcs/ft_strlen.c\
	  srcs/ft_putstr.c\
	  srcs/ft_putchar.c\
	  srcs/ft_strcmp.c

OBJ  =ft_swap.o\
	  ft_strlen.o\
	  ft_putstr.o\
	  ft_putchar.o\
	  ft_strcmp.o

HDR =includes

TARGET = libft.a


all: TARGET

TARGET:
	gcc -c $(SRC) -I$(HDR)
	ar rc $(TARGET) $(OBJ)
	ranlib $(TARGET)


clean :
	/bin/rm -rf $(OBJ)

fclean: clean
	/bin/rm -f $(TARGET)

re: fclean all
