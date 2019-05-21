/*
** EPITECH PROJECT, 2017
** disp_stdarg.c
** File description:
** disp_starg.c
*/

#include <stdarg.h>

void my_putchar(char c);
int my_putstr(char const *str);
int my_put_nbr(int nb);
int my_strlen(char const *str);

int disp_stdarg(char *s, ...)
{
	int len = my_strlen(s);
	int i = 0;
	va_list ap;

	va_start(ap, s);
	for (i = 0; i < len; i += 1) {
		if (s[i] == 's')
			my_putstr(va_arg(ap, char*));
		if (s[i] == 'c')
			my_putchar(va_arg(ap, int));
		if (s[i] == 'i')
			my_put_nbr(va_arg(ap, int));
		my_putchar('\n');
	}
	va_end(ap);
	return (0);
}
