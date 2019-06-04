# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: event <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/04 09:31:31 by event             #+#    #+#              #
#    Updated: 2019/06/04 09:34:13 by event            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= megaphone
SOURCE	= megaphone.cpp
OBJECT	= $(SOURCE:.cpp=.o)
FLAGS		= -Wall -Wextra -Werror
CPP		= clang++
REMOVE	= rm -f

all: $(NAME)

$(NAME): $(OBJECT)
	$(CPP) $(FLAGS) $(OBJECT) -o $(NAME)

%.o: %.cpp
	$(CPP) -o $@ -c $< $(FALGS)

clean:
	$(REMOVE) $(OBJECT)

fclean: clean
	$(REMOVE) $(NAME)

re: fclean all

.PHONY: re fclean all clean
