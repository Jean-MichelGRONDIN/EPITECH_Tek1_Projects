/*
** EPITECH PROJECT, 2019
** asm
** File description:
** test_replace_in_str
*/

#include "asm.h"
#include <criterion/criterion.h>

Test(replace_in_str, when_null)
{
    char    *str = NULL;

    str = replace_in_str(str, 'z', 'p');
    cr_assert_eq(str, NULL);
}

Test(replace_in_str, check_nothing_to_replace)
{
    char    *str = my_strdup("hello les amis !");
    char    *res = my_strdup("hello les amis !");

    str = replace_in_str(str, 'z', 'p');
    cr_assert_str_eq(str, res);
    str = free_cleanly_this_str(str);
    res = free_cleanly_this_str(res);
}

Test(replace_in_str, usual_case)
{
    char    *str = my_strdup("hello les amis !");
    char    *res = my_strdup("hzllo lzs amis !");

    str = replace_in_str(str, 'e', 'z');
    cr_assert_str_eq(str, res);
    str = free_cleanly_this_str(str);
    res = free_cleanly_this_str(res);
}