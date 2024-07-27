NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
AR = ar rcs

LIB_PATH = ./lib
LIB_NAME = lib.a

SRCS_PATH = ./srcs

SRCS =	$(SRCS_PATH)/*.c
OBJS = $(SRCS:.c=.o)

INCLUDES = ./includes

RESET = \033[0m
BOLD = \033[1m
DIM = \033[2m
UNDERLINE = \033[4m
BLINK = \033[5m
INVERT = \033[7m
LIGHT_BLUE = \033[94m
YELLOW = \033[93m


all: $(NAME)

%.o: %.c
	@$(CC) $(CFLAGS) -I $(INCLUDES) -c $< -o $@
	
$(NAME):
	@echo "$(BOLD)$(LIGHT_BLUE)Linking libft objects...$(RESET)"
	@$(MAKE) -C $(LIB_PATH)
	@cp $(LIB_PATH)/$(LIB_NAME) $(NAME)
	@echo "$(BOLD)$(LIGHT_BLUE)$(NAME) created successfully!$(RESET)"

clean:
	@echo "$(BOLD)$(LIGHT_BLUE)Cleaning libft objects...$(RESET)"
	@$(MAKE) -C $(LIB_PATH) clean
	@echo "$(BOLD)$(LIGHT_BLUE)Complete clean!$(RESET)"

fclean: clean
	@echo "$(BOLD)$(LIGHT_BLUE)Cleaning $(LIB_NAME)...$(RESET)"
	@$(MAKE) -C $(LIB_PATH) fclean
	@$(RM) $(NAME)
	@echo "$(BOLD)$(LIGHT_BLUE)Complete fclean!$(RESET)"

re: fclean all

.PHONY: all clean fclean re