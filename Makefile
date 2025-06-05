CC		= gcc
AR		= ar rcs
CFLAGS	= -Wall -Wextra -Werror
NAME	= libftprintf.a
LIBFT	= libft/libft.a
INCLUDE	= -I . -I./libft
SRC		= ft_format_handler.c \
		ft_printf.c \
		ft_str_handler.c \
		ft_ptr_handler.c
OBJ		= $(SRC:.c=.o)

all: $(NAME)

# execute libft's makefile
$(LIBFT):
	@$(MAKE) -C libft --silent

$(NAME): $(LIBFT) $(OBJ)
	@cp $(LIBFT) $(NAME)
	@$(AR) $(NAME) $(OBJ)

clean:
	@$(MAKE) clean -C libft
	@rm -f $(OBJ)

fclean:
	@$(MAKE) fclean -C libft
	@rm -f $(NAME)

re: fclean all

%.o: %.c ft_printf.h
	@$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

.PHONY: all clean fclean re