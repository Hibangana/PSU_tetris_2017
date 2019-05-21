/*
** EPITECH PROJECT, 2017
** my_strcat.c
** File description:
** my_strcat.c
*/

#include "my.h"

char *my_strcat(char *dest, char const *src)
{
	int len = my_strlen(src) + my_strlen(dest) + 1;
	char *temp = malloc(sizeof(char) * len);
	int i = 0;
	int j = 0;

	for (; src[i] != '\0'; i++, j++)
		temp[j] = src[i];
	for (i = 0; dest[i] != '\0'; i++, j++)
		temp[j] = dest[i];
	temp[j] = '\0';
	return (temp);
}
