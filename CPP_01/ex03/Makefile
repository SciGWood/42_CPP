# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gdetourn <gdetourn@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/28 12:11:16 by gdetourn          #+#    #+#              #
#    Updated: 2024/05/29 10:21:29 by gdetourn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= WhyViolence
CFLAGS	= -Wall -Wextra -Werror -std=c++98
CC		= c++

SRC	= 	main.cpp \
		Weapon.cpp \
		HumanA.cpp \
		HumanB.cpp

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
	@echo "$(BOLD)$(RED)         🛠️ 🚧      Compiling WhyViolence      🚧🛠️$(RESET)"
	@echo "\n"
	@echo "$(BOLD)$(BLUE)-----------      -----------      -----------$(RESET)"
	@echo "\n"
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "$(BOLD)$(GREEN) 🏌️ 🏑🏏💾🎆🆘🔨     WhyViolence compiled     🔨🆘🎆💾🏌️ 🏑🏏 $(RESET)"
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