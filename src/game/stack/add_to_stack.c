/*
** EPITECH PROJECT, 2018
** add_to_stack.c
** File description:
** add
*/

#include "my.h"

int add_to_stack(tetri_t *tetriminos, stack_l *stack)
{
	stack_t *temp = malloc(sizeof(stack_t));

	if (!(temp || garbage_collector(temp, 1)))
		return (ERROR);
	temp->tetri = my_double_strdup(tetriminos->piece, temp->tetri, xy);
	temp->x = tetriminos->height;
	temp->y = tetriminos->width;
	temp->color = tetriminos->color;
	if (stack->head == NULL) {
		stack->head = temp;
		temp->next = NULL;
	} else {
		temp->next = stack->head;
		stack->head = temp;
	}
	return (SUCCESS);
}

static int each_temp(tetri_t *temp, stack_l *stack, int i)
{
	if (temp->order == i) {
		if (add_to_stack(temp, stack))
			return (ERROR);
		return (1);
	}
	return (SUCCESS);
}

static int check_order(tetri_t *temp, stack_l *stack, int i)
{
	while (temp != NULL) {
		if (each_temp(temp, stack, i))
			return (ERROR);
		temp = temp->next;
	}
	return (SUCCESS);
}

int add_tetri_to_stack(tetri_l *tetri, stack_l *stack, sets_t *sets, int i)
{
	tetri_t *temp;
	int check = 0;

	while (1) {
		temp = tetri->head;
		check = check_order(temp, stack, i);
		if (check == 84)
			return (ERROR);
		else if (check == 1)
			return (SUCCESS);
		i = random_range(1, sets->nb_tetriminos);
	}
	return (SUCCESS);
}
