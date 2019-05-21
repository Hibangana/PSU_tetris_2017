/*
** EPITECH PROJECT, 2018
** check_if_space.c
** File description:
** check_if_space.c
*/

#include "my.h"

int check_if_space(int count_space, int i, char *line)
{
	if (line[i] == ' ')
		count_space++;
	return (count_space);
}
