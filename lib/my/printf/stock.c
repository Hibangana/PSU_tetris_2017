/*
** EPITECH PROJECT, 2017
** stock.c
** File description:
** stock.c
*/

#include <stdarg.h>
#include "../include/my.h"

void stock(void)
{
	p[0] = &printf_int;
	p[1] = &printf_char;
	p[2] = &printf_str;
	p[3] = &printf_octal;
	p[4] = &printf_hexa;
	p[5] = &printf_hexa_maj;
	p[6] = &printf_unsint;
	p[7] = &printf_ptr;
	p[8] = &printf_binary;
	p[9] = &printf_uppers;
	p[10] = &printf_upperc;
}

void stock_format(void)
{
	p1[0] = &format_diese;
	p1[1] = &format_blank;
	p1[2] = &format_plus;
}
