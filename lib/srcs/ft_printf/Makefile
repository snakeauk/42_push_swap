NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
AR = ar rcs

SRCS_DIR = ./srcs/
INCLUDES_DIR = ../../includes/

SRCS =	$(SRCS_DIR)/ft_outchar.c $(SRCS_DIR)/ft_outstr.c \
		$(SRCS_DIR)/ft_printf_c.c $(SRCS_DIR)/ft_printf.c \
		$(SRCS_DIR)/ft_printf_d.c $(SRCS_DIR)/ft_printf_large_x.c \
		$(SRCS_DIR)/ft_printf_s.c $(SRCS_DIR)/ft_printf_x.c	\
		$(SRCS_DIR)/ft_putunbr_base.c $(SRCS_DIR)/ft_printf_i.c \
		$(SRCS_DIR)/ft_printf_p.c $(SRCS_DIR)/ft_printf_u.c \
		$(SRCS_DIR)/ft_putnbr_base.c

OBJS = $(SRCS:.c=.o)

LIBFT_PATH = ../libft/
LIBFT_NAME = libft.a

all: $(NAME)

.c.o:
	@$(CC) $(CFLAGS) -c $< -o $(<:.c=.o) -I $(INCLUDES_DIR)

$(NAME): $(OBJS)
	@cp $(LIBFT_PATH)/$(LIBFT_NAME) $(NAME)
	@$(AR) $(NAME) $(OBJS)

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re