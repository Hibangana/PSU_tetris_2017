/*
** EPITECH PROJECT, 2018
** some project
** File description:
** who cares
*/

#include "my.h"
#include <ncurses/curses.h>

static void display_current_tetri(sets_t *sets, stack_t *temp, map_t *map)
{
	static int count;
	static int pos;
	int i = 0;
	int x = 0;
	int y = 0;

	count++;
	getmaxyx(stdscr, y, x);
	for (i = 0; i != temp->x; i++)
		mvprintw(y_tetri + 1 + pos, x_tetri, "%s", temp->tetri[i]);
	if (count == sets->speed) {
		count = 0;
		if (y_tetri + 1 + pos + 1 < map_bottom)
			pos++;
	}
}

static void display_next_tetri(sets_t *sets, stack_t *temp, map_t *map)
{
	int i = 0;
	int x = 0;
	int y = 0;

	getmaxyx(stdscr, y, x);
	for (i = 0; i != temp->x; i++)
		if (temp->y == 1 || temp->y == 2)
			mvprintw(y_tetri_2, x_tetri_2, "%s", temp->tetri[i]);
		else
			mvprintw(y_tetri_2, x_tetri_3, "%s", temp->tetri[i]);
}

int display_tetristack(sets_t *sets, stack_l *stack, map_t *map, tetri_l *tetri)
{
	static int count;
	stack_t *temp = stack->head;

	while (temp->next != NULL)
		temp = temp->next;
	display_current_tetri(sets, temp, map);
	if (count == 0)
		stock_new_node(sets, tetri, stack);
	temp = stack->head;
	while (temp->next->next != NULL)
		temp = temp->next;
	display_next_tetri(sets, temp, map);
	count++;
	return (SUCCESS);
}
