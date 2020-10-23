/*
** EPITECH PROJECT, 2018
** PSU_my_printf_2018
** File description:
** unit test for convert_to_oct_base_c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "./../include/my.h"

Test(converte_to_oct_base, check_displaye, .init=cr_redirect_stdout)
{
    converte_to_oct_base(18, 1);
    cr_assert_stdout_eq_str("\\022");
}

Test(converte_to_oct_base, check_displaye_v2, .init=cr_redirect_stdout)
{
    converte_to_oct_base(25, 1);
    cr_assert_stdout_eq_str("\\031");
}

Test(converte_to_oct_base, check_displaye_nb_zero, .init=cr_redirect_stdout)
{
    converte_to_oct_base(7, 1);
    cr_assert_stdout_eq_str("\\007");
}

Test(converte_to_oct_base, check_displaye_v3, .init=cr_redirect_stdout)
{
    converte_to_oct_base(23, 0);
    cr_assert_stdout_eq_str("27");
}

Test(even_non_printable_char, check_displaye_v3, .init=cr_redirect_stdout)
{
    even_non_printable_char("hello, \n, \a; \0");
    cr_assert_stdout_eq_str("hello, \\012, \\007; \\000");
}
