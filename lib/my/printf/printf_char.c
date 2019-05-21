/*
** EPITECH PROJECT, 2017
** printf_char.c
** File description:
** printf_char.c
*/

#include <stdarg.h>
#include "../include/my.h"

void printf_char(va_list ap)
{
	my_putchar(va_arg(ap, int));
}
