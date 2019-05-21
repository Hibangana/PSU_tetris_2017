/*
** EPITECH PROJECT, 2018
** display_key.c
** File description:
** display_key.c
*/

#include "my.h"

void check_key(char *str)
{
	if (str[0] == ' ')
		my_printf("(space)\n");
	else
		my_printf("%s\n", str);
}

void display_loop_key(char *str1, char *str2)
{
	my_printf("%s", str1);
	check_key(str2);
}

void display_key(sets_t *sets)
{
	char *str1[6] = {"Key Left :  ", "Key Right :  ", "Key Turn :  ",
			"Key Drop :  ", "Key Quit :  ", "Key Pause :  "};
	char *str2[6] = {sets->left, sets->right, sets->turn,
			sets->drop, sets->quit, sets->pause};

	for (int i = 0; i != 6; i++)
		display_loop_key(str1[i], str2[i]);
	if (sets->hide_next == 1)
		my_printf("Next :  Yes\n");
	else
		my_printf("Next :  No\n");
	if (sets->level != 1)
		my_printf("Level :  %i\n", sets->level);
	else
		my_printf("Level :  1\n");
}
