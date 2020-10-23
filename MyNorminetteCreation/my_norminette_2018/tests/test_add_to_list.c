/*
** EPITECH PROJECT, 2019
** my_norm_checker
** File description:
** test for the funtion add to list
*/

#include "./../include/my_norm.h"
#include <criterion/criterion.h>

Test(add_to_list, check_when_add_one)
{
    file_t  *list = NULL;
    char    *name_t = my_strdup("main.c");
    char    *dir_t = my_strdup("src/");
    char    type_t = 'c';

    list = add_to_list(name_t, dir_t, type_t, list);
    cr_assert_str_eq(list->name, name_t);

    dir_t = my_strcat(dir_t, name_t);
    cr_assert_str_eq(list->path, dir_t);

    free_cleanly_this_str(name_t);
    free_cleanly_this_str(dir_t);
}

Test(add_to_list, check_when_add_two)
{
    file_t  *list = NULL;
    char    *name_t = my_strdup("main.c");
    char    *dir_t = my_strdup("src/");
    char    type_t = 'c';

    list = add_to_list(name_t, dir_t, type_t, list);
    cr_assert_str_eq(list->name, name_t);

    dir_t = my_strcat(dir_t, name_t);
    cr_assert_str_eq(list->path, dir_t);

    cr_assert_eq(list->type, type_t);

    name_t = free_cleanly_this_str(name_t);
    dir_t = free_cleanly_this_str(dir_t);

    name_t = my_strdup("my.h");
    dir_t = my_strdup("include/");
    type_t = 'h';
    list = add_to_list(name_t, dir_t, type_t, list);

    list = list->next;
    cr_assert_str_eq(list->name, name_t);

    dir_t = my_strcat(dir_t, name_t);
    cr_assert_str_eq(list->path, dir_t);

    cr_assert_eq(list->type, type_t);

    name_t = free_cleanly_this_str(name_t);
    dir_t = free_cleanly_this_str(dir_t);
}
