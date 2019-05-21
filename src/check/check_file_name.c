/*
** EPITECH PROJECT, 2018
** check_file_name.c
** File description:
** check_file_name.c
*/

#include "my.h"

static int my_strcmp_reversed(char *str, char *search)
{
	int i = 0;
	int k = 0;

	for (i = 0; str[i]; i++);
	for (k = 0; search[k]; k++);
	for (; k >= 0; k--, i--) {
		if (search[k] != str[i])
			return (0);
	}
	return (1);
}

int check_file_name(char *str)
{
	if (my_strlen(str) < my_strlen(".tetrimino"))
		return (84);
	if (my_strcmp_reversed(str, ".tetrimino") == 0)
		return (0);
	return (1);
}
