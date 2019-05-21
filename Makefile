##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile
##

SRC		=	src/main.c					\
			src/display/display_usage.c			\
			src/display/display_debug.c			\
			src/display/display_key.c			\
			src/parser/parser_tetriminos.c			\
			src/parser/parser_tetriminos_lines.c		\
			src/parser/alpha_sort.c			\
			src/parser/my_parser_args.c			\
			src/parser/my_switcher.c			\
			src/check/check_dashes_valid_or_not.c		\
			src/check/check_first_line.c			\
			src/check/check_piece.c			\
			src/check/check_file_name.c			\
			src/check/check_repetitive_param.c		\
			src/check/check_debug_or_not.c			\
			src/check/check_env_term.c			\
			src/check/my_arg_count_check.c			\
			src/check/check_if_space.c			\
			src/generic/my_atoi.c				\
			src/generic/my_strcpy.c			\
			src/game/init_in_game_structures.c		\
			src/game/launch_the_game.c			\
			src/game/stock_new_node.c			\
			src/game/display/display_map_interface.c	\
			src/game/display/display_tetriminos_stack.c	\
			src/game/display/display_next_tetrimino.c	\
			src/game/stack/add_to_stack.c			\
			src/game/stack/remove_invalid_tetri.c		\
			src/my_settings_init.c				\
			src/init_tetri_struct.c				\

OBJ			=	$(SRC:.c=.o)

NAME			=	tetris

CC			=	gcc

CFLAGS			+=	-Wall -Wextra

CPPFLAGS		+=	-I./include

LDFLAGS			+=	-Llib/my/ -lmy -lncurses -g3

all:	$(NAME)

$(NAME):	$(OBJ)
		$(MAKE) -C lib/my/
		$(CC) $(CPPFLAGS) -o $(NAME) $(SRC) $(LDFLAGS)

tests_run:
		make -C tests
		gcovr -r.

tests_clean:
		cd tests/ && $(MAKE) fclean
		rm *gcno
		rm *gcda
		rm *o
		rm unit_test
clean:
		rm -f $(OBJ)
		cd lib/my/ && $(MAKE) clean

fclean:	clean

		rm -f $(NAME)
		cd lib/my/ && $(MAKE) fclean

re:		fclean all

.PHONY:	all re fclean clean
