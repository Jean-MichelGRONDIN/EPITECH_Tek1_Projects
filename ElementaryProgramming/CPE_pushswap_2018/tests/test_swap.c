/*
** EPITECH PROJECT, 2018
** CPE_pushswap_2018
** File description:
** test for the swap algorithme
*/

#include "./../include/pushswap.h"
#include <criterion/criterion.h>

Test(swap, test_swap_2_firsts_values)
{
    int array[6] = {1, 2, 3, 4, 5, 6};

    swap(array, 6);
    cr_assert_eq(array[0], 2);
    cr_assert_eq(array[1], 1);
    cr_assert_eq(array[2], 3);
    cr_assert_eq(array[3], 4);
    cr_assert_eq(array[4], 5);
    cr_assert_eq(array[5], 6);
}

Test(swap, test_swap_not_enought_int)
{
    int array[1] = {1};

    swap(array, 1);
    cr_assert_eq(array[0], 1);
}

Test(swap, test_with_enought_nb_of_int_but_not_enough_size)
{
    int array[6] = {1, 2, 3, 4, 5, 6};

    swap(array, 1);
    cr_assert_eq(array[0], 1);
    cr_assert_eq(array[1], 2);
    cr_assert_eq(array[2], 3);
    cr_assert_eq(array[3], 4);
    cr_assert_eq(array[4], 5);
    cr_assert_eq(array[5], 6);
}
