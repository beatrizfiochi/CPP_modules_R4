# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bfiochi- <bfiochi-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/21 16:56:21 by bfiochi-          #+#    #+#              #
#    Updated: 2025/12/21 17:01:53 by bfiochi-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombieHorde
CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf
SRCS = main.cpp Zombie.cpp zombieHorde.cpp
OBJS = $(SRCS:.cpp=.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	@$(CPP) $(CPPFLAGS) -o $@ $^

%.o: %.cpp
	$(CPP) $(CPPFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean:
	$(RM) $(NAME)

re: fclean all
