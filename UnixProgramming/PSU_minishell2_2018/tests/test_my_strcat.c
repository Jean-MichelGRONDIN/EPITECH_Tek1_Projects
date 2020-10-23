/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2018
** File description:
** test my strcat
*/

#include "./../include/my.h"
#include <criterion/criterion.h>
#include <stdlib.h>

Test(my_strcat, check_str_cat_v1)
{
    char    *one = my_strdup("hello, ");
    char    *two = my_strdup("les amis");

    one = my_strcat(one, two);
    free_cleanly_this_str(two);
    cr_assert_str_eq(one, "hello, les amis");
    free_cleanly_this_str(one);
}

Test(my_strcat, check_str_cat_v2)
{
    char    *one = my_strdup("HELLO");
    char    *two = my_strdup("hey brother");

    one = my_strcat(one, two);
    free_cleanly_this_str(two);
    cr_assert_str_eq(one, "HELLOhey brother");
    free_cleanly_this_str(one);
}

Test(my_strcat, check_when_send_null_v1)
{
    char    *one = my_strdup("hello, ");
    char    *two = NULL;

    one = my_strcat(one, two);
    free_cleanly_this_str(two);
    cr_assert_str_eq(one, "hello, ");
    free_cleanly_this_str(one);
}

Test(my_strcat, check_when_send_null_v2)
{
    char    *one = NULL;
    char    *two = my_strdup("hey");

    one = my_strcat(one, two);
    free_cleanly_this_str(two);
    cr_assert_eq(one, NULL);
    free_cleanly_this_str(one);
}
