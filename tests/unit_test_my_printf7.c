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

Test(my_printf, max_value_int, .init = redirect_all_std)
{
	int a = 2147483648;

	my_printf("%i", a);
	cr_assert_stdout_eq_str("-2147483648");
}

Test(my_printf, printf_ptr, .init = redirect_all_std)
{
	char *str = NULL;

	my_printf("%p", str);
	cr_assert_stdout_eq_str("0x0");
}


Test(my_printf, format_plus_negative, .init = redirect_all_std)
{
	int a = -44;

	my_printf("%+d", a);
	cr_assert_stdout_eq_str("-44");
}

Test(my_printf, format_plus_positive, .init = redirect_all_std)
{
	int a = 44;

	my_printf("%+d", a);
	cr_assert_stdout_eq_str("+44");
}

Test(my_printf, uppers, .init = redirect_all_std)
{
	char *str = "toto";

	my_printf("%S", str);
	cr_assert_stdout_eq_str("toto");
}
