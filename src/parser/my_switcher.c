/*
** EPITECH PROJECT, 2018
** my_switcher
** File description:
** my_switcher.c
*/

#include "my.h"

static void my_exit_error_check(char *optarg, int nb)
{
	if (nb == 0) {
		garbage_collector(NULL, 0);
		write(2, ERROR_ARG, my_strlen(ERROR_ARG));
		exit(ERROR);
	}
	if (my_strlen(optarg) > 1024) {
		garbage_collector(NULL, 0);
		write(2, ERROR_ARG, my_strlen(ERROR_ARG));
		exit(ERROR);
	}
}

static void my_switcher_part_four(sets_t *sets)
{
	switch (sets->opt) {
	case 'w':
		sets->hide_next = 0;
		break;
	case 'D':
		sets->debug_count++;
		break;
	}
}

static void my_switcher_part_three(sets_t *sets)
{
	switch (sets->opt) {
	case 'd':
		my_exit_error_check(optarg, 1);
		my_strcpy(sets->drop, optarg);
		break;
	case 'q':
		my_exit_error_check(optarg, 1);
		my_strcpy(sets->quit, optarg);
		break;
	case 'p':
		my_exit_error_check(optarg, 1);
		my_strcpy(sets->pause, optarg);
		break;
	default:
		my_switcher_part_four(sets);
		break;
	}
}

static void my_switcher_part_two(char **av, sets_t *sets)
{
	switch (sets->opt) {
	case 'h':
		display_usage(av[0]);
		garbage_collector(NULL, 0);
		exit(0);
		break;
	case 'r':
		my_exit_error_check(optarg, 1);
		my_strcpy(sets->right, optarg);
		break;
	case 't':
		my_exit_error_check(optarg, 1);
		my_strcpy(sets->turn, optarg);
		break;
	default:
		my_switcher_part_three(sets);
		break;
	}
}

void my_switcher_part_one(char **av, sets_t *sets)
{
	switch (sets->opt) {
	case 'L':
		sets->level = my_atoi(optarg);
		if (sets->level == (-1) || sets->level == 0)
			my_exit_error_check(optarg, 0);
		break;
	case 'l':
		my_exit_error_check(optarg, 1);
		my_strcpy(sets->left, optarg);
		break;
	default:
		my_switcher_part_two(av, sets);
		break;
	}
}
