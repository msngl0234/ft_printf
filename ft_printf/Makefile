NAME = libftprintf.a
CC = cc
AR = ar rcs
RM = rm -f 
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_putstr.c \
	   ft_putnbr.c \
	   ft_putnbr_u.c \
	   ft_putchar.c \
	   ft_putpointer.c \
	   ft_puthex.c \
	   ft_printf.c 


OBJ = $(SRCS:.c=.o)

all: $(NAME)
$(NAME): $(OBJ)
	@$(AR) $(NAME) $?
	@echo "✅ 📁 libftprintf.a created"

clean:
	@$(RM) $(OBJ)
	@echo "✅ 🧹 object files deleted"

fclean: clean 
	@$(RM) $(NAME)
	@echo "object files and libftprintf.a deleted"

re: fclean all 
	@echo "✅ 🛠️ project rebuilded"

.PHONY: all clean fclean re
