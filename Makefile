CC = cc
CFLAGS = -Wall -Wextra -Werror -g #-fsanitize=address,undefined
NAME = arrays

SRC = utils.c methods.c errors.c
OBJ_DIR = obj/
OBJS = $(addprefix $(OBJ_DIR), $(SRC:%.c=%.o))

ROOT_DIR = ./

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(NAME).c -o $(NAME) $(OBJS)

$(OBJ_DIR)%.o: $(ROOT_DIR)%.c
	@mkdir -p $(OBJ_DIR)
	@$(CC) -c $(CFLAGS) $^ -o $@

clean:
	@rm -rf $(OBJ_DIR) $(NAME).dSYM valgrind_logs.txt

fclean: clean
	@rm -rf $(NAME)

re: fclean all

v: re
	@valgrind --show-leak-kinds=all --leak-check=full --log-file="valgrind_logs.txt" ./arrays