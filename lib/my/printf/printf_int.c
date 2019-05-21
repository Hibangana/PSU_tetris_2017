/*
** EPITECH PROJECT, 2017
** printf_int.c
** File description:
** printf_int.c
*/

#include <stdarg.h>
#include "../include/my.h"

void printf_int(va_list ap)
{
	my_put_nbr(va_arg(ap, int));
}
