/*
** EPITECH PROJECT, 2019
** asm
** File description:
** test_clear_strtab_lines
*/

#include "asm.h"
#include <criterion/criterion.h>

Test(clear_strtab_lines, check_tab_is_null)
{
    char    **tab = NULL;

    tab = clear_strtab_lines(tab);
    cr_assert_eq(tab, NULL);
}

Test(clear_strtab_lines, check_usual_case)
{
    char    **tab = my_str_to_word_array(
        "toto    \n     tata\n  titi\nhello \n", "\n");

    tab = clear_strtab_lines(tab);
    cr_assert_str_eq(tab[0], "toto");
    cr_assert_str_eq(tab[1], "tata");
    cr_assert_str_eq(tab[2], "titi");
    cr_assert_str_eq(tab[3], "hello");
    cr_assert_eq(tab[4], NULL);
    tab = free_cleanly_str_tab(tab);
}

Test(clear_strtab_lines, check_when_an_entire_line_is_removed)
{
    char    **tab = my_str_to_word_array(
        "toto    \n     tata\n  \ntiti\nhello \n", "\n");

    tab = clear_strtab_lines(tab);
    cr_assert_str_eq(tab[0], "toto");
    cr_assert_str_eq(tab[1], "tata");
    cr_assert_str_eq(tab[2], "titi");
    cr_assert_str_eq(tab[3], "hello");
    cr_assert_eq(tab[4], NULL);
    tab = free_cleanly_str_tab(tab);
}

Test(clear_strtab_lines, spaces_and_tab_at_the_end)
{
    char    **tab = my_str_to_word_array(
        "toto    \n     tata\n  \ntiti\nhello \n", "\n");

    tab[0][5] = '\t';
    tab[0][6] = '\t';
    tab = clear_strtab_lines(tab);
    cr_assert_str_eq(tab[0], "toto");
    cr_assert_str_eq(tab[1], "tata");
    cr_assert_str_eq(tab[2], "titi");
    cr_assert_str_eq(tab[3], "hello");
    cr_assert_eq(tab[4], NULL);
    tab = free_cleanly_str_tab(tab);
}

Test(clear_strtab_lines, spaces_and_tab_in_the_middle)
{
    char    **tab = my_str_to_word_array(
        "toto    \n ta    ta\n  \ntiti\nhello \n", "\n");

    tab[1][4] = '\t';
    tab[1][5] = '\t';
    tab = clear_strtab_lines(tab);
    cr_assert_str_eq(tab[0], "toto");
    cr_assert_str_eq(tab[1], "ta ta");
    cr_assert_str_eq(tab[2], "titi");
    cr_assert_str_eq(tab[3], "hello");
    cr_assert_eq(tab[4], NULL);
    tab = free_cleanly_str_tab(tab);
}