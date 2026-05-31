
MAKEFLAGS += --no-print-directory

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC_DIR = src
OBJ_DIR = objects
BIN_DIR = bin

RESET = \033[0m
GREEN = \033[0;32m
CYAN = \033[0;36m
RED = \033[1;91m

NAMES = Colleen Grace Sully
SRCS = $(addprefix $(SRC_DIR)/,$(addsuffix .c,$(NAMES)))
OBJS = $(addprefix $(OBJ_DIR)/,$(addsuffix .o,$(NAMES)))
BINS = $(addprefix $(BIN_DIR)/,$(NAMES))

all: $(BINS)

$(BIN_DIR)/%: $(OBJ_DIR)/%.o
	@mkdir -p $(BIN_DIR)
	@$(CC) $(CFLAGS) $< -o $@
	@printf "$(GREEN)$* ready!$(RESET)\n"

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@printf "$(RED)Running cleanup...$(RESET)\n"
	@rm -rf $(OBJ_DIR)
	@printf "$(CYAN)Cleaning completed!$(RESET)\n"

fclean: clean
	@rm -rf $(BIN_DIR)

re: fclean all

.SECONDARY: $(OBJS)
.PHONY: all clean fclean re
