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

Test(my_printf, binary_zero, .init = redirect_all_std)
{
	my_printf("%b", 0);
	cr_assert_stdout_eq_str("00000000");
}

Test(my_printf, format_diese_octal_zero, .init = redirect_all_std)
{
	my_printf("%#o", 0);
	cr_assert_stdout_eq_str("0");
}

Test(my_printf, format_diese_octal, .init = redirect_all_std)
{
	my_printf("%#o", 128);
	cr_assert_stdout_eq_str("0200");
}

Test(my_printf, format_diese_hexa, .init = redirect_all_std)
{
	my_printf("%#x", 128);
	cr_assert_stdout_eq_str("0x80");
}
