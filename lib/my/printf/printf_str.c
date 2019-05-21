/*
** EPITECH PROJECT, 2017
** printf_str.c
** File description:
** printf_str.c
*/

#include <stdarg.h>
#include "../include/my.h"

void printf_str(va_list ap)
{
	my_putstr(va_arg(ap, char *));
}
