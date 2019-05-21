/*
** EPITECH PROJECT, 2018
** launch_the_game.c
** File description:
** launch_the_game.c
*/

#include "my.h"
#include <ncurses/curses.h>

static int getch_quit(sets_t *sets)
{
	int i = 0;

	sets = sets;
	i = getch();
	if (i == 27)
		return (ERROR);
	return (SUCCESS);
}

static void launch_functions(tetri_l *tetri)
{
	initscr();
	curs_set(0);
	timeout(0);
	srand(time(NULL));
	remove_invalid_tetri(tetri);
}

int launch_the_game(sets_t *sets, tetri_l *tetri)
{
	map_t map;
	interface_t interface;
	stack_l stack_l;

	stack_l.head = NULL;
	launch_functions(tetri);
	stock_new_node(sets, tetri, &stack_l);
	if (init_structures(sets, &map, &interface))
		return (ERROR);
	while (1) {
		clear();
		display_next_tetrimino(sets, &map, tetri);
		display_map_interface(sets, &map, &interface);
		display_tetristack(sets, &stack_l, &map, tetri);
		refresh();
		if (getch_quit(sets))
			break;
	}
	endwin();
	return (SUCCESS);
}
