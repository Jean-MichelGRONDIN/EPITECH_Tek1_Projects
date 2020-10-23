/*
** EPITECH PROJECT, 2019
** ds
** File description:
** qsd
*/

#include "asm.h"
#include <criterion/criterion.h>

Test(good_param, live)
{
    char    *str[] = {"live", "%1", NULL};

    cr_assert_eq(check_type_para(str), 0);
}

Test(good_param, sti)
{
    char    *str[] = {"sti", "r1", "%1", "%0", NULL};

    cr_assert_eq(check_type_para(str), 0);
}

Test(good_param, label)
{
    char    *str[] = {"lol:", "sti", "r1", "%1", "%0", NULL};

    cr_assert_eq(check_type_para(str), 0);
}

Test(good_param, label_alone)
{
    char    *str[] = {"lol:", NULL};

    cr_assert_eq(check_type_para(str), 0);
}

Test(good_param, ld)
{
    char    *str[] = {"ld", "34", "r3", NULL};

    cr_assert_eq(check_type_para(str), 0);
}

Test(bad_param, ld)
{
    char    *str[] = {"ld", "r1", "r1", NULL};

    cr_assert_eq(check_type_para(str), 84);
}

Test(bad_param, sti)
{
    char    *str[] = {"sti", "r18", "%1", "%0", NULL};

    cr_assert_eq(check_type_para(str), 84);
}

Test(bad_param, sti_dir)
{
    char    *str[] = {"sti", "r1", "%1", "%h", NULL};

    cr_assert_eq(check_type_para(str), 84);
}

Test(good_param, sti_dir)
{
    char    *str[] = {"sti", "r1", "%1", "%:ko", NULL};

    cr_assert_eq(check_type_para(str), 0);
}

Test(bad_param, modulo)
{
    char    *str[] = {"sti", "r1", "%", "%:ko", NULL};

    cr_assert_eq(check_type_para(str), 0);
}

Test(add, sti_dir)
{
    char    *str[] = {"and", "20", "%10", "%30", NULL};

    cr_assert_eq(check_type_para(str), 84);
}