/*
** EPITECH PROJECT, 2019
** asm
** File description:
** test_copy_without_epty_lines
*/

#include "asm.h"
#include <criterion/criterion.h>

Test(copy_without_empty_lines, check_usual_case)
{
    char    **tab = my_str_to_word_array("toto\ntata\ntiti\nhello\n", "\n");
    int len = my_strtab_len(tab);

    tab[1] = free_cleanly_this_str(tab[1]);
    tab = copy_without_empty_lines(tab, len);
    cr_assert_str_eq(tab[0], "toto");
    cr_assert_str_eq(tab[1], "titi");
    cr_assert_str_eq(tab[2], "hello");
    cr_assert_eq(tab[3], NULL);
    tab = free_cleanly_str_tab(tab);
}

Test(copy_without_empty_lines, check_first_is_empty)
{
    char    **tab = my_str_to_word_array("toto\ntata\ntiti\nhello\n", "\n");
    int len = my_strtab_len(tab);

    tab[0] = free_cleanly_this_str(tab[0]);
    tab = copy_without_empty_lines(tab, len);
    cr_assert_str_eq(tab[0], "tata");
    cr_assert_str_eq(tab[1], "titi");
    cr_assert_str_eq(tab[2], "hello");
    cr_assert_eq(tab[3], NULL);
    tab = free_cleanly_str_tab(tab);
}

Test(copy_without_empty_lines, check_nothing_empty)
{
    char    **tab = my_str_to_word_array("toto\ntata\ntiti\nhello\n", "\n");
    int len = my_strtab_len(tab);

    tab = copy_without_empty_lines(tab, len);
    cr_assert_str_eq(tab[0], "toto");
    cr_assert_str_eq(tab[1], "tata");
    cr_assert_str_eq(tab[2], "titi");
    cr_assert_str_eq(tab[3], "hello");
    cr_assert_eq(tab[4], NULL);
    tab = free_cleanly_str_tab(tab);
}