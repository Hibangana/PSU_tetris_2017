/*
** EPITECH PROJECT, 2018
** my_settings_init.c
** File description:
** my_settings_init.c
*/

#include "my.h"

static char *get_key_value(char *str, char *capname)
{
	char *str2;
	int err;
	int i = 0;
	int j = 0;

	i = setupterm(NULL, 1, &err);
	if (i == -1)
		return (NULL);
	str2 = tigetstr(capname);
	if (str2 == (char *) -1)
		return (NULL);
	if (str2[0] == 27) {
		str[0] = '^';
		str[1] = 'E';
		for (i = 2, j = 1; str2[j] != '\0'; i++, j++)
			str[i] = str2[j];
		str[i] = '\0';
	} else
		str[0] = '\0';
	return (str);
}

static char *init_key(char *key, char *capname)
{
	key = malloc(sizeof(char) * 1024);
	if (!(key || garbage_collector(key, 1)))
		return (NULL);
	key = get_key_value(key, capname);
	if (!(key))
		return (NULL);
	return (key);
}

static int my_init_settings_default(sets_t *sets)
{
	sets->left = init_key(sets->left, "kcub1");
	sets->right = init_key(sets->right, "kcuf1");
	sets->turn = init_key(sets->turn, "kcuu1");
	sets->drop = init_key(sets->drop, "kcud1");
	sets->quit = malloc(sizeof(char) * 1024);
	sets->pause = malloc(sizeof(char) * 1024);
	if ((!(sets->left || sets->right || sets->turn || sets->drop)) ||
	(sets->quit == NULL || sets->pause == NULL))
		return (ERROR);
	sets->quit = my_strcpy(sets->quit, "q");
	sets->pause = my_strcpy(sets->pause, " ");
	sets->hide_next = 1;
	sets->level = 1;
	sets->size_y = 20;
	sets->size_x = 10;
	sets->map_count = 0;
	sets->debug_count = 0;
	sets->opt = 0;
	sets->long_index = 0;
	sets->speed = 8000;
	return (SUCCESS);
}

int my_settings_init(sets_t *sets, tetri_l *tetri_l)
{
	if (my_init_settings_default(sets))
		return (ERROR);
	if (parser_tetriminos(sets, tetri_l))
		return (ERROR);
	return (SUCCESS);
}
