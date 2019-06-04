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
SRC = main.cpp phonebook.cpp DB.cpp
FLG = -Wall -Wextra -Werror
OBJ = $(SRC:.cpp=.o)
CC = clang++
RM = rm -f

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLG) -o $(NAME) $(OBJ)

%.o: %.cpp
	$(CC) -c -o $@ $<

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all fclean clean all
