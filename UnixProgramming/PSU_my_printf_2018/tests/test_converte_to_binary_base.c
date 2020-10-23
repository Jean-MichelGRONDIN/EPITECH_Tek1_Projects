/*
** EPITECH PROJECT, 2018
** PSU_my_printf_2018
** File description:
** unit test for convert_to_binary_base_c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "./../include/my.h"

Test(converte_to_binary_base, check_disp_binary_v1, .init=cr_redirect_stdout)
{
    converte_to_binary_base(10);

    cr_assert_stdout_eq_str("1010");
}

Test(converte_to_binary_base, check_disp_binary_v2, .init=cr_redirect_stdout)
{
    converte_to_binary_base(15);

    cr_assert_stdout_eq_str("1111");
}

Test(converte_to_binary_base, check_disp_binary_v3, .init=cr_redirect_stdout)
{
    converte_to_binary_base(16);

    cr_assert_stdout_eq_str("10000");
}
