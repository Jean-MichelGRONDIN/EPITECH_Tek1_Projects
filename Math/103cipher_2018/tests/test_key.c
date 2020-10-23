/*
** EPITECH PROJECT, 2018
** 103cipher_2018
** File description:
** test for the file key_c
*/

#include <criterion/criterion.h>
#include "./../include/my.h"
#include "./../include/cipher.h"

Test(find_matrix_size, check_retruned_value)
{
    char   *str = my_strdup("HOMER S");

    cr_assert_eq(find_matrix_size(str), 3);
}

Test(find_matrix_size, check_retruned_value_v2)
{
    char   *str = my_strdup("HI");

    cr_assert_eq(find_matrix_size(str), 2);
}

Test(find_matrix_size, check_retruned_value_v3)
{
    char   *str = my_strdup("hello i'm here ! how are you today");

    cr_assert_eq(find_matrix_size(str), 6);
}
