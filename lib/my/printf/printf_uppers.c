/*
** EPITECH PROJECT, 2017
** printf_S.c
** File description:
** printf.S.c
*/

#include <stdarg.h>
#include <stdlib.h>
#include "../include/my.h"
#include <stdio.h>

void printf_uppers(va_list ap)
{
	my_printf_uppers(va_arg(ap, char *));
}

void my_printf_uppers(char *str)
{
	for (int i = 0; str[i] != '\0'; i += 1) {
		if (str[i] < 32 || str[i] >= 127) {
			my_putchar('\\');
			printf_oct(str[i]);
		} else {
			my_putchar(str[i]);
		}
	}
}

static int length1(int num)
{
	int i = 0;

	while (num != 0) {
		num = num / 8;
		i += 1;
	}
	return (i);
}

int printf_oct(char c)
{
	int i = 0;
	int length = 0;
	int num = (int)c;
	char *remaind = malloc(sizeof(char) * length1(num) + 1);

	if (num >= 127) {
		my_putstr("177");
		return (0);
	}
	while (num > 0) {
		remaind[i] = num % 8;
		num = num / 8;
		i += 1;
		length += 1;
	}
	printf_octa(remaind, length);
	return (0);
}

int printf_octa(char *remaind, int length)
{
	int i = 0;

	my_putstr("0");
	if (length <= 1)
		my_putstr("0");
	for (i = length-1; i >= 0; i -= 1) {
		my_put_nbr(remaind[i]);
	}
	free(remaind);
	return (0);
}
