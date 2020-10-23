/*
** EPITECH PROJECT, 2019
** my_norm_checker
** File description:
** test my_str_to_word_array_v2
*/

#include "./../include/my_norm.h"
#include <criterion/criterion.h>

Test(my_str_to_word_array_v2, check_returned_strings)
{
    char    *str = my_strdup("hello-this--is---a-test-of-this----versio-str--tab----");
    char    **tab = my_str_to_word_array_v2(str, "-");

    /* int i = 0; */
    /* while (tab[i] != NULL) { */
    /*     my_printf("[%s]\n", tab[i]); */
    /*     i = i + 1; */
    /* } */

    cr_assert_str_eq(tab[0], "hello-");
    cr_assert_str_eq(tab[1], "this-");
    cr_assert_str_eq(tab[2], "-");
    cr_assert_str_eq(tab[3], "is-");
    cr_assert_str_eq(tab[4], "-");
    cr_assert_str_eq(tab[5], "-");
    cr_assert_str_eq(tab[6], "a-");
    cr_assert_str_eq(tab[7], "test-");
    cr_assert_str_eq(tab[8], "of-");
    cr_assert_str_eq(tab[9], "this-");
    cr_assert_str_eq(tab[10], "-");
    cr_assert_str_eq(tab[11], "-");
    cr_assert_str_eq(tab[12], "-");
    cr_assert_str_eq(tab[13], "versio-");
    cr_assert_str_eq(tab[14], "str-");
    cr_assert_str_eq(tab[15], "-");
    cr_assert_str_eq(tab[16], "tab-");
    cr_assert_str_eq(tab[17], "-");
    cr_assert_str_eq(tab[18], "-");
    cr_assert_str_eq(tab[19], "-");
}

Test(my_str_to_word_array_v2, check_returned_strings_v2)
{
    char    *str = my_strdup("-ello-this--is---a-test-of-this----versio-str--tab----");
    char    **tab = my_str_to_word_array_v2(str, "-");

    /* int i = 0; */
    /* while (tab[i] != NULL) { */
    /*     my_printf("[%s]\n", tab[i]); */
    /*     i = i + 1; */
    /* } */

    cr_assert_str_eq(tab[0], "-");
    cr_assert_str_eq(tab[1], "ello-");
    cr_assert_str_eq(tab[2], "this-");
    cr_assert_str_eq(tab[3], "-");
    cr_assert_str_eq(tab[4], "is-");
    cr_assert_str_eq(tab[5], "-");
    cr_assert_str_eq(tab[6], "-");
    cr_assert_str_eq(tab[7], "a-");
    cr_assert_str_eq(tab[8], "test-");
    cr_assert_str_eq(tab[9], "of-");
    cr_assert_str_eq(tab[10], "this-");
    cr_assert_str_eq(tab[11], "-");
    cr_assert_str_eq(tab[12], "-");
    cr_assert_str_eq(tab[13], "-");
    cr_assert_str_eq(tab[14], "versio-");
    cr_assert_str_eq(tab[15], "str-");
    cr_assert_str_eq(tab[16], "-");
    cr_assert_str_eq(tab[17], "tab-");
    cr_assert_str_eq(tab[18], "-");
    cr_assert_str_eq(tab[19], "-");
    cr_assert_str_eq(tab[20], "-");
}
