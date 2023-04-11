# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/27 22:22:06 by iouardi           #+#    #+#              #
#    Updated: 2023/04/11 08:59:01 by iouardi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= 			btc

FLAGS=			-Wall -Werror -Wextra -std=c++98 -g -fsanitize=address

CC=				c++

SRC_FILES=		BitcoinExchange.cpp \
				main.cpp

HEADER_FILES=	BitcoinExchange.hpp

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