/*
** EPITECH PROJECT, 2017
** sum_stdarg.c
** File description:
** sum_std
*/

#include <stdarg.h>

int my_strlen(char const *str);

int sum_stdarg(int i, int nb, ...)
{
	va_list ap;
	int k;
	int result = 0;

	va_start(ap, nb);
	if (i == 0) {
		for (k = 0; k < nb; k += 1)
			result = result + va_arg(ap, int);
		va_end(ap);
		return (result);
	} else if (i == 1) {
		for (k = 0; k < nb; k += 1)
			result = result + my_strlen(va_arg(ap, char*));
		va_end(ap);
		return (result);
	}
	return (84);
}
