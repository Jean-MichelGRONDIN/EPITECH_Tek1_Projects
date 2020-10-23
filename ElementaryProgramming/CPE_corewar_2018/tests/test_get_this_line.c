/*
** EPITECH PROJECT, 2019
** CPE_corewar_2018
** File description:
** test_get_this_line
*/

#include "asm.h"
#include <criterion/criterion.h>

Test(get_this_line, check_when_here)
{
    char    str[] = ".name \"toto\"\nholla bienas noches!";
    char    **tab = my_str_to_word_array(str, "\n");
    char    res[] = ".name \"toto\"";
    char    *ret = get_this_line(tab, ".name");

    cr_assert_str_eq(res, ret);
    tab = free_cleanly_str_tab(tab);
    ret = free_cleanly_this_str(ret);
}

Test(get_this_line, check_when_not_here)
{
    char    str[] = ".name \"toto\"\nholla bienas noches!";
    char    **tab = my_str_to_word_array(str, "\n");
    char    *ret = get_this_line(tab, ".yo");

    cr_assert_eq(ret, NULL);
    tab = free_cleanly_str_tab(tab);
    ret = free_cleanly_this_str(ret);
}

Test(get_this_line, check_equal_exept_fist_char)
{
    char    str[] = "name \"toto\"\nholla bienas noches!";
    char    **tab = my_str_to_word_array(str, "\n");
    char    *ret = get_this_line(tab, ".name");

    cr_assert_eq(ret, NULL);
    tab = free_cleanly_str_tab(tab);
    ret = free_cleanly_this_str(ret);
}

Test(get_this_line, check_equal_exept_last_char)
{
    char    str[] = ".nam \"toto\"\nholla bienas noches!";
    char    **tab = my_str_to_word_array(str, "\n");
    char    *ret = get_this_line(tab, ".name");

    cr_assert_eq(ret, NULL);
    tab = free_cleanly_str_tab(tab);
    ret = free_cleanly_this_str(ret);
}

Test(get_this_line, check_file_is_null)
{
    char    *ret = get_this_line(NULL, ".name");

    cr_assert_eq(ret, NULL);
    ret = free_cleanly_this_str(ret);
}

Test(get_this_line, check_to_find_is_null)
{
    char    str[] = ".nam \"toto\"\nholla bienas noches!";
    char    **tab = my_str_to_word_array(str, "\n");
    char    *ret = get_this_line(tab, NULL);

    cr_assert_eq(ret, NULL);
    tab = free_cleanly_str_tab(tab);
    ret = free_cleanly_this_str(ret);
}

Test(get_this_line, check_both_null)
{
    char    *ret = get_this_line(NULL, NULL);

    cr_assert_eq(ret, NULL);
    ret = free_cleanly_this_str(ret);
}