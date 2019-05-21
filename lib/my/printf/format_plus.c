/*
** EPITECH PROJECT, 2017
** format_plus
** File description:
** format_plus
*/

#include <stdarg.h>
#include "../include/my.h"
#include <stdlib.h>

int format_plus(va_list ap, const char *format, int i)
{
	int x = va_arg(ap, int);

	if (format[i+2] == 'd' || format[i+2] == 'i') {
		if (x >= 0) {
			my_putchar('+');
			my_put_nbr(x);
			return (0);
		} else {
			my_put_nbr(x);
			return (0);
		}
	} else  {
		i += 1;
		if (is_flag(i, format) == 1)
			if_flag(format, i, ap);
	}
	return (0);
}
