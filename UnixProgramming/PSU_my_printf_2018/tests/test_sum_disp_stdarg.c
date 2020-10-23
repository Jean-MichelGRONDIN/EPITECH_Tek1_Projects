/*
** EPITECH PROJECT, 2018
** PSU_my_printf_bootstrap_2018
** File description:
** unit test for sum_stdarg_c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "./../include/my.h"

Test(sum_stdarg, return_correct_when_i_is_zero)
{
    int ret = sum_stdarg(0, 3, 21, 25, -4);

    cr_assert_eq(ret, 42);
}

Test(sum_stdarg, return_correct_when_i_is_zero_v2)
{
    int ret = sum_stdarg(0, 3, 99, 2, 55);

    cr_assert_eq(ret, 156);
}

Test(sum_stdarg, return_correct_when_i_is_one)
{
    int ret = sum_stdarg(1, 3, "hello", "toi", ",coucou");

    cr_assert_eq(ret, 15);
}
