# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dcresce <dcresce@student.42lausanne.c    	+#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/05 16:33:55 by dcresce           #+#    #+#              #
#    Updated: 2026/08/12 20:53:57 by dcresce          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Colors
GREEN	= \033[0;32m
RED		= \033[0;31m
YELLOW	= \033[0;33m
RESET	= \033[0m

#Standard

NAME		= megaphone
INC_DIR		= ./
SRCS_DIR 	= ./
OBJS_DIR 	= obj/
CC 			= c++
RM 			= rm -f
CFLAGS 		= -Wall -Wextra -Werror -std=c++98 -g

#Sources

MAIN = megaphone.cpp

SRC_FILES += $(MAIN)

SRCS = $(addprefix $(SRCS_DIR), $(addsuffix .cpp, $(SRC_FILES)))
OBJS = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(SRC_FILES)))

###

OBJSF 		= .cache_exists
INCLUDES 	= -I$(INC_DIR)

all: ${NAME}

bonus: $(OBJS)
	@$(CC) $(CFLAGS) -D BONUS=1 $(OBJS) -o $(NAME)
	@echo -e "$(GREEN)✓ Build OK: bonus $(NAME)$(RESET)"

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo -e "$(GREEN)✓ Build OK: $(NAME)$(RESET)"

$(OBJS_DIR)%.o : $(SRCS_DIR)%.cpp | $(OBJSF)
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(OBJSF):
	@mkdir -p $(OBJS_DIR)

clean:
	@$(RM) -rf $(OBJS_DIR)
	@$(RM) -f $(OBJSF)
	@echo -e "$(RED)✗ Objects removed$(RESET)"

fclean: clean
	@rm -f $(NAME)
	@echo -e "$(RED)✗ $(NAME) removed$(RESET)"

re: fclean all

valgrind: all
	@echo -e "$(YELLOW)🔍 Running valgrind...$(RESET)"
	@valgrind --leak-check=full --show-leak-kinds=all --track-fds=yes \
		--log-fd=2 ./$(NAME) "$(ARGS)"

.PHONY : all clean fclean re valgrind
