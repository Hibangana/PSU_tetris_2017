/*
** EPITECH PROJECT, 2018
** main
** File description:
** main
*/

#include "my.h"

static int init_structure(sets_t *sets, tetri_l *tetri_l)
{
	tetri_l->head = NULL;
	sets->nb_tetriminos = 0;
	return (SUCCESS);
}

int get_any_key(void)
{
	struct termios argp_c;
	struct termios argp_s;
	char c = '\0';

	ioctl(0, TCGETS, &argp_s);
	argp_c = argp_s;
	argp_c.c_lflag &= ~ECHO;
	argp_c.c_lflag &= ~ICANON;
	ioctl(0, TCSETS, &argp_c);
	read(0, &c, 1);
	ioctl(0, TCSETS, &argp_s);
	if (c != '\0')
		return (ERROR);
	return (SUCCESS);
}

int main(int ac, char **av, char **env)
{
	sets_t sets;
	tetri_l tetri_l;
	tetri_t *temp;

	if (!(env[0]) || term_check || init_struct || settings_init)
		return (ERROR);
	if (arg_check_count || arg_dash_check) {
		garbage_collector(NULL, 0);
		return (ERROR);
	}
	temp = tetri_l.head;
	alpha_sort(temp, &tetri_l);
	my_parser_args(ac, av, &sets, &tetri_l);
	if (launch_the_game(&sets, &tetri_l)) {
		garbage_collector(NULL, 0);
		return(ERROR);
	}
	garbage_collector(NULL, 0);
	return (SUCCESS);
}
