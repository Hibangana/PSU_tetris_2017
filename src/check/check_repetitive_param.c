/*
** EPITECH PROJECT, 2018
** check_repetitive_param.c
** File description:
** check_repetitive_param.c
*/

#include "my.h"

void check_same_param(char *str1, char *str2, int i, int j)
{
	if (i != j)
		if (my_strcmp(str1, str2) == 1) {
			write(2, ERROR_REP, my_strlen(ERROR_REP));
			garbage_collector(NULL, 0);
			exit(ERROR);
		}
}

void check_repetitive_param(sets_t *sets)
{
	char *keys[6];
	int i = 0;
	int j = 0;

	keys[0] = sets->left;
	keys[1] = sets->right;
	keys[2] = sets->turn;
	keys[3] = sets->drop;
	keys[4] = sets->pause;
	keys[5] = sets->quit;
	for (i = 0; i != 6; i++) {
		for (j = 0; j != 6; j++)
			check_same_param(keys[i], keys[j], i, j);
	}
}
