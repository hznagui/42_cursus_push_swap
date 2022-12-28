# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/26 12:21:15 by hznagui           #+#    #+#              #
#    Updated: 2022/12/28 11:22:16 by hznagui          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_FILE = push_swap.c push__swap.c	push___swap.c main.c lst_fonctions.c ft_strlen.c ft_split.c ft_split.c errors.c ft_atoi.c check.c algorithm.c

NAME = push_swap.a

OBJ_FILE = $(SRC_FILE:.c=.o)

BONUS_OBJ = $(BONUS_FILE:.c=.o)

$(NAME): $(OBJ_FILE)
	ar -rc $(NAME) $(OBJ_FILE)

all: $(NAME)

%.o : %.c push_swap.h
	cc -Wall -Wextra -Werror -c $< -o $@

clean:
	rm -f $(OBJ_FILE)
	
fclean:	clean
	rm -f $(NAME) 
	
re: fclean $(NAME)

# bonus: $(OBJ_FILE)
# 	ar -rc $(NAME) $(OBJ_FILE)