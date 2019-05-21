/*
** EPITECH PROJECT, 2018
** parser.c
** File description:
** parser.c
*/

#include "my.h"

static int malloc_piece_string(tetri_t *node)
{
	int i = 0;

	node->piece = malloc(sizeof(char *) * (node->height + 2));
	if (node->piece == NULL || garbage_collector(node->piece, 1) == NULL)
		return (84);
	for (; i != node->height + 2; i++) {
		node->piece[i] = malloc(sizeof(char) * (node->width + 2));
		if (node->piece[i] == NULL ||
		    garbage_collector(node->piece[i], 1) == NULL)
			return (84);
	}
	return (0);
}

static void check_errors(tetri_t *node, int height)
{
	if (height <= node->height)
		node->height = -1;
	if (node->reach_max_width != 1)
		node->width = -1;
}

int read_piece_lines(tetri_t *node, char *line, int fd)
{
	int height = 0;

	if (malloc_piece_string(node))
		return (84);
	while (line != NULL) {
		free(line);
		if (height > node->height)
			node->height = -1;
		line = get_next_line(fd);
		height++;
		if (line == NULL || line[0] == '\0')
			break;
		check_line_piece(node, line);
	}
	check_errors(node, height);
	free(line);
	return (0);
}
