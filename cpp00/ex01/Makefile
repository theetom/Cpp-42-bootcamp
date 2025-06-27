# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: toferrei <toferrei@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/23 11:43:06 by toferrei          #+#    #+#              #
#    Updated: 2025/06/27 20:26:43 by toferrei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	main

SOURCE		=	Contact.cpp \
				PhoneBook.cpp \
				main.cpp

OBJ_DIR		=	Objects/

OBJECTS		=	$(patsubst %.cpp, $(OBJ_DIR)%.o, $(SOURCE))

CC			=	c++
CFLAGS		=	-Wall -Wextra -Werror -g -std=c++98

all: $(NAME)

$(NAME): $(OBJECTS)
	@$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME)
	@echo "All files were created"

$(OBJ_DIR)%.o: %.cpp
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJECTS)
	@rm -rf $(OBJ_DIR)
	@echo "Object files were cleaned"

# Full clean
fclean: clean
	@rm -f $(NAME)
	@echo "All files were cleaned"

# Rebuild everything
re: fclean all

# Phony targets
.PHONY: all clean fclean re