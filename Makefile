# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbueno <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/28 20:47:17 by mbueno            #+#    #+#              #
#    Updated: 2023/05/28 20:57:08 by mbueno           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = philo

SRC		=	main.c\
			utils.c\
			

OBJ		=	$(SRC:%.c=%.o)

CC = cc
CFLAGS = -g -Wall -Wextra -Werror

RM = rm -rf

all: ${NAME}

$(NAME):	$(OBJ)
			$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
