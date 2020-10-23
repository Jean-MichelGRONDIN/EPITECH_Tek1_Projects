/*
** EPITECH PROJECT, 2018
** 
** File description:
** 
*/

#include <criterion/criterion.h>
#include "./game.h"
#include <string.h>

Test(create_perso, check_return_value)
{
    char *name = strdup("LIVAÏ");
    int hp = 999;
    int atk = 999999999;
    int def = 0;
    t_perso GOD;

    GOD = create_perso(name, hp, atk, def);
    cr_assert_str_eq(GOD.name, name);
    cr_assert_eq(GOD.hp, hp);
    cr_assert_eq(GOD.atk, atk);
    cr_assert_eq(GOD.def, def);
}
