/*
** EPITECH PROJECT, 2018
** check_first_line.c
** File description:
** check_first_line.c
*/

#include "my.h"

static int stock_width(tetri_t *node, char *line, char *stock, int i)
{
	int j = 0;

	for (; line[i] != ' '; i++, j++)
		stock[j] = line[i];
	stock[j] = '\0';
	node->width = my_getnbr(stock);
	return (i);
}

static int stock_height(tetri_t *node, char *line, char *stock, int i)
{
	int j = 0;

	for (j = 0, i = i + 1; line[i] != ' '; i++, j++)
		stock[j] = line[i];
	stock[j] = '\0';
	node->height = my_getnbr(stock);
	return (i);
}

static int stock_color(tetri_t *node, char *line, char *stock, int i)
{
	int j = 0;

	for (j = 0, i = i + 1; line[i] != '\0'; i++, j++)
		stock[j] = line[i];
	stock[j] = '\0';
	node->color = my_getnbr(stock);
	if (node->color >= 0 && node->color <= 7)
		node->color = my_getnbr(stock);
	return (i);
}

static int stock_linked_list(tetri_t *node, char *line)
{
	char stock[100];
	int i = 0;

	i = stock_width(node, line, stock, i);
	i = stock_height(node, line, stock, i);
	i = stock_color(node, line, stock, i);
	return (SUCCESS);
}

int check_line_first_line(tetri_t *node, char *line)
{
	int count_space = 0;
	int i = 0;

	if (line == NULL)
		return (0);
	line = my_str_clean(line);
	for (; line[i] != '\0'; i++) {
		count_space = check_if_space(count_space, i, line);
		if ((line[i] < 48 || line[i] > 57) && line[i] != ' ')
			return (SUCCESS);
	}
	if (count_space != 2)
		return (SUCCESS);
	stock_linked_list(node, line);
	return (SUCCESS);
}
