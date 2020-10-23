/*
** EPITECH PROJECT, 2019
** asm
** File description:
** test_how_many_of_that_char
*/

#include "asm.h"
#include <criterion/criterion.h>

Test(how_many_of_that_char, check_when_greater_than_zero)
{
    char    str[] = "hello les amis comment ca va ?\n";
    int ret = how_many_of_that_char(str, 'e');

    cr_assert_eq(ret, 3);
}

Test(how_many_of_that_char, check_when_zero)
{
    char    str[] = "yo what s up ?\n";
    int ret = how_many_of_that_char(str, 'e');

    cr_assert_eq(ret, 0);
}

Test(how_many_of_that_char, check_str_is_null)
{
    int ret = how_many_of_that_char(NULL, 'e');

    cr_assert_eq(ret, -1);
}