
# ==============COLORS=================
MAKEFLAGS += --silent
RED=\033[1;31m
GREEN=\033[1;32m
NC=\033[0m

# ===============FLAGS=================
CCFLAGS = cc -Wall -Wextra -Werror -ggdb3
RM = rm -rf
NAME = philos

SRC_DIR = src
INC = inc
IFLAGS = -I$(INC)

# ================SRCS=================
SRCS = main.c \
		init.c \
		parser.c \
		utils.c \
		philos.c \
		cleanup.c \
		panda_fun.c \

OBJS = $(SRCS:.c=.o)

# ===============BUILD==================
all: $(NAME)

$(NAME): $(OBJS)
			$(CCFLAGS) $(OBJS) $(IFLAGS) -o $(NAME)
	@echo "[$(GREEN)PHILOS$(NC)] - $<"

%.o: %.c
	echo "[$(GREEN)PHILOS$(NC)] - $<"
	$(CCFLAGS) $(IFLAGS) -c $< -o $@

# ===============CLEAN==================
clean:
	@echo "[$(RED)PHILOS$(NC)] Cleaning object files..."
			@$(RM) $(OBJS)

fclean: clean
	@echo "[$(RED)PHILOS$(NC)] Cleaning executable file..."
			@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
