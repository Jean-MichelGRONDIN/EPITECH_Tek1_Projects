/*
** EPITECH PROJECT, 2019
** CPE_corewar_2018
** File description:
** test_get_this_line_index
*/

#include "asm.h"
#include <criterion/criterion.h>

Test(get_this_line_index, check_when_here)
{
    char    str[] = ".name \"toto\"\nholla bienas noches!";
    char    **tab = my_str_to_word_array(str, "\n");
    int ret = get_this_line_index(tab, ".name");

    cr_assert_eq(ret, 0);
    tab = free_cleanly_str_tab(tab);
}

Test(get_this_line_index, check_when_not_here)
{
    char    str[] = ".name \"toto\"\nholla bienas noches!";
    char    **tab = my_str_to_word_array(str, "\n");
    int ret = get_this_line_index(tab, ".yo");

    cr_assert_eq(ret, -1);
    tab = free_cleanly_str_tab(tab);
}

Test(get_this_line_index, check_equal_exept_fist_char)
{
    char    str[] = "name \"toto\"\nholla bienas noches!";
    char    **tab = my_str_to_word_array(str, "\n");
    int ret = get_this_line_index(tab, ".name");

    cr_assert_eq(ret, -1);
    tab = free_cleanly_str_tab(tab);
}

Test(get_this_line_index, check_equal_exept_last_char)
{
    char    str[] = ".nam \"toto\"\nholla bienas noches!";
    char    **tab = my_str_to_word_array(str, "\n");
    int ret = get_this_line_index(tab, ".name");

    cr_assert_eq(ret, -1);
    tab = free_cleanly_str_tab(tab);
}

Test(get_this_line_index, check_file_is_null)
{
    int ret = get_this_line_index(NULL, ".name");

    cr_assert_eq(ret, -1);
}

Test(get_this_line_index, check_to_find_is_null)
{
    char    str[] = ".nam \"toto\"\nholla bienas noches!";
    char    **tab = my_str_to_word_array(str, "\n");
    int ret = get_this_line_index(tab, NULL);

    cr_assert_eq(ret, -1);
    tab = free_cleanly_str_tab(tab);
}

Test(get_this_line_index, check_both_null)
{
    int ret = get_this_line_index(NULL, NULL);

    cr_assert_eq(ret, -1);
}