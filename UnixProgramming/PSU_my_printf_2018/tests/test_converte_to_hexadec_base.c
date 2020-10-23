/*
** EPITECH PROJECT, 2018
** PSU_my_printf_2018
** File description:
** unit tests for convert_to_hexadec_base_c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "./../include/my.h"

Test(convert_to_hexadec_base, check_displaye_v1, .init=cr_redirect_stdout)
{
    convert_to_hexadec_base(230);
    cr_assert_stdout_eq_str("e6");
}

Test(convert_to_hexadec_base, check_displaye_maj_v1, .init=cr_redirect_stdout)
{
    convert_to_maj_hexadec_base(230);
    cr_assert_stdout_eq_str("E6");
}

Test(convert_to_hexadec_base, check_displaye_v2, .init=cr_redirect_stdout)
{
    convert_to_hexadec_base(74);
    cr_assert_stdout_eq_str("4a");
}

Test(convert_to_hexadec_base, check_displaye_maj_v2, .init=cr_redirect_stdout)
{
    convert_to_maj_hexadec_base(74);
    cr_assert_stdout_eq_str("4A");
}

Test(convert_to_hexadec_base, check_displaye_v3, .init=cr_redirect_stdout)
{
    convert_to_hexadec_base(111845);
    cr_assert_stdout_eq_str("1b4e5");
}

Test(convert_to_hexadec_base, check_displaye_maj_v3, .init=cr_redirect_stdout)
{
    convert_to_maj_hexadec_base(111845);
    cr_assert_stdout_eq_str("1B4E5");
}
