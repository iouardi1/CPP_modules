# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/14 00:49:00 by iouardi           #+#    #+#              #
#    Updated: 2023/04/14 00:50:47 by iouardi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= 			RPN

FLAGS=			-Wall -Werror -Wextra -std=c++98 -g -fsanitize=address

CC=				c++

SRC_FILES=		RPN.cpp \
				main.cpp

HEADER_FILES=	RPN.hpp

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