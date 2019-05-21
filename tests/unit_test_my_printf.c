/*
** EPITECH PROJECT, 2017
** unit_test_i.c
** File description:
** unit_test_i.c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../lib/my/include/my.h"
#include <stdio.h>

void redirect_all_std(void)
{
	cr_redirect_stdout();
	cr_redirect_stderr();
}

Test(my_printf, multiple_flags, .init = redirect_all_std)
{
	my_printf("%%%s%%d%%", "hello", 54);
	cr_assert_stdout_eq_str("%hello%d%");
}

Test(my_printf, no_flags, .init = redirect_all_std)
{
	my_printf("%%t");
	cr_assert_stdout_eq_str("%t");
}

Test(my_printf, four_modulos, .init = redirect_all_std)
{
	my_printf("%%%%d", 76);
	cr_assert_stdout_eq_str("%%d");
}

Test(my_printf, integer, .init = redirect_all_std)
{
	my_printf("%i", 19971014);
	cr_assert_stdout_eq_str("19971014");
}
