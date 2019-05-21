/*
** EPITECH PROJECT, 2018
** display_next_tetrimino.c
** File description:
** display_next_tetrimino.c
*/

#include "my.h"
#include <ncurses/curses.h>

static void display_next_board(int max_x, int max_y, map_t *map, sets_t *sets)
{
	int x = 0;
	int y = 0;
	char **str = NULL;

	str = init_double_str(str, max_y, max_x);
	if (!(str || garbage_collector(str, 1))) {
		garbage_collector(NULL, 0);
		exit(84);
	}
	getmaxyx(stdscr, y, x);
	for (int i = 0; i <= max_y; i++)
		mvprintw(y_next + i, x_next, "%s", str[i]);
}

static int check_max_xy(int list_max, int max)
{
	if (list_max > max)
		max = list_max;
	return (max);
}

void display_next_tetrimino(sets_t *sets, map_t *m, tetri_l *t)
{
	tetri_t *temp = t->head;
	int max_width = 0;
	int max_height = 0;

	while (temp != NULL) {
		if (temp->width != -1 && temp->height != -1 &&
		t->head->color != -1) {
			max_width = check_max_xy(temp->width, max_width);
			max_height = check_max_xy(temp->height, max_height);
		}
		temp = temp->next;
	}
	max_width += 4;
	max_height += 4;
	display_next_board(max_width, max_height, m, sets);
}
