/*
** EPITECH PROJECT, 2018
** 102architect
** File description:
** unit test for my_str_isnum
*/

#include "./../include/architect.h"
#include <criterion/criterion.h>

Test(my_str_isnum, check_number_without_mark)
{
    char    *str = my_strdup("18562");

    cr_assert_eq(my_str_isnum(str), 1);
}

Test(my_str_isnum, check_number_positiv)
{
    char    *str = my_strdup("+18562");

    cr_assert_eq(my_str_isnum(str), 1);
}

Test(my_str_isnum, check_number_negativ)
{
    char    *str = my_strdup("-18562");

    cr_assert_eq(my_str_isnum(str), 1);
}
