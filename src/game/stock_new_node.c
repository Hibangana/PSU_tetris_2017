/*
** EPITECH PROJECT, 2018
** stock_new_node.c
** File description:
** stock_new_node.c
*/

#include "my.h"

void stock_new_node(sets_t *sets, tetri_l *tetri, stack_l *stack_l)
{
	int i = 0;

	random_range(1, sets->nb_tetriminos);
	add_tetri_to_stack(tetri, stack_l, sets, i);
}
