/*
** EPITECH PROJECT, 2019
** CPE_duostumper_3_2018
** File description:
** test for get message input
*/

#include "./../include/stumper.h"
#include <criterion/criterion.h>

Test(get_message_input, check_for_invalid_opt)
{
    char    * av[] = {"./cesar", "-r", "yo", "32"};

    cr_assert_eq(get_message_input(av), NULL);
}
