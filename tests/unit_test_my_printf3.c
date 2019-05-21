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

Test(my_printf, HEXADECIMAL, .init = redirect_all_std)
{
	my_printf("%X", 19971014);
	cr_assert_stdout_eq_str("130BBC6");
}

Test(my_printf, HEXA_zero, .init = redirect_all_std)
{
	my_printf("%X", 0);
	cr_assert_stdout_eq_str("0");
}

Test(my_printf, unsigned_int, .init = redirect_all_std)
{
	my_printf("%u", 19971014);
	cr_assert_stdout_eq_str("19971014");
}

Test(my_printf, binary, .init = redirect_all_std)
{
	my_printf("%b", 19971014);
	cr_assert_stdout_eq_str("1001100001011101111000110");
}
