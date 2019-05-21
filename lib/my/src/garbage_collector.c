/*
** EPITECH PROJECT, 2018
** garbage_collector.c
** File description:
** garbage_collector.c
*/

#include "my.h"

static garbage_l *g_add(garbage_l *list, garbage *temp, char *str)
{
	if (!list) {
		list = malloc(sizeof(garbage_l));
		if (list == NULL)
			return (NULL);
		list->head = NULL;
	}
	temp = malloc(sizeof(garbage));
	if (temp ==  NULL)
		return (NULL);
	temp->ptr = str;
	if (!list->head) {
		list->head = temp;
		temp->next = NULL;
	} else {
		temp->next = list->head;
		list->head = temp;
	}
	return (list);
}

static void g_free(garbage_l *list, garbage *temp)
{
	while (list->head != NULL) {
		temp = list->head;
		list->head = list->head->next;
		free(temp->ptr);
		free(temp);
	}
	free(list);
}

garbage_l *garbage_collector(void *str, int toggle)
{
	static garbage_l *list = NULL;
	garbage *temp = NULL;

	if (toggle == 1)
		list = g_add(list, temp, str);
	if (toggle == 0)
		g_free(list, temp);
	if (list == NULL)
		return (NULL);
	return (list);
}
