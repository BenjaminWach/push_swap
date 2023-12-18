# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bwach <bwach@student.42lausanne.ch>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/28 11:02:40 by bwach             #+#    #+#              #
#    Updated: 2023/12/16 19:03:25 by bwach            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#color
CYAN = \033[0;36m
DEFAULT = \033[0m

NAME = push_swap
CC = gcc
CFLAGS = -Wall -Wextra -Werror -g3 -fsanitize=address
RM = rm -f
LIBFT_DIR = libft
PRINTF = printf
BIN = push_swap

SRC_FILES = push_swap.c\
			valid_argv.c\
			all_utils.c\
			all_utils2.c\
			brute_sort_utils.c brute_sort_utils2.c\
			push.c rotate.c swap.c reverse_rot.c\
			give_index.c\
			radix_sort.c brute_sort.c\
			
OBJ = $(SRC_FILES:.c=.o)

all: 
	@echo "$(CYAN)\nCompilation starting .. 😅\n $(DEFAULT)"
	@make $(NAME)

$(NAME): $(OBJ)
	@make -C $(LIBFT_DIR)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ) -L $(LIBFT_DIR) -lft	
	@echo "$(CYAN)\nCompilation done 🤡\n $(DEFAULT)"

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@ -I $(LIBFT_DIR)

norminette: | $(LIBFT_DIR)
	@$(PRINTF) "$(CYAN)\nCheck with dat Norminette: $(BIN) $(DEFAULT)\n"
	@norminette -R CheckForbiddenSourceHeader $(SRC_FILES) $(LIBFT_DIR)/*.c
	@norminette -R CheckDefine $(LIBFT_DIR)/*.c
	@echo "$(CYAN)\tNorminette done and validated 🤣\n $(DEFAULT)"

clean: 
	$(RM) $(OBJ)
	@make clean -C ${LIBFT_DIR}
	@echo "$(CYAN)\tClean done\n $(DEFAULT)"
	
fclean: clean
	$(RM) $(NAME)
	$(RM) $(LIBFT_DIR)/libft.a
	@echo "$(CYAN)\tFclean done\n $(DEFAULT)"

re: fclean all

.PHONY: clean fclean re        