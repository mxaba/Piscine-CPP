# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mxaba <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/04 13:08:52 by mxaba             #+#    #+#              #
#    Updated: 2019/06/04 13:10:49 by mxaba            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook
SOURCES = main.cpp PhoneBook.cpp DB.cpp
FLAGS = -Wall -Wextra -Werror
OBJECT = $(SOURCES:.cpp=.o)
CLANG = clang++

all: $(NAME)

$(NAME): $(OBJECT)
	$(CLANG) $(FLAGS) -o $(NAME) $(OBJECT)

%.o: %.cpp
	$(CLANG) -c -o $@ $<

clean:
	rm -f $(OBJECT)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all fclean clean all
