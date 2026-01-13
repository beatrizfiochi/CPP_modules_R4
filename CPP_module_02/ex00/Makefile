# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bfiochi- <bfiochi-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/13 19:05:39 by bfiochi-          #+#    #+#              #
#    Updated: 2026/01/13 19:06:58 by bfiochi-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fixed
CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf
SRCS = main.cpp fixed.cpp
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