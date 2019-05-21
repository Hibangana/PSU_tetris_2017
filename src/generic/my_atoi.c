/*
** EPITECH PROJECT, 2018
** my_atoi.c
** File description:
** my_atoi.c
*/

#include "my.h"

int my_atoi(char *str)
{
	int i = 0;
	int rest = 0;

	if (my_strlen(str) == 0)
		return (-1);
	while (str[i]) {
		if (str[i] > '9' || str[i] < '0')
			return (-1);
		rest = rest * 10 + str[i] - '0';
		i++;
	}
	return (rest);
}
