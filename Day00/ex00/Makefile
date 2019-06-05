# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mxaba <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/04 09:31:31 by mxaba             #+#    #+#              #
#    Updated: 2019/06/04 09:34:13 by mxaba            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= megaphone
SOURCE	= megaphone.cpp
OBJECTECT	= $(SOURCE:.cpp=.o)
FLAGS		= -Wall -Wextra -Werror
CPP		= clang++
REMOVE	= rm -f

all: $(NAME)

$(NAME): $(OBJECTECT)
	$(CPP) $(FLAGS) $(OBJECTECT) -o $(NAME)

%.o: %.cpp
	$(CPP) -o $@ -c $< $(FALGS)

clean:
	rm -f $(OBJECTECT)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: re fclean all clean
