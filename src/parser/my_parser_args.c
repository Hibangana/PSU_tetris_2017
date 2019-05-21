/*
** EPITECH PROJECT, 2018
** my_parser_args.c
** File description:
** my_parser_args.c
*/

#include "my.h"

const struct option long_options[] = {
	{"help", no_argument, 0, 'h'},
	{"-L", required_argument, 0, 'L'},
	{"level=", required_argument, 0, 'L'},
	{"-l", required_argument, 0, 'l'},
	{"key-left=", required_argument, 0, 'l'},
	{"-r", required_argument, 0, 'r'},
	{"key-right=", required_argument, 0, 'r'},
	{"-t", required_argument, 0, 't'},
	{"key-turn=", required_argument, 0, 't'},
	{"-d", required_argument, 0, 'd'},
	{"key-drop=", required_argument, 0, 'd'},
	{"-q", required_argument, 0, 'q'},
	{"key-quit=", required_argument, 0, 'q'},
	{"-p", required_argument, 0, 'p'},
	{"key-pause=", required_argument, 0, 'p'},
	{"map-size=", optional_argument, 0, 'm'},
	{"-w", no_argument, 0, 'w'},
	{"without-next", no_argument, 0, 'w'},
	{"-D", no_argument, 0, 'D'},
	{"debug", no_argument, 0, 'D'},
	{0, 0, 0, 0 }
};

static void check_size_map_tetri(sets_t *sets, tetri_l *tetri_l)
{
	tetri_t *temp = tetri_l->head;
	int count = 0;

	while (temp != NULL) {
		if (temp->width > sets->size_y || temp->height > sets->size_x) {
			write(2, ERROR_MAP_FIT, my_strlen(ERROR_MAP_FIT));
			garbage_collector(NULL, 0);
			exit(ERROR);
		}
		if (temp->width != -1 && temp->height != -1 &&
		temp->color != -1)
			count++;
		temp = temp->next;
	}
	if (count < 1) {
		write(2, ERROR_NO_VALID_TETRI, my_strlen(ERROR_NO_VALID_TETRI));
		exit(ERROR);
	}
}

static void check_params(sets_t *sets, tetri_l *tetri_l, int nb_y, int nb_x)
{
	if (map_size_arg_check(sets, nb_y, nb_x) == 84) {
		write(2, ERROR_MAP, my_strlen(ERROR_MAP));
		garbage_collector(NULL, 0);
		exit(84);
	}
	check_repetitive_param(sets);
	check_size_map_tetri(sets, tetri_l);
	check_debug_or_not(sets, tetri_l);
}

static void check_number_map_size(int nb)
{
	if (nb < 0) {
		write(2, ERROR_MAP, my_strlen(ERROR_MAP));
		garbage_collector(NULL, 0);
		exit(ERROR);
	}
}

int my_parser_args(int ac, char **av, sets_t *sets, tetri_l *tetri_l)
{
	int i = 0;
	int stock[1024][2];

	while (OPT_LONG(OPT_LONG_FLAGS) != -1) {
		my_switcher_part_one(av, sets);
		switch (sets->opt) {
		case 'm':
			sets->map_count++;
			stock[0][i] = my_atoi(optarg);
			check_number_map_size(stock[0][i]);
			i++;
			break;
		}
	}
	check_params(sets, tetri_l, stock[0][0], stock[0][1]);
	return (SUCCESS);
}
