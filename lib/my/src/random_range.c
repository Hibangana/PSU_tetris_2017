/*
** EPITECH PROJECT, 2018
** some project
** File description:
** who cares
*/

#include <stdio.h>
#include <stdlib.h>

int random_range(int min, int max)
{
	int k = rand() % 1000;

	while (k < min || k > max)
		k = rand() % 1000;
	return (k);
}
