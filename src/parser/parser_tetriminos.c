/*
** EPITECH PROJECT, 2018
** parser.c
** File description:
** parser.c
*/

#include "my.h"

static int read_tetri_file(tetri_t *node)
{
	char *file_path = my_strcat(node->file_name, "./tetriminos/");
	int fd = open(file_path, O_RDONLY);
	char *line = NULL;

	if (fd == -1 || garbage_collector(file_path, 1) == NULL)
		return (1);
	init_tetri_struct(node);
	line = get_next_line(fd);
	check_line_first_line(node, line);
	if (node->width != -1 && node->height != -1 && node->color != -1) {
		if (read_piece_lines(node, line, fd) == 84)
			return (84);
	} else
		free(line);
	return (SUCCESS);
}

static int stock_name(tetri_t *node, char *file_name)
{
	int i = 0;
	int k = 0;

	for (; file_name[i] != '.'; i++);
	node->name = malloc(sizeof(char) * (i + 1));
	if (node->name == NULL || garbage_collector(node->name, 1) == NULL)
		return (ERROR);
	k = my_strlen(file_name) - my_strlen(".tetrimino");
	for (i = 0; i != k; i++)
		node->name[i] = file_name[i];
	node->name[i] = '\0';
	node->file_name = my_strdup(file_name);
	if (node->file_name == NULL ||
	garbage_collector(node->file_name, 1) == NULL)
		return (ERROR);
	return (SUCCESS);
}

static int add_to_tetri_linked_list(char *file_name, tetri_l *tetri_l)
{
	tetri_t *node = malloc(sizeof(tetri_t));

	if (node == NULL || garbage_collector(node, 1) == NULL)
		return (ERROR);
	if (stock_name(node, file_name))
		return (ERROR);
	if (read_tetri_file(node))
		return (ERROR);
	if (tetri_l->head == NULL) {
		tetri_l->head = node;
		node->next = NULL;
	} else {
		node->next = tetri_l->head;
		tetri_l->head = node;
	}
	return (SUCCESS);
}

static int read_each_file(struct dirent *dp, tetri_l *tetri_l, sets_t *sets)
{
	if (check_file_name(dp->d_name) == 1) {
		if (add_to_tetri_linked_list(dp->d_name, tetri_l))
			return (ERROR);
		sets->nb_tetriminos++;
	}
	return (SUCCESS);
}

int parser_tetriminos(sets_t *sets, tetri_l *tetri_l)
{
	DIR *dir;
	struct dirent *dp;

	dir = opendir("./tetriminos");
	if (dir == NULL)
		return (ERROR);
	dp = readdir(dir);
	if (dp == NULL)
		return (ERROR);
	while (dp != NULL) {
		if (read_each_file(dp, tetri_l, sets))
			return (84);
		dp = readdir(dir);
	}
	closedir(dir);
	return (SUCCESS);
}
