/*
** EPITECH PROJECT, 2018
** check_env_term.c
** File description:
** check_env_term.c
*/

#include "my.h"

int check_env_term(char **env)
{
	int i = 0;

	while (env[i]) {
		if (my_strcmp(env[i], "TERM=") == 1)
			return (SUCCESS);
		i++;
	}
	write(2, ERROR_TERM, my_strlen(ERROR_TERM));
	return (ERROR);
}
