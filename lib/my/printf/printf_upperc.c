/*
** EPITECH PROJECT, 2017
** printf.C.c
** File description:
** printf.C.c
*/

#include <stdarg.h>
#include <stdlib.h>
#include "../include/my.h"
#include <stdio.h>

void printf_upperc(va_list ap)
{
	my_printf_upperc(va_arg(ap, int));
}

void my_printf_upperc(char c)
{
	if (c < 32 || c >= 127) {
		my_putchar('\\');
		printf_oct(c);
	} else {
		my_putchar(c);
	}
}
