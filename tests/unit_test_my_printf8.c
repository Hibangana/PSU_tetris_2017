/*
** EPITECH PROJECT, 2018
** unit_test
** File description:
** unit_test
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../lib/my/include/my.h"
#include <stdio.h>

void redirect_all_std(void);

Test(my_printf, upperc, .init = redirect_all_std)
{
	char a = 'c';

	my_printf("%C", a);
	cr_assert_stdout_eq_str("c");
}

Test(my_printf, upperc_two, .init = redirect_all_std)
{
	char a = '\t';

	my_printf("%C", a);
	cr_assert_stdout_eq_str("\\011");
}
