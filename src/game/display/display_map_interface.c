/*
** EPITECH PROJECT, 2018
** display_map.c
** File description:
** display_map.c
*/

#include "my.h"
#include <ncurses/curses.h>

static void display_interface(sets_t *sets, map_t *map, interface_t *inter)
{
	int i = 0;
	int x = 0;
	int y = 0;
	clock_t t = clock() - inter->timer_start;

	getmaxyx(stdscr, y, x);
	for (i = 0; i < 11; i++) {
		mvprintw(y_inter, x_inter, "%s", inter->border[i]);
		if (i == 2)
			mvprintw(stats_y_x, HIGHSCORE, i_highscore);
		if (i == 3)
			mvprintw(stats_y_x, SCORE, i_score);
		if (i == 5)
			mvprintw(stats_y_x, LINE, inter->line);
		if (i == 6)
			mvprintw(stats_y_x, LEVEL, sets->level);
		if (i == 8)
			mvprintw(stats_y_x, TIMER, current_time);
	}
}

int display_map_interface(sets_t *sets, map_t *map, interface_t *inter)
{
	char *message = "Please enlarge your terminal or reduce the map size";
	int x = 0;
	int y = 0;
	int i = 0;

	getmaxyx(stdscr, y, x);
	if (x < sets->size_x || y < sets->size_y * 1.15)
		mvprintw(y / 2, x_message, "%s", message);
	else {
		for (i = 0; i < sets->size_x; i++)
			mvprintw(y_map, x_map, "%s", map->map[i]);
		display_interface(sets, map, inter);
	}
	return (0);
}
