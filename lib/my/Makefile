##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile
##

CC	=	gcc

SRC	=	src/my_getnbr.c			\
		src/my_strcat.c			\
		src/my_strcmp.c			\
		src/my_strcpy.c			\
		src/my_putchar.c		\
		src/my_swap.c			\
		src/my_put_nbr.c		\
		src/my_putstr.c			\
		src/my_revstr.c			\
		src/my_strlen.c			\
		src/my_strdup.c			\
		src/disp_stdarg.c		\
		src/sum_stdarg.c		\
		src/garbage_collector.c		\
		src/get_next_line.c		\
		src/get_next_line_two.c		\
		src/my_str_clean.c		\
		src/my_width_before_after.c	\
		src/random_range.c		\
		src/my_double_strdup.c		\
		printf/my_printf.c		\
		printf/printf_int.c		\
		printf/printf_char.c		\
		printf/printf_str.c		\
		printf/array_pointer_function.c	\
		printf/stock.c			\
		printf/convert.c		\
		printf/printf_octal.c		\
		printf/printf_hexa.c		\
		printf/printf_unsint.c		\
		printf/printf_ptr.c		\
		printf/printf_binary.c		\
		printf/printf_uppers.c		\
		printf/parser.c			\
		printf/parser2.c		\
		printf/printf_upperc.c		\
		printf/format_diese.c		\
		printf/format_blank.c		\
		printf/format_plus.c		\

OBJ		=	$(SRC:.c=.o)

NAMELIB		=	libmy.a

NAMEH		=	my.h

CPPFLAGS	+=	-I./include

H		=	../../include/

all:		$(NAMELIB)

$(NAMELIB):	$(OBJ)
		ar rc $(NAMELIB) $(OBJ)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAMELIB)

re:		fclean all

.PHONY:		all clean re
