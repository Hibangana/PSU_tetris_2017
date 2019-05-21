/*
** EPITECH PROJECT, 2018
** some project
** File description:
** who cares
*/

#include "my.h"

char **my_double_strdup(char **str, char **stock, int x, int y)
{
	int i = 0;
	int j = 0;

	stock = malloc(sizeof(char *) * (x + 1));
	if (!(stock || garbage_collector(stock, 1)))
		return (NULL);
	for (i = 0; i != x; i++) {
		stock[i] = malloc(sizeof(char) * (y + 1));
		if (!(stock[i] || garbage_collector(stock[i], 1)))
			return (NULL);
		for (j = 0; j != y; j++)
			stock[i][j] = str[i][j];
		stock[i][j] = '\0';
	}
	return (stock);
}
