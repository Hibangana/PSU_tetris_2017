/*
** EPITECH PROJECT, 2018
** alpha_sort.c
** File description:
** alpha_sort.c
*/

#include "my.h"

static void check_ascii_value(tetri_t *temp, tetri_t *temp2)
{
	int i = 0;

	if (temp->name[i] > temp2->name[i])
		temp->order++;
	else if (temp->name[i] == temp2->name[i]) {
		for (i = 0; temp->name[i] == temp2->name[i]; i++);
		if (temp->name[i] > temp2->name[i])
			temp->order++;
	}
}

static int compare_file_name(tetri_t *temp, tetri_l *tetri_l)
{
	tetri_t *temp2 = tetri_l->head;

	while (temp2 != NULL) {
		if (my_strcmp(temp->name, temp2->name) == 0)
			check_ascii_value(temp, temp2);
		temp2 = temp2->next;
	}
	return (SUCCESS);
}

int alpha_sort(tetri_t *temp, tetri_l *tetri_l)
{
	temp = tetri_l->head;
	while (temp != NULL) {
		compare_file_name(temp, tetri_l);
		temp = temp->next;
	}
	return (SUCCESS);
}
