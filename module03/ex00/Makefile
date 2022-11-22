# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/08 14:17:18 by iouardi           #+#    #+#              #
#    Updated: 2022/11/22 14:06:00 by iouardi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= 			Fixed

CPPFLAGS=			-Wall -Werror -Wextra -std=c++98

CC=				c++

SRC_FILES=		main.cpp \
				ClapTrap.cpp

HEADER_FILES=	ClapTrap.hpp

OBJ_FILES=			$(SRC_FILES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ_FILES) $(HEADER_FILES)
	$(CC) $(FLAGS) $(OBJ_FILES) -o $(NAME)

clean:
	find . -name "*.o" -delete

fclean: clean
	rm -f $(NAME)

re: fclean all

