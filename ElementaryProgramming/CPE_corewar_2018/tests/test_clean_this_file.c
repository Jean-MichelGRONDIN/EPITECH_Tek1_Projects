/*
** EPITECH PROJECT, 2019
** asm
** File description:
** test_clean_this_file
*/

#include "asm.h"
#include <criterion/criterion.h>

Test(clean_this_file, check_when_file_is_null)
{
    char    **tab = NULL;

    tab = clean_this_file(tab);
    cr_assert_eq(tab, NULL);
}

Test(clean_this_file, check_spaces_clear)
{
    char    **tab = my_str_to_word_array(
        "   toto   \ntiti  \n  ta     ta\n", "\n");

    tab = clean_this_file(tab);
    cr_assert_str_eq(tab[0], "toto");
    cr_assert_str_eq(tab[1], "titi");
    cr_assert_str_eq(tab[2], "ta ta");
    cr_assert_eq(tab[3], NULL);
    tab = free_cleanly_str_tab(tab);
}

Test(clean_this_file, check_comment_clear)
{
    char    **tab = my_str_to_word_array(
        "   toto   \n#hey brother\ntiti #hey sisters \n  ta     ta\n", "\n");

    tab = clean_this_file(tab);
    cr_assert_str_eq(tab[0], "toto");
    cr_assert_str_eq(tab[1], "titi");
    cr_assert_str_eq(tab[2], "ta ta");
    cr_assert_eq(tab[3], NULL);
    tab = free_cleanly_str_tab(tab);
}

Test(clean_this_file, check_2_following_empty_lines)
{
    char    **tab = my_str_to_word_array(
        "   toto\n   \n#hey brother\ntiti #hey sisters \n  ta     ta\n", "\n");

    tab = clean_this_file(tab);
    cr_assert_str_eq(tab[0], "toto");
    cr_assert_str_eq(tab[1], "titi");
    cr_assert_str_eq(tab[2], "ta ta");
    cr_assert_eq(tab[3], NULL);
    tab = free_cleanly_str_tab(tab);
}