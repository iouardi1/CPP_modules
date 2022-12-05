# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iouardi <iouardi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/05 19:57:31 by iouardi           #+#    #+#              #
#    Updated: 2022/12/05 19:58:01 by iouardi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= 			Conversion

CPPFLAGS=			-Wall -Werror -Wextra -Wshadow -Wno-shadow -std=c++98

CC=				c++

SRC_FILES=		main.cpp
				


# HEADER_FILES=	Bureaucrat.hpp \
# 				Form.hpp \
# 				ShrubberyCreationForm.hpp \
# 				PresidentialPardonForm.hpp \
# 				RobotomyRequestForm.hpp \
# 				Intern.hpp
				
				
OBJ_FILES=			$(SRC_FILES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ_FILES) $(HEADER_FILES)
	$(CC) $(FLAGS) $(OBJ_FILES) -o $(NAME)

clean:
	find . -name "*.o" -delete

fclean: clean
	rm -f $(NAME)

re: fclean all
