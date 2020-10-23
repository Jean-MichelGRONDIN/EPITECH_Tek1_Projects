/*
** EPITECH PROJECT, 2018
** CPE_pushswap_bootstrap_2018
** File description:
** tests_rotate_right
*/

#include "./../include/pushswap.h"
#include <criterion/criterion.h>
#include <stdio.h>

Test(rotate_right, rotate_right_v0)
{
    int array[6] = {6, 5, 4, 3, 2, 1};

    rotate_right(array, 6);
    cr_assert_eq(array[0], 1);
    cr_assert_eq(array[1], 6);
    cr_assert_eq(array[2], 5);
    cr_assert_eq(array[3], 4);
    cr_assert_eq(array[4], 3);
    cr_assert_eq(array[5], 2);
}
