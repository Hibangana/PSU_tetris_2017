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

Test(my_printf, format_blank_positive_number, .init = redirect_all_std)
{
	my_printf("% i", 128);
	cr_assert_stdout_eq_str(" 128");
}

Test(my_printf, format_blank_negative_number, .init = redirect_all_std)
{
	my_printf("% d", -128);
	cr_assert_stdout_eq_str("-128");
}

Test(my_printf, format_blank_other_flags, .init = redirect_all_std)
{
	my_printf("% xsd", 128);
	cr_assert_stdout_eq_str("80sd");
}

Test(my_printf, modulo_alone, .init = redirect_all_std)
{
	my_printf("%");
	cr_assert_stdout_eq_str("%");
}
