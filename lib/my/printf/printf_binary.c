/*
** EPITECH PROJECT, 2017
** printf_binary.c
** File description:
** printf_binary.c
*/

#include <stdarg.h>
#include <stdlib.h>
#include "../include/my.h"

static int length1(int num)
{
	int i = 0;

	while (num != 0) {
		num = num / 16;
		i += 1;
	}
	return (i);
}

void printf_binary(va_list ap)
{
	int i = 0;
	int length = 0;
	int num = va_arg(ap, unsigned int);
	char *remaind = malloc(sizeof(char) * length1(num) + 1);

	if (num == 0)
		my_put_nbr(0);
	while (num > 0) {
		remaind[i] = num % 2;
		num = num / 2;
		i += 1;
		length += 1;
	}
	for (i = length-1; i >= 0; i -= 1)
		my_put_nbr(remaind[i]);
	free(remaind);
}
