/*
** EPITECH PROJECT, 2019
** CPE_duostumper_3_2018
** File description:
** unit test on cipher
*/

#include <criterion/criterion.h>
#include "../include/stumper.h"

Test(uncrypt_that_char, min_pos)
{
    cr_assert_eq('c', uncrypt_that_char('a', 2));
}

Test(uncrypt_that_char, maj_neg)
{
    cr_assert_eq('C', uncrypt_that_char('H', -5));
}

Test(uncrypt_that_char, nul)
{
    cr_assert_eq('c', uncrypt_that_char('c', 0));
}
