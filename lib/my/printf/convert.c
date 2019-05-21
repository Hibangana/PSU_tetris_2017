/*
** EPITECH PROJECT, 2017
** conversion.c
** File description:
** conversion.c
*/

#include <stdarg.h>
#include "../include/my.h"

int convert(char c, va_list ap)
{
	int i;
	char *str = "icsoxXupbSC";
	int len = my_strlen(str);

	if (c == 'd') {
		p[0](ap);
		return (0);
	} else if (c == '%') {
		my_putchar('%');
		return (0);
	}
	for (i = 0; i < len; i += 1) {
		if (c == str[i])
			p[i](ap);
	}
	return (0);
}

int convert_format(char c, va_list ap, int i, const char *format)
{
	char *str = "# +";
	int len = my_strlen(str);

	for (int j = 0; j < len; j += 1) {
		if (c == str[j]) {
			p1[j](ap, format, i);
			i += 1;
		}
	}
	return (i);
}
