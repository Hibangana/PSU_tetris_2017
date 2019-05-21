/*
** EPITECH PROJECT, 2017
** printf.unsint.c
** File description:
** printf_unsint.c
*/

#include <stdarg.h>
#include "../include/my.h"

void printf_unsint(va_list ap)
{
	my_put_nbr(va_arg(ap, unsigned int));
}
