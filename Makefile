# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: syusof <syusof@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/18 04:29:39 by syusof            #+#    #+#              #
#    Updated: 2015/11/18 04:31:20 by syusof           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = minishell

SRCS = *.c

OFILES = $(SRCS:.c=.o)

FLAGS = -I libft/includes -c

MAIN = minishell.c

OMAIN = $(MAIN:.c=.o)

all: $(NAME)

$(NAME):
	make -C libft/ re
	gcc $(FLAGS) $(SRCS)
	gcc -o $(NAME) $(OFILES) -L libft/ -lft

clean:
	rm -f $(OFILES)
	make -C libft/ clean

fclean: clean
	rm -f $(NAME)
	make -C libft/ fclean

re: fclean all
