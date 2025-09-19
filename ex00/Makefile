# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: omizin <omizin@student.42heilbronn.de>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/18 13:10:34 by omizin            #+#    #+#              #
#    Updated: 2025/09/19 16:20:13 by omizin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex00

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++17

SRCS = main.cpp ClapTrap.cpp
OBJS = $(SRCS:%.cpp=%.o)

RM = rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
