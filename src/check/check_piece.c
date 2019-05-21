/*
** EPITECH PROJECT, 2018
** check_piece.c
** File description:
** check_piece.c
*/
#include "my.h"

static int stock_piece(tetri_t *node, char *line)
{
	int i = 0;

	for (; line[i] != '\0'; i++)
		node->piece[node->row][i] = line[i];
	node->piece[node->row][i] = '\0';
	node->row++;
	return (SUCCESS);
}

static int rest_of_string_is_empty(char *str, int nb)
{
	int count = 0;

	while (str[nb]) {
		if (str[nb] != ' ' && str[nb] != '\t' && str[nb] != '\0')
			count++;
		nb++;
	}
	if (count == 0)
		return (1);
	return (84);
}

static int my_strlen_tetrimino(char *str)
{
	int i = 0;

	while (str[i]) {
		if (rest_of_string_is_empty(str, i) == 1)
			return (i);
		i++;
	}
	return (i);
}

int check_line_piece(tetri_t *node, char *line)
{
	int i = 0;
	int nb_star = 0;
	int nb_space = 0;

	for (; line[i] != '\0'; i++) {
		if (line[i] != '*' && line[i] != ' ')
			node->width = -1;
		if (line[i] == '*')
			nb_star++;
		if (line[i] == ' ')
			nb_space++;
	}
	if (STAR_NULL || TOO_MANY_STARS || TOO_MANY_SPACES || TOO_LONG_TETRI)
		node->width = -1;
	if (my_width_before_after(line) == node->width)
		node->reach_max_width = 1;
	if (node->width != -1 && node->height != -1 && node->color != -1)
		stock_piece(node, line);
	return (SUCCESS);
}
