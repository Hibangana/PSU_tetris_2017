/*
** EPITECH PROJECT, 2017
** my_printf.c
** File description:
** my_printf.c
*/

#include <stdarg.h>
#include <stdlib.h>
#include "../include/my.h"

int my_printf(const char *format, ...)
{
	int len = my_strlen(format);

	va_list(ap);
	va_start(ap, format);
	printf_parser(format, len, ap);
	va_end(ap);
	return (0);
}
