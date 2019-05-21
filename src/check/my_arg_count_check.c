/*
** EPITECH PROJECT, 2018
** my_arg_count_check.c
** File description:
** my_arg_count_check.c
*/

#include "my.h"

static int check_nb_arg(int arg_reg_count, int arg_dash_count)
{
	if (arg_reg_count != arg_dash_count) {
		garbage_collector(NULL, 0);
		write(2, ERROR_ARG, my_strlen(ERROR_ARG));
		exit(ERROR);
	}
	return (0);
}

static int main_loop(char **av, int arg_reg_count, int arg_dash_count, int i)
{
	for (i = 1; av[i]; i++) {
		if ((av[i][0] == '-' && av[i][1] == '\0') ||
		(av[i][0] == '-' && av[i][1] != '-' && my_strlen(av[i]) != 2))
			return (ERROR);
		if (av[i][0] == '-' && av[i][1] != '-')
			arg_dash_count++;
		if (av[i][0] == '-' && av[i][1] == '-' && av[i][2] != '-') {
			arg_dash_count++;
			arg_reg_count++;
		}
		if (av[i][0] != '-')
			arg_reg_count++;
		if (av[i][0] == '-' && (DEBUG_OR_HIDE) && av[i][2] == '\0')
			arg_reg_count++;
	}
	check_nb_arg(arg_reg_count, arg_dash_count);
	return(0);
}

int my_arg_count_check(char **av)
{
	int arg_reg_count = 0;
	int arg_dash_count = 0;
	int i = 0;

	if (main_loop(av, arg_reg_count, arg_dash_count, i))
		return (ERROR);
	return (SUCCESS);
}
