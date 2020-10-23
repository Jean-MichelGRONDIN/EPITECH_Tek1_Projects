/*
** EPITECH PROJECT, 2019
** my_norm_checker
** File description:
** test find nb word in str v2
*/

#include "./../include/my_norm.h"
#include <criterion/criterion.h>

Test(find_nb_words_in_str_v2, check_returned_number_v1)
{
    char    *str = my_strdup("hello-les--amis----comment-ca-va---");
    int nb = find_nb_words_in_str_v2(str, "-");

    /* printf("___[%i]___\n", nb); */
    cr_assert_eq(nb, 12);
}

Test(find_nb_words_in_str_v2, check_returned_number_v2)
{
    char    *str = my_strdup("-hello-les--amis----comment-ca-va---");
    int nb = find_nb_words_in_str_v2(str, "-");

    /* printf("___[%i]___\n", nb); */
    cr_assert_eq(nb, 13);
}
