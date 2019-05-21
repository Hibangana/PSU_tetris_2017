/*
** EPITECH PROJECT, 2017
** my_revstr.c
** File description:
** my_revstr.c
*/

int len(char const *str);

char *my_revstr(char *str)
{
	int i = len(str) - 1;
	int j = 0;
	char c;

	while (j < (i/2) + 1) {
		c = str[i-j];
		str[i-j] = str[j];
		str[j] = c;
		--j;
	}
	return (str);
}
