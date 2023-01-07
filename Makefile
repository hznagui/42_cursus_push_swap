# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/26 12:21:15 by hznagui           #+#    #+#              #
#    Updated: 2023/01/07 10:19:57 by hznagui          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_FILE = push_swap.c push__swap.c	push___swap.c main.c lst_fonctions.c  ft_split.c  errors.c ft_atoi.c check.c algorithm.c

NAME = push_swap.a

PROGRAM = push_swap

OBJ_FILE = $(SRC_FILE:.c=.o)

%.o : %.c push_swap.h
	cc -Wall -Wextra -Werror -c $< -o $@
	
$(PROGRAM):  $(NAME)
	cc -Wall -Wextra -Werror $< -o $@

all: $(PROGRAM)


$(NAME): $(OBJ_FILE)
	ar -rc $(NAME) $(OBJ_FILE)


clean:
	rm -f $(OBJ_FILE)
	
fclean:	clean
	rm -f $(NAME) $(PROGRAM)
	
re: fclean all
