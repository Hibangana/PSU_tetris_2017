/*
** EPITECH PROJECT, 2018
** my_str_clean.c
** File description:
** my_str_clean.c
*/

#include "my.h"

static int is_my_begin_space(char *str)
{
	int i = 0;

	while (str[i] == ' ' || str[i] == '\t')
		i++;
	return (i);
}

int rest_of_string_is_space(char *str, int i)
{
	while (str[i]) {
		if (str[i] != ' ')
			return (0);
		i++;
	}
	return (1);
}

char *my_strcpy_from_n(char *new_str, char *str, int i)
{
	int k = 0;

	while (str[i]) {
		new_str[k] = str[i];
		i++;
		k++;
		if (rest_of_string_is_space(str, i)) {
			new_str[k] = '\0';
			return (new_str);
		}
	}
	new_str[k] = '\0';
	return (new_str);
}

int my_width_before_after(char *str)
{
	char *new_str = malloc(sizeof(char) * (my_strlen(str) + 1));
	int i = is_my_begin_space(str);
	int len = 0;

	if (new_str == NULL || garbage_collector(new_str, 1) == NULL)
		return (-1);
	new_str = my_strcpy_from_n(new_str, str, i);
	len = my_strlen(new_str);
	return (len);
}
