/*
** EPITECH PROJECT, 2017
** printf_hexa.c
** File description:
** printf_hexa.c
*/

#include <stdarg.h>
#include <stdlib.h>
#include "../include/my.h"

static int length(int num)
{
	int i = 0;

	while (num != 0) {
		num = num / 16;
		i += 1;
	}
	return (i);
}

void printf_hexa(va_list ap)
{
	char c;
	int i;
	int num = va_arg(ap, unsigned int);
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

void printf_hexa_maj(va_list ap)
{
	char c;
	int i;
	int num = va_arg(ap, unsigned int);
	char *remaind = malloc(sizeof(char) * length(num) + 1);

	if (num == 0)
		my_put_nbr(0);
	for (i = 0; num > 0; i += 1) {
		remaind[i] = num % 16;
		num = num / 16;
	}
	for (i = i-1; i >= 0; i -= 1) {
		if (remaind[i] > 9) {
			c = remaind[i] + '7';
			my_putchar(c);
		} else
			my_put_nbr(remaind[i]);
	}
	free(remaind);
}

void printf_hexa2(int x)
{
	char c;
	int i;
	int num = x;
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

void printf_hexa_maj2(int x)
{
	char c;
	int i;
	int num = x;
	char *remaind = malloc(sizeof(char) * length(num) + 1);

	if (num == 0)
		my_put_nbr(0);
	for (i = 0; num > 0; i += 1) {
		remaind[i] = num % 16;
		num = num / 16;
	}
	for (i = i-1; i >= 0; i -= 1) {
		if (remaind[i] > 9) {
			c = remaind[i] + '7';
			my_putchar(c);
		} else
			my_put_nbr(remaind[i]);
	}
	free(remaind);
}
