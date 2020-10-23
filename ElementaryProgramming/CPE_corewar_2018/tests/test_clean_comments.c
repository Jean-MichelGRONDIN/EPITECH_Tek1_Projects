/*
** EPITECH PROJECT, 2019
** asm
** File description:
** test_clean_comments
*/

#include "asm.h"
#include <criterion/criterion.h>

Test(clean_comments_lines, with_entire_line_comment)
{
    char    **tab = my_str_to_word_array("hello\n#toto\ntout le monde", "\n");

    tab = clean_comments_lines(tab);
    cr_assert_str_eq(tab[0], "hello");
    cr_assert_str_eq(tab[1], "tout le monde");
    cr_assert_eq(tab[2], NULL);
    tab = free_cleanly_str_tab(tab);
}

Test(clean_comments_lines, comment_inside_a_line)
{
    char    **tab = my_str_to_word_array("hello#toto\ntout le monde", "\n");

    tab = clean_comments_lines(tab);
    cr_assert_str_eq(tab[0], "hello");
    cr_assert_str_eq(tab[1], "tout le monde");
    cr_assert_eq(tab[2], NULL);
    tab = free_cleanly_str_tab(tab);
}

Test(clean_comments_lines, comment_inside_a_line_and_entire_line)
{
    char    **tab = my_str_to_word_array(
        "hello#toto\n#toto\ntout le monde", "\n");

    tab = clean_comments_lines(tab);
    cr_assert_str_eq(tab[0], "hello");
    cr_assert_str_eq(tab[1], "tout le monde");
    cr_assert_eq(tab[2], NULL);
    tab = free_cleanly_str_tab(tab);
}