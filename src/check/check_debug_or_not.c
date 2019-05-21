/*
** EPITECH PROJECT, 2018
** check_debug_or_not.c
** File description:
** check_debug_or_not.c
*/

#include "my.h"

int map_size_arg_check(sets_t *sets, int val_y, int val_x)
{
	if (sets->map_count != 0 && sets->map_count != 2)
		return (ERROR);
	if (sets->map_count == 2) {
		sets->size_y = val_y;
		sets->size_x = val_x;
		if (sets->size_y < 1 || sets->size_x < 1)
			return (ERROR);
	}
	return (SUCCESS);
}

int check_debug_or_not(sets_t *sets, tetri_l *tetri_l)
{
	if (sets->debug_count != 0) {
		display_debug(sets, tetri_l);
		while (1)
			if (get_any_key())
				return (SUCCESS);
	}
	return (SUCCESS);
}
