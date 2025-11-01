SRC = ft_printf.c ft_putchar.o ft_putstr.c ft_putnbr.c print_add.c put_hexa_lowercase.c put_hexa_uppercase.c put_unsigned_int.c
OBJ = $(SRC:.c=.o)
HEADER = ft_printf.h
NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror 

all : $(NAME)

$(NAME) : $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o : %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean : 
	rm $(OBJ)

fclean : clean
	rm $(NAME)

re : fclean all

.PHONY : fclean all re clean
