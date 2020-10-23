/*
** EPITECH PROJECT, 2018
** 104intersection_2018
** File description:
** unit test for intersection_c
*/

#include <criterion/criterion.h>
#include "./../include/intersection.h"

Test(intersection, check_returned_value_error)
{
    cr_assert_eq(intersection(5, NULL), 84);
}

Test(intersection, check_returned_value_disp_usage)
{
    char    *str[] = {"./104intersection", "-h"};

    cr_assert_eq(intersection(2, str), 0);
}

Test(intersection, check_returned_value_error_wrong_h_arg)
{
    char    *str[] = {"./104intersection", "-hh"};

    cr_assert_eq(intersection(2, str), 84);
}

Test(intersection, check_returned_value_no_number_arg)
{
    char    *str[] = {"./binary", "1", "2", "0", "ab", "-2", "3.2", "+4", "5"};

    cr_assert_eq(intersection(9, str), 84);
}

Test(intersection, check_returned_value_only_number_arg)
{
    char    *str[] = {"./binary", "1", "2", "0", "44", "-2", "3.2", "+4", "5"};

    cr_assert_eq(intersection(9, str), 0);
}
