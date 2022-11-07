# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/07 12:21:57 by iouardi           #+#    #+#              #
#    Updated: 2022/11/07 19:16:17 by iouardi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= 			Fixed

FLAGS=			-Wall -Werror -Wextra -std=c++98

CC=				c++

SRC_FILES=		main.cpp \
				Fixed.cpp \
				Point.cpp \
				bsp.cpp

HEADER_FILES=	Fixed.hpp \
				Point.hpp

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
