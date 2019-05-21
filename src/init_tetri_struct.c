/*
** EPITECH PROJECT, 2018
** ds
** File description:
** ds
*/

#include "my.h"

int init_tetri_struct(tetri_t *node)
{
	node->order = 1;
	node->width = -1;
	node->height = -1;
	node->color = -1;
	node->reach_max_width = 0;
	node->row = 0;
	return (SUCCESS);
}
