# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/21 21:10:50 by iouardi           #+#    #+#              #
#    Updated: 2022/11/22 18:51:54 by iouardi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= 			Animal

CPPFLAGS=			-Wall -Werror -Wextra -Wshadow -Wno-shadow -std=c++98

CC=				c++

SRC_FILES=		main.cpp \
				Animal.cpp \
				Cat.cpp \
				Dog.cpp \
				WrongCat.cpp \
				WrongAnimal.cpp
				

HEADER_FILES=	Animal.hpp \
				Cat.hpp \
				Dog.hpp \
				WrongCat.hpp \
				WrongAnimal.hpp
				
OBJ_FILES=			$(SRC_FILES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ_FILES) $(HEADER_FILES)
	$(CC) $(FLAGS) $(OBJ_FILES) -o $(NAME)

clean:
	find . -name "*.o" -delete

fclean: clean
	rm -f $(NAME)

re: fclean all

