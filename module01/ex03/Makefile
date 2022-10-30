# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/29 12:19:55 by iouardi           #+#    #+#              #
#    Updated: 2022/10/30 17:10:29 by iouardi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= 			Zombie

FLAGS=			-Wall -Werror -Wextra -std=c++98

CC=				c++

SRC_FILES=		Weapon.cpp \
				HumanB.cpp \
				HumanA.cpp \
				main.cpp
				
HEADER_FILES=	Weapon.hpp \
				HumanB.hpp \
				HumanA.hpp

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
