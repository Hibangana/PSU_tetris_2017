/*
** EPITECH PROJECT, 2017
** parser2.c
** File description:
** parser2.c
*/

#include <stdarg.h>
#include <stdlib.h>
#include "../include/my.h"

int printf_parser_two(const char *format, int len, va_list ap, int i)
{
	(void)len;
	if (is_format(i, format) == 0 && is_flag(i, format) == 1)
		i = if_flag(format, i, ap);
	else if (is_format(i, format) == 1 && is_flag(i, format) == 0)
		i = if_format(format, i, ap);
	else
		my_putchar('%');
	return (i);
}
