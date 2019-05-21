##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile
##

SRC	=	$(PATH1)my_putchar.c	\
		$(PATH1)my_put_nbr.c	\
		$(PATH1)my_putstr.c	\
		$(PATH1)my_strlen.c	\
		$(PATH2)my_printf.c	\
		$(PATH2)printf_int.c	\
		$(PATH2)printf_char.c	\
		$(PATH2)printf_str.c	\
		$(PATH2)array_pointer_function.c	\
		$(PATH2)stock.c	\
		$(PATH2)convert.c	\
		$(PATH2)printf_octal.c	\
		$(PATH2)printf_hexa.c	\
		$(PATH2)printf_unsint.c	\
		$(PATH2)printf_ptr.c	\
		$(PATH2)printf_binary.c	\
		$(PATH2)printf_uppers.c	\
		$(PATH2)parser.c	\
		$(PATH2)printf_upperc.c	\
		$(PATH2)format_diese.c	\
		$(PATH2)format_blank.c	\
		$(PATH2)format_plus.c	\
		$(PATH2)parser2.c	\

SRC2	=	$(PATH3)my_putchar.c	\
		$(PATH3)my_put_nbr.c	\
		$(PATH3)my_putstr.c	\
		$(PATH3)my_strlen.c	\
		$(PATH4)my_printf.c	\
		$(PATH4)printf_int.c	\
		$(PATH4)printf_char.c	\
		$(PATH4)printf_str.c	\
		$(PATH4)array_pointer_function.c	\
		$(PATH4)stock.c	\
		$(PATH4)convert.c	\
		$(PATH4)printf_octal.c	\
		$(PATH4)printf_hexa.c	\
		$(PATH4)printf_unsint.c	\
		$(PATH4)printf_ptr.c	\
		$(PATH4)printf_binary.c	\
		$(PATH4)printf_uppers.c	\
		$(PATH4)parser.c	\
		$(PATH4)printf_upperc.c	\
		$(PATH4)format_diese.c	\
		$(PATH4)format_blank.c	\
		$(PATH4)format_plus.c	\
		$(PATH4)parser2.c	\

UNIT	=	unit_test_my_printf.c	\
		unit_test_my_printf1.c	\
		unit_test_my_printf2.c	\
		unit_test_my_printf3.c	\
		unit_test_my_printf4.c	\
		unit_test_my_printf5.c	\
		unit_test_my_printf6.c	\
		unit_test_my_printf7.c	\
		unit_test_my_printf8.c  \

UNIT2	=	tests/unit_test_my_printf.c	\
		tests/unit_test_my_printf1.c	\
		tests/unit_test_my_printf2.c	\
		tests/unit_test_my_printf3.c	\
		tests/unit_test_my_printf4.c	\
		tests/unit_test_my_printf5.c	\
		tests/unit_test_my_printf6.c	\
		tests/unit_test_my_printf7.c	\
		tests/unit_test_my_printf8.c	\

NAME	=	unit_test

OBJ	=	$(SRC:.c=.o) $(UNIT:.c=.o)

CFLAGS	=	-lcriterion --coverage

CPPFLAGS	=	-lcriterion --coverage

PATH1	=	../lib/my/src/

PATH2	=	../lib/my/printf/

PATH3	=	lib/my/src/

PATH4	=	lib/my/printf/

all:	$(NAME)

$(NAME):	$(OBJ)
		cd ../lib/my/src/ && mv *o ../../../
		cd ../lib/my/printf/ && mv *o ../../../
		cd ../ && gcc -o $(NAME) $(SRC2) $(UNIT2) $(CPPFLAGS)
		cd ../ && ./unit_test

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm *gcno

re:	fclean all

.PHONY: all clean re
