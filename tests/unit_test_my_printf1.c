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

Test(my_printf, decimal, .init = redirect_all_std)
{
	my_printf("%d", 19971014);
	cr_assert_stdout_eq_str("19971014");
}

Test(my_printf, double_modulo, .init = redirect_all_std)
{
	my_printf("%%");
	cr_assert_stdout_eq_str("%");
}

Test(my_printf, character, .init = redirect_all_std)
{
	my_printf("%c", 'H');
	cr_assert_stdout_eq_str("H");
}

Test(my_printf, string, .init = redirect_all_std)
{
	my_printf("%s", "no pain, no gain");
	cr_assert_stdout_eq_str("no pain, no gain");
}
