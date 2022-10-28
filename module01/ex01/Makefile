# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/28 21:08:26 by iouardi           #+#    #+#              #
#    Updated: 2022/10/28 21:08:59 by iouardi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= 			Zombie

FLAGS=			-Wall -Werror -Wextra -std=c++98
CC=				c++
SRC_FILES=		zombieHorde.cpp \
				Zombie.cpp \
				main.cpp
HEADER_FILES=	Zombie.hpp

OBJ_FILES=			$(SRC_FILES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ_FILES) $(HEADER_FILES)
	$(CC) $(FLAGS) $(OBJ_FILES) -o $(NAME)
%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	find . -name "*.o" -delete
	find . -name "*.a" -delete

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY:
	all clean fclean re