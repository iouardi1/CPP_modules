# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/25 14:10:02 by iouardi           #+#    #+#              #
#    Updated: 2022/12/03 11:39:00 by iouardi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= 			Bureaucrat

CPPFLAGS=			-Wall -Werror -Wextra -Wshadow -Wno-shadow -std=c++98

CC=				c++

SRC_FILES=		main.cpp \
				Bureaucrat.cpp
				

HEADER_FILES=	Bureaucrat.hpp
				
OBJ_FILES=			$(SRC_FILES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ_FILES) $(HEADER_FILES)
	$(CC) $(FLAGS) $(OBJ_FILES) -o $(NAME)

clean:
	find . -name "*.o" -delete

fclean: clean
	rm -f $(NAME)

re: fclean all

