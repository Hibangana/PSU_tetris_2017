/*
** EPITECH PROJECT, 2018
** remove
** File description:
** remove
*/

#include "my.h"

void remove_invalid_tetri(tetri_l *tetri)
{
	tetri_t *temp = tetri->head;
	tetri_t *prev = tetri->head;

	if (temp->next != NULL)
		temp = temp->next;
	while (temp != NULL) {
		if (invalid) {
			prev->next = temp->next;
			temp->next = NULL;
			return;
		}
		temp = temp->next;
		prev = prev->next;
	}
}
