/*
** EPITECH PROJECT, 2018
** get_next_line_two.c
** File description:
** get_next_line_two.c
*/

#include "my.h"

int get_next_line_two(int position, char *stock, char *save, char *buffer)
{
	if (position == 1) {
		free_gnl(stock, buffer);
		return (1);
	}
	if (check_save(save, stock, position) == NULL)
		return (1);
	return (0);
}

int get_next_line_three(int position)
{
	if (position == 3) {
		position = 1;
		return (1);
	}
	if (position == -2)
		return (2);
	return (0);
}

int check_end_of_line_two(char *buffer, int bytes, char *stock)
{
	if (bytes == 0 && stock[0] != '\0') {
		buffer[0] = '\n';
		buffer[1] = '\0';
		bytes = 1;
		free(buffer);
		return (1);
	}
	return (0);
}

void free_gnl(char *stock, char *buffer)
{
	free(stock);
	free(buffer);
}
