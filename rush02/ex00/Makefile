# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: spoblado <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/11 18:30:58 by spoblado          #+#    #+#              #
#    Updated: 2021/07/11 18:41:33 by spoblado         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02
SRC = *.c
all: $(NAME)

RM = /bin/rm -f

FLAGS = -Wall -Wextra -Werror

$(NAME):
		gcc $(FLAGS) -o $(NAME) $(SRC)
CLEAN:
	$(RM) *.o
fclean: CLEAN
			$(RM) $(NAME)
