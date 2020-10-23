/*
** EPITECH PROJECT, 2018
** 102architect
** File description:
** test calc functions
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "./../include/architect.h"

Test(calc_between_3_3_matrix, check_calc_pdf_exemple)
{
    matrix_t    *transla = create_matrix_transla(2, 3);
    matrix_t    *scal = create_matrix_scal(1, -2);
    matrix_t    *rotation = create_matrix_rotation(45);
    matrix_t    *reflexion = create_matrix_reflexion(30);

    transla = calc_between_3_3_matrix(transla, scal);
    transla = calc_between_3_3_matrix(transla, rotation);
    transla = calc_between_3_3_matrix(transla, reflexion);
    put_to_finale_form(transla);
    cr_assert_leq(transla[0].x, 0.97);
    cr_assert_geq(transla[1].x, -0.52);
    cr_assert_leq(transla[2].x, 0.38);
    cr_assert_leq(transla[0].y, 0.26);
    cr_assert_geq(transla[1].y, 1.93);
    cr_assert_geq(transla[2].y, 6.31);
    cr_assert_eq(transla[0].z, 0);
    cr_assert_eq(transla[1].z, 0);
    cr_assert_eq(transla[2].z, 1);
}
