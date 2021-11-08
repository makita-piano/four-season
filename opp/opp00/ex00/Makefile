# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: namakita <namakita@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/08 20:23:52 by namakita          #+#    #+#              #
#    Updated: 2021/11/08 21:12:33 by namakita         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= megaphone
SRCS	= megaphone.cpp
OBJS	= $(SRCS:%.cpp=%.o)
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	g++ $(OBJS) -o $@

%.o: %.cpp
	g++ $(FLAGS) -o $@ -c $<

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
 