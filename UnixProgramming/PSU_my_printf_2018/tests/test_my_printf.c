/*
** EPITECH PROJECT, 2018
** PSU_my_printf_2018
** File description:
** unit test for my_printf_2018
*/

#include "./../include/my.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(my_strdup, check_null_string)
{
    cr_assert_eq(my_strdup(NULL), NULL);
}

Test(my_strdup, check_empty_string)
{
    cr_assert_str_eq(my_strdup("\0"), "\0");
}

Test(my_printf, check_null, .init=cr_redirect_stdout)
{
    my_printf(NULL, 8);
    cr_assert_stdout_eq_str("(null)\n");
}

Test(my_printf, check_porcent_i, .init=cr_redirect_stdout)
{
    my_printf("%i",8);
    cr_assert_stdout_eq_str("8");
}

Test(my_printf, check_string, .init=cr_redirect_stdout)
{
    my_printf("hello %s.","coucou");
    cr_assert_stdout_eq_str("hello coucou.");
}

Test(my_printf, check_string_single_porcent, .init=cr_redirect_stdout)
{
    my_printf("hello %% %s.","coucou");
    cr_assert_stdout_eq_str("hello % coucou.");
}

Test(my_printf, check_string_no_pattern, .init=cr_redirect_stdout)
{
    my_printf("hello %m.");
    cr_assert_stdout_eq_str("hello %m.");
}

Test(my_printf, check_neg_number, .init=cr_redirect_stdout)
{
    my_printf("hello %i %d.", 55, -36);
    cr_assert_stdout_eq_str("hello 55 -36.");
}

Test(my_printf, check_oct_int, .init=cr_redirect_stdout)
{
    my_printf("hello %o.", 23);
    cr_assert_stdout_eq_str("hello 27.");
}

Test(my_printf, check_hexadec_int, .init=cr_redirect_stdout)
{
    my_printf("yoyo %x.", 9469554);
    cr_assert_stdout_eq_str("yoyo 907e72.");
}

Test(my_printf, check_maj_hexadec_int, .init=cr_redirect_stdout)
{
    my_printf("yoyo %X.", 9469554);
    cr_assert_stdout_eq_str("yoyo 907E72.");
}

Test(my_printf, check_both_integer_string_and_char, .init=cr_redirect_stdout)
{
    my_printf("hello %s./ %d ; %i * %c\n","coucou", 12, 69, 'e');
    cr_assert_stdout_eq_str("hello coucou./ 12 ; 69 * e\n");
}

Test(my_printf, check_with_displ_binary_base, .init=cr_redirect_stdout)
{
    my_printf("voila 16 en base binaire : %b %s ?\n", 16, "facile non");
    cr_assert_stdout_eq_str("voila 16 en base binaire : 10000 facile non ?\n");
}

Test(my_printf, check_with_displ_octale_base, .init=cr_redirect_stdout)
{
    my_printf("voila \\a en octale %S %s ?\n", "c ceci : \a", "facile");
    cr_assert_stdout_eq_str("voila \\a en octale c ceci : \\007 facile ?\n");
}

Test(my_printf, check_with_displ_octale_base_v2, .init=cr_redirect_stdout)
{
    my_printf("voila \\n en octale %S %s ?\n", "c ceci : \n", "facile");
    cr_assert_stdout_eq_str("voila \\n en octale c ceci : \\012 facile ?\n");
}
