/*
** EPITECH PROJECT, 2018
** my_str_clean
** File description:
** my_minishell
*/

#include "my.h"

int my_begin_is_space(char *str)
{
	int i = 0;

	while (str[i] == ' ' || str[i] == '\t')
		i++;
	return (i);
}

char *my_str_clean(char *str)
{
	char *av = malloc(sizeof(char) * (my_strlen(str) + 1));
	int i = my_begin_is_space(str);
	int k = 0;

	if (garbage_collector(av, 1) == NULL)
		return (0);
	while (str[i] != '\0') {
		if ((str[i] == ' ' || str[i] == '\t') && str[i + 1] != ' ' &&
		str[i + 1] != '\0' && str[i + 1] != '\t') {
			av[k] = ' ';
			k++;
		}
		if (str[i] != ' ' && str[i] != '\t') {
			av[k] = str[i];
			k++;
		}
		i++;
	}
	av[k] = '\0';
	return (av);
}
