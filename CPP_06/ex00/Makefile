# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/13 14:59:51 by gdetourn          #+#    #+#              #
#    Updated: 2024/06/14 12:06:58 by gdetourn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= ScalarConverter
CFLAGS	= -Wall -Wextra -Werror -std=c++98 #-Wshadow -Wno-shadow
CC		= c++

SRC	= 	main.cpp \
		ScalarConverter.cpp

OBJ		= $(SRC:.cpp=.o)

# Colors
RESET = \033[0m
BOLD = \033[1m
RED = \033[91m
GREEN = \033[92m
YELLOW = \033[33m
ORANGE = \033[93m
BLUE = \033[94m

all : $(NAME)

$(NAME): $(OBJ)
	@echo "$(BOLD)$(RED)    🛠️ 🚧      Compiling ScalarConverter      🚧🛠️$(RESET)"
	@echo "\n"
	@echo "$(BOLD)$(BLUE)-----------      -----------      -----------$(RESET)"
	@echo "\n"
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "$(BOLD)$(GREEN) 🧮💾🎆➗     ScalarConverter compiled     ➗🎆💾🧮 $(RESET)"
	@echo "\n"

%.o: %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJ)
	@echo "$(BOLD)$(ORANGE)🧹🧼    .o files deleted    🧼🧹$(RESET)"

fclean: clean
	@rm -rf $(NAME)
	@echo "$(BOLD)$(ORANGE)🧹🧼      exec deleted      🧼🧹$(RESET)"

re: fclean all

.PHONY: all clean fclean re