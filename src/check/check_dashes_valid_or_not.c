/*
** EPITECH PROJECT, 2018
** check_dashes_valid_or_not
** File description:
** check_dashes_valid_or_not
*/

#include "my.h"

int check_if_equal(char *str1[], char **av, int i)
{
	int count = 0;

	for (int k = 0; k != 11; k++) {
		if (my_strcmp(av[i], str1[k]) == 1)
			count++;
	}
	if (count == 0) {
		write(2, ERROR_ARG, my_strlen(ERROR_ARG));
		garbage_collector(NULL, 0);
		exit(ERROR);
	}
	return (SUCCESS);
}

int check_dashes_valid_or_not(int ac, char **av)
{
	char *str1[11] = {PAUSE_LONG, QUIT_LONG, DEBUG_LONG, TURN_LONG,
			RIGHT_LONG, LEFT_LONG, LEVEL_LONG, MAP_LONG,
			DEBUG_LONG, NEXT_LONG, HELP_LONG};
	if (ac == 1)
		return (SUCCESS);
	for (int i = 0; av[i] ; i++)
		if (av[i][0] == '-' && av[i][1] == '-')
			check_if_equal(str1, av, i);
	return (SUCCESS);
}
