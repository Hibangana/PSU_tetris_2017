/*
** EPITECH PROJECT, 2017
** unit_test
** File description:
** unit_test
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../lib/my/include/my.h"
#include <stdio.h>

void redirect_all_std(void);

Test(my_printf, format_diese_hexa_zero, .init = redirect_all_std)
{
	my_printf("%#x", 0);
	cr_assert_stdout_eq_str("0");
}

Test(my_printf, format_diese_HEXA, .init = redirect_all_std)
{
	my_printf("%#X", 128);
	cr_assert_stdout_eq_str("0X80");
}

Test(my_printf, format_diese_HEXA_zero, .init = redirect_all_std)
{
	my_printf("%#X", 0);
	cr_assert_stdout_eq_str("0");
}

Test(my_printf, format_blank_zero, .init = redirect_all_std)
{
	my_printf("% i", 0);
	cr_assert_stdout_eq_str(" 0");
}
