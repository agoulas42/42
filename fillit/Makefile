# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agoulas <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/08 15:28:36 by agoulas           #+#    #+#              #
#    Updated: 2017/12/20 16:06:24 by agoulas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = fillit
CC = gcc
CFLAGS = -Wall -Werror -Wextra
SRCDIR = ./src
OBJDIR = ./object
FILEDIR = ./fillit

SOURCES = main.c\
		  ft_lstadd_last.c\
		  ft_strlen.c\
		  ft_add_tetris.c\
		  ft_strncat.c\
		  ft_hashtag.c\
		  ft_putchar.c\
		  fill_tetris.c\
		  ft_tetris.c\
		  ft_tetris_tab.c\
		  ft_resolution.c\
		  ft_init_content.c\
		  ft_init_tetris.c\
		  ft_init_stringtab.c\
		  ft_tab.c\
		  map.c\
		  place.c


OBJS = $(SOURCES:.c=.o)
HDR = ft_function.h

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -I $(HDR) -o $(NAME)

$(OBJS): %.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $< -I$(HDR)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
