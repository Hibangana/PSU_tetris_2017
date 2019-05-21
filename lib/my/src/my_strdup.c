/*
** EPITECH PROJECT, 2017
** my_strdup.c
** File description:
** my_strdup.c
*/
#include <stdlib.h>

char *my_strdup(char const *src)
{
	char *str;
	int i = 0;
	int j = 0;
	int length = 0;

	while (src[length] != '\0')
		length = length + 1;
	str = malloc(sizeof(char) * (length + 1));
	while (src[i] != '\0') {
		str[j] = src[i];
		i = i + 1;
		j = j + 1;
	}
	str[i] = '\0';
	return (str);
}
