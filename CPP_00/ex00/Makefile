# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/21 10:25:45 by gdetourn          #+#    #+#              #
#    Updated: 2024/05/21 12:01:55 by gdetourn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= Megaphone
CFLAGS	= -Wall -Wextra -Werror -std=c++98
CC		= c++

SRC	= 	megaphone.cpp \

OBJ		= $(SRC:.cpp=.o)

all : $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
		$(CC) $(CFLAGS) -c $< -o $@

clean:
		rm -rf $(OBJ)

fclean: clean
		rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re