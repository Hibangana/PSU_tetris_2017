 /*
** EPITECH PROJECT, 2018
** init_in_game_structures.c
** File description:
** init_in_game_structures.c
*/

#include <time.h>
#include "my.h"

static char *init_first_last_line(char *str, int y)
{
	int j = 0;

	str[j] = '+';
	for (j = 1; j < y - 1; j++)
		str[j] = '-';
	str[j++] = '+';
	str[j++] = '\0';
	return (str);
}

static char *init_other_lines(char *str, int y)
{
	int j = 0;

	str[j] = '|';
	for (j = 1; j < y - 1; j++)
		str[j] = ' ';
	str[j++] = '|';
	str[j++] = '\0';
	return (str);
}

char **init_double_str(char **str, int x, int y)
{
	int i = 0;

	str = malloc(sizeof(char *) * (x + 1));
	if (!(str || garbage_collector((char *)str, 1)))
		return (NULL);
	for (i = 0; i != x + 1; i++) {
		str[i] = malloc(sizeof(char) * (y + 1));
		if (!(str[i] || garbage_collector(str[i], 1)))
			return (NULL);
	}
	for (i = 0; i < x; i++) {
		if (i == 0 || i == x - 1)
			str[i] = init_first_last_line(str[i], y);
		else
			str[i] = init_other_lines(str[i], y);
	}
	return (str);
}

static void init_interface(interface_t *interface)
{
	interface->highscore = 0;
	interface->score = 0;
	interface->line = 0;
	interface->timer_start = clock();
	interface->level = 0;
}

int init_structures(sets_t *sets, map_t *m, interface_t *inter)
{
	sets->size_x += 2;
	sets->size_y += 2;
	m->map = init_double_str(m->map, sets->size_x, sets->size_y);
	inter->border = init_double_str(inter->border, 11, 30);
	if (!(m->map || inter->border))
		return (ERROR);
	init_interface(inter);
	return (SUCCESS);
}
