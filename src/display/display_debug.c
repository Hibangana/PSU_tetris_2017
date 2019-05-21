/*
** EPITECH PROJECT, 2018
** display_debug
** File description:
** display_debug
*/

#include "my.h"

static int check_temp(tetri_t *temp)
{
	if (temp->width == -1 || temp->height == -1 || temp->color == -1) {
		my_printf("Error\n");
		return (ERROR);
	}
	return (SUCCESS);
}

static void display_piece(tetri_t *temp)
{
	int i = 0;

	for (i = 0; i != temp->row; i++)
		my_printf("%s\n", temp->piece[i]);
}

static void display_each_tetrimino(tetri_t *temp, int order)
{
	if (temp->order == order) {
		my_printf("Tetriminos :  Name %s :  ", temp->name);
		if (check_temp(temp) != ERROR) {
			my_printf("Size %d*%d :  ", temp->width, temp->height);
			my_printf("Color %d :\n", temp->color);
			display_piece(temp);
		}
	}
}

static void display_tetriminos(sets_t *sets, tetri_l *tetri)
{
	tetri_t *temp = tetri->head;
	int order = 1;
	int i = 0;

	my_printf("Tetriminos :  %d\n", sets->nb_tetriminos);
	for (i = 0; i != sets->nb_tetriminos; i++) {
		order = i + 1;
		temp = tetri->head;
		while (temp != NULL) {
			display_each_tetrimino(temp, order);
			temp = temp->next;
		}
	}
}

void display_debug(sets_t *sets, tetri_l *tetri)
{
	my_printf("*** DEBUG MODE ***\n");
	display_key(sets);
	my_printf("Size :  %i*%i\n", sets->size_y, sets->size_x);
	display_tetriminos(sets, tetri);
	my_printf("Press any key to start Tetris\n");
}
