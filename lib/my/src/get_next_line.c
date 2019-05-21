/*
** EPITECH PROJECT, 2018
** get_next_line.c
** File description:
** get_next_line.c
*/

#include "my.h"

char *save_rest(char *save, char *buffer, int position)
{
	int i;
	int len = READ_SIZE - position;

	position += 1;
	if (save != NULL) {
		save = malloc(sizeof(char) * (len + 1));
		for (i = 0; i != len - 1; i++, position++)
			save[i] = buffer[position];
		save[i] = '\0';
	}
	return (save);
}

int check_end_of_line(char *buffer, char *stock, int bytes, int fd)
{
	static int b;

	if (b < READ_SIZE && b != 0) {
		free_gnl(stock, buffer);
		return (-2);
	}
	bytes = read(fd, buffer, READ_SIZE);
	if (check_end_of_line_two(buffer, bytes, stock))
		return (3);
	b = bytes;
	if (bytes == 0 || bytes == -1) {
		free_gnl(stock, buffer);
		return (-2);
	}
	buffer[bytes] = '\0';
	for (int i = 0; i != READ_SIZE || buffer[i] != '\0'; i++) {
		if (buffer[i] == '\n')
			return (i);
	}
	return (-1);
}

char *my_realloc(char *stock, char *buffer, int size)
{
	int i = 0;
	int j = 0;
	char *new_stock = malloc(sizeof(char) * 1000);

	for (i = 0; stock[i] != '\0'; i++)
		new_stock[i] = stock[i];
	free(stock);
	for (j = 0; j != size; j++, i++)
		new_stock[i] = buffer[j];
	new_stock[i] = '\0';
	return (new_stock);
}

char *check_save(char *save, char *stock, int position)
{
	int i;

	stock[0] = '\0';
	if (save) {
		for (i = 0; i != (READ_SIZE - position); i++)
			stock[i] = save[i];
		stock[i] = '\0';
		free(save);
	}
	return (stock);
}

char *get_next_line(int fd)
{
	static char *save;
	static int position;
	static int bytes;
	char *stock = malloc(sizeof(char) * READ_SIZE + 1);
	char *buffer = malloc(sizeof(char) * READ_SIZE + 1);

	if (get_next_line_two(position, stock, save, buffer))
		return (NULL);
	while (1) {
		position = check_end_of_line(buffer, stock, bytes, fd);
		if (position == 3 || position == -2)
			return COND_1 && COND_1_2;
		if (position != -1 || bytes > READ_SIZE) {
			save = save_rest(save, buffer, position);
			stock = my_realloc(stock, buffer, position);
			free(buffer);
			return (stock);
		}
		stock = my_realloc(stock, buffer, READ_SIZE);
	}
	return (stock);
}
