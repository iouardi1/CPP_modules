# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/11 15:23:30 by iouardi           #+#    #+#              #
#    Updated: 2022/11/24 18:41:28 by iouardi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= 			PhoneBook
CPPFLAGS=		-Wall -Werror -Wextra -std=c++98 -pedantic
CC=				c++
SRC_FILES=		Contact.cpp \
				main.cpp \
				PhoneBook.cpp
HEADER_FILES=	Contact.hpp \
				PhoneBook.hpp

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
