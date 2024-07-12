
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
LIBFT_PATH = libft
LFLAGS = -L$(LIBFT_PATH) -lft
IFLAGS = -I$(INC) -I$(LIBFT_PATH)/inc
LIBFT = $(LIBFT_PATH)/libft.a

# ================SRCS=================
SRCS = main.c \
		init.c \

OBJS = $(SRCS:.c=.o)

# ===============BUILD==================
all: $(LIBFT) $(NAME)

$(LIBFT):
	$(MAKE) -C $(LIBFT_PATH)

$(NAME): $(OBJS)
			$(CCFLAGS) $(OBJS) $(IFLAGS) $(LFLAGS) -o $(NAME)
	@echo "[$(GREEN)PHILOS$(NC)] - $<"

%.o: %.c
	echo "[$(GREEN)PHILOS$(NC)] - $<"
	$(CCFLAGS) $(IFLAGS) -c $< -o $@

# ===============CLEAN==================
clean:
	@echo "[$(RED)PHILOS$(NC)] Cleaning object files..."
			$(MAKE) -C $(LIBFT_PATH) clean
			@$(RM) $(OBJS)

fclean: clean
	@echo "[$(RED)PHILOS$(NC)] Cleaning executable file..."
			$(MAKE) -C $(LIBFT_PATH) fclean
			@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
