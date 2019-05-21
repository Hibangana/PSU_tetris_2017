/*
** EPITECH PROJECT, 2017
** printf_ptr.c
** File description:
** printf_ptr.c
*/

#include <stdarg.h>
#include "../include/my.h"
#include <stdlib.h>

static int length(long num)
{
	int i = 0;

	while (num != 0) {
		num = num / 16;
		i += 1;
	}
	return (i);
}

void printf_hexa1(va_list ap)
{
	char c;
	int i;
	long num = va_arg(ap, long);
	char *remaind = malloc(sizeof(char) * length(num) + 1);

	if (num == 0)
		my_put_nbr(0);
	for (i = 0; num > 0; i += 1) {
		remaind[i] = num % 16;
		num = num / 16;
	}
	for (i = i-1; i >= 0; i -= 1) {
		if (remaind[i] > 9) {
			c = remaind[i] + 'W';
			my_putchar(c);
		} else
			my_put_nbr(remaind[i]);
	}
	free(remaind);
}

void printf_ptr(va_list ap)
{
	my_putstr("0x");
	printf_hexa1(ap);
}
