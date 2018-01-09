# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmwalo <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/09 16:49:53 by tmwalo            #+#    #+#              #
#    Updated: 2018/01/09 17:06:59 by tmwalo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = lem-in

CC = gcc

SRC = lem_in.c

OBJ = lem_in.o

DEPS = libft/libft.h

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(SRC) $(DEPS)
	$(CC) $(FLAGS) -I libft/ -o $(OBJ) -c $(SRC)
	$(CC) $(FLAGS) -I libft/ -o $(NAME) $(OBJ) -L libft/ -lft

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
