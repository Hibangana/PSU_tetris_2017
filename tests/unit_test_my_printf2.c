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

Test(my_printf, octal, .init = redirect_all_std)
{
	my_printf("%o", 19971014);
	cr_assert_stdout_eq_str("114135706");
}

Test(my_printf, octal_zero, .init = redirect_all_std)
{
	my_printf("%o", 0);
	cr_assert_stdout_eq_str("0");
}

Test(my_printf, hexadecimal, .init = redirect_all_std)
{
	my_printf("%x", 19971014);
	cr_assert_stdout_eq_str("130bbc6");
}

Test(my_printf, hexa_zero, .init = redirect_all_std)
{
	my_printf("%x", 0);
	cr_assert_stdout_eq_str("0");
}
