/*
** EPITECH PROJECT, 2018
** CPE_pushswap_bootstrap_2018
** File description:
** tests_rotate_left
*/

#include "./../include/pushswap.h"
#include <criterion/criterion.h>
#include <stdio.h>

Test(rotate_left, rotate_left_v0)
{
    int array[6] = {6, 5, 4, 3, 2, 1};

    rotate_left(array, 6);
    cr_assert_eq(array[0], 5);
    cr_assert_eq(array[1], 4);
    cr_assert_eq(array[2], 3);
    cr_assert_eq(array[3], 2);
    cr_assert_eq(array[4], 1);
    cr_assert_eq(array[5], 6);
}
