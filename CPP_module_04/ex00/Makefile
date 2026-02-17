# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bfiochi- <bfiochi-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/17 16:13:38 by bfiochi-          #+#    #+#              #
#    Updated: 2026/02/17 16:52:29 by bfiochi-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Polymorphism
CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -Wshadow -std=c++98
RM = rm -rf
SRCS = main.cpp Animal.cpp Cat.cpp Dog.cpp
OBJS = $(SRCS:.cpp=.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	@$(CPP) $(CPPFLAGS) -o $@ $^

%.o: %.cpp
	$(CPP) $(CPPFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all