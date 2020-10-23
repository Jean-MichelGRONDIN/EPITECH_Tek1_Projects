/*
** EPITECH PROJECT, 2018
** CPE_pushswap_bootstrap_2018
** File description:
** tests_bubble_sort_array
*/

#include "./../include/pushswap.h"
#include <criterion/criterion.h>

Test(swap_elem, index1_greater_than_index2)
{
    int array[6] = {1, 2, 3, 4, 5, 6};
    int index1 = 2;
    int index2 = 4;

    swap_elem(array, index1, index2);
    cr_assert_eq(array[index1], 5);
    cr_assert_eq(array[index2], 3);
}

Test(bubble_sort_array, bubble_sort_v0)
{
    int array[6] = {6, 5, 4, 3, 2, 1};

    bubble_sort_array(array, 6);
    cr_assert_eq(array[0], 1);
    cr_assert_eq(array[1], 2);
    cr_assert_eq(array[2], 3);
    cr_assert_eq(array[3], 4);
    cr_assert_eq(array[4], 5);
    cr_assert_eq(array[5], 6);
}

Test(bubble_sort_array, bubble_sort_v1)
{
    int array[6] = {6, 5, 3, 4, 2, 1};

    bubble_sort_array(array, 6);
    cr_assert_eq(array[0], 1);
    cr_assert_eq(array[1], 2);
    cr_assert_eq(array[2], 3);
    cr_assert_eq(array[3], 4);
    cr_assert_eq(array[4], 5);
    cr_assert_eq(array[5], 6);
}

Test(bubble_sort_array, bubble_sort_v2)
{
    int array[6] = {1, 5, 4, 3, 2, 6};

    bubble_sort_array(array, 6);
    cr_assert_eq(array[0], 1);
    cr_assert_eq(array[1], 2);
    cr_assert_eq(array[2], 3);
    cr_assert_eq(array[3], 4);
    cr_assert_eq(array[4], 5);
    cr_assert_eq(array[5], 6);
}
