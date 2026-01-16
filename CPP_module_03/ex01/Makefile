# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bfiochi- <bfiochi-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/16 15:09:58 by bfiochi-          #+#    #+#              #
#    Updated: 2026/01/16 15:10:17 by bfiochi-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ClapTrap
CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf
SRCS = main.cpp ClapTrap.cpp ScavTrap.cpp
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