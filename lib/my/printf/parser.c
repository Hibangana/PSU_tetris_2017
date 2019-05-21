/*
** EPITECH PROJECT, 2017
** parser.c
** File description:
** parser.c
*/

#include <stdarg.h>
#include <stdlib.h>
#include "../include/my.h"

void printf_parser(const char *format, int len, va_list ap)
{
	int i;

	stock();
	stock_format();
	for (i = 0; i < len; i += 1) {
		if (format[i] != '%')
			my_putchar(format[i]);
		else
			i = printf_parser_two(format, len, ap, i);
	}
}

int if_format(const char *format, int i, va_list ap)
{
	char c;

	c = format[i+1];
	i = convert_format(c, ap, i, format);
	i += 1;
	return (i);
}

int is_format(int i, const char *format)
{
	char *str = "# +";
	int len = my_strlen(str);

	for (int j = 0; j < len; j += 1) {
		if (format[i+1] == str[j])
			return (1);
	}
	return (0);
}

int if_flag(const char *format, int i, va_list ap)
{
	char c;

	if (is_flag(i, format) == 1) {
		c = format[i+1];
		convert(c, ap);
		i += 1;
	}
	return (i);
}

int is_flag(int i, const char *format)
{
	char *str = "icsoxXupbSd%C";
	int len = my_strlen(str);

	for (int j = 0; j < len; j += 1) {
		if (format[i+1] == str[j])
			return (1);
	}
	return (0);
}
