/*
** EPITECH PROJECT, 2018
** 102architect
** File description:
** unit test for matrice_creation
*/

#include "./../include/architect.h"
#include <criterion/criterion.h>

Test(create_matrix_basic, check_good_returned_matrix_basic)
{
    float x = -1;
    float y = 1;
    matrix_t    *basic = create_matrix_basic(x, y);

    cr_assert_eq(basic->x, x);
    cr_assert_eq(basic->y, y);
    cr_assert_eq(basic->z, 1);
}

Test(create_matrix_empty, check_good_returned_matrix_empty)
{
    matrix_t    *empty = create_matrix_empty();

    cr_assert_eq(empty[0].x, 0);
    cr_assert_eq(empty[1].x, 0);
    cr_assert_eq(empty[2].x, 0);
    cr_assert_eq(empty[0].y, 0);
    cr_assert_eq(empty[1].y, 0);
    cr_assert_eq(empty[2].y, 0);
    cr_assert_eq(empty[0].z, 0);
    cr_assert_eq(empty[1].z, 0);
    cr_assert_eq(empty[2].z, 0);
}

Test(create_matrix_transla, check_good_returned_matrix_transla)
{
    float x = -1;
    float y = 1;
    matrix_t    *transla = create_matrix_transla(x, y);

    cr_assert_eq(transla[0].x, 1);
    cr_assert_eq(transla[1].x, 0);
    cr_assert_eq(transla[2].x, x);
    cr_assert_eq(transla[0].y, 0);
    cr_assert_eq(transla[1].y, 1);
    cr_assert_eq(transla[2].y, y);
    cr_assert_eq(transla[0].z, 0);
    cr_assert_eq(transla[1].z, 0);
    cr_assert_eq(transla[2].z, 1);
}

Test(create_matrix_scal, check_good_returned_matrix_scaling)
{
    float x = -1;
    float y = 1;
    matrix_t    *scal = create_matrix_scal(x, y);

    cr_assert_eq(scal[0].x, x);
    cr_assert_eq(scal[1].x, 0);
    cr_assert_eq(scal[2].x, 0);
    cr_assert_eq(scal[0].y, 0);
    cr_assert_eq(scal[1].y, y);
    cr_assert_eq(scal[2].y, 0);
    cr_assert_eq(scal[0].z, 0);
    cr_assert_eq(scal[1].z, 0);
    cr_assert_eq(scal[2].z, 1);
}

Test(create_matrix_rotation, check_good_returned_matrix_rotation)
{
    float x = 90;
    matrix_t    *rotation = create_matrix_rotation(x);

    put_to_finale_form(rotation);
    cr_assert_eq(rotation[0].x, 0);
    cr_assert_eq(rotation[1].x, -1);
    cr_assert_eq(rotation[2].x, 0);
    cr_assert_eq(rotation[0].y, 1);
    cr_assert_eq(rotation[1].y, 0);
    cr_assert_eq(rotation[2].y, 0);
    cr_assert_eq(rotation[0].z, 0);
    cr_assert_eq(rotation[1].z, 0);
    cr_assert_eq(rotation[2].z, 1);
}

Test(create_matrix_reflexion, check_good_returned_matrix_reflexion)
{
    float x = 270;
    matrix_t    *reflexion = create_matrix_reflexion(x);

    put_to_finale_form(reflexion);
    cr_assert_eq(reflexion[0].x, -1);
    cr_assert_eq(reflexion[1].x, 0);
    cr_assert_eq(reflexion[2].x, 0);
    cr_assert_eq(reflexion[0].y, 0);
    cr_assert_eq(reflexion[1].y, 1);
    cr_assert_eq(reflexion[2].y, 0);
    cr_assert_eq(reflexion[0].z, 0);
    cr_assert_eq(reflexion[1].z, 0);
    cr_assert_eq(reflexion[2].z, 1);
}
