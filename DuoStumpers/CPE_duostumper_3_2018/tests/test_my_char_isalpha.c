/*
** EPITECH PROJECT, 2019
** CPE_duostumper_3_2018
** File description:
** test my char is alpha
*/

#include "./../include/stumper.h"
#include <criterion/criterion.h>

Test(my_char_isalpha, check_if_answer_zero_with_alpha)
{
    cr_assert_eq(0, my_char_isalpha('a'));
}

Test(my_char_isalpha, check_if_answer_zero_with_alpha_v2)
{
    cr_assert_eq(0, my_char_isalpha('L'));
}

Test(my_char_isalpha, check_if_answer_one_with_not_alpha)
{
    cr_assert_eq(1, my_char_isalpha('$'));
}

Test(my_char_isalpha, check_if_answer_one_with_not_alpha_v2)
{
    cr_assert_eq(1, my_char_isalpha('7'));
}

Test(my_char_isalpha, check_if_answer_one_with_not_alpha_v4)
{
    cr_assert_eq(1, my_char_isalpha('~'));
}

Test(my_char_isalpha, check_if_answer_one_with_not_alpha_v5)
{
    cr_assert_eq(1, my_char_isalpha('@'));
}
