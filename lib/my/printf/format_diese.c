/*
** EPITECH PROJECT, 2017
** format_#.c
** File description:
** format_#.c
*/

#include <stdarg.h>
#include "../include/my.h"
#include <stdlib.h>

int format_diese(va_list ap, const char *format, int i)
{
	int x = va_arg(ap, int);

	if (format[i+2] == 'o') {
		if (x == 0) {
			my_putchar('0');
			return (0);
		} else {
			my_putchar('0');
			printf_o(x);
			return (0);
		}
	}
	format_diese_x(ap, format, i, x);
	return (0);
}

int format_diese_x(va_list ap, const char *format, int i, int x)
{
	(void)ap;
	if (format[i+2] == 'x') {
		if (x == 0) {
			my_putchar('0');
			return (0);
		} else {
			my_putstr("0x");
			printf_hexa2(x);
			return (0);
		}
	}
	if (format[i+2] == 'X') {
		if (x == 0) {
			my_putchar('0');
			return (0);
		} else {
			my_putstr("0X");
			printf_hexa_maj2(x);
			return (0);
		}
	}
	return (0);
}
