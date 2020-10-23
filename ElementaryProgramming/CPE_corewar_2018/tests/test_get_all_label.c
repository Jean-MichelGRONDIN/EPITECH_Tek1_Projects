/*
** EPITECH PROJECT, 2019
** corewar
** File description:
** test
*/

#include "asm.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>

char *get_label_name(char *str);

char *check_line(char *str);

int my_check_char(char c, char const *str);

label_t *get_all_label(char **tab);

Test(get_label_name, new_null)
{
    char *str = get_label_name(my_strdup(":"));

    cr_assert_eq(str, NULL);
}

Test(get_label_name, new_not_null)
{
    char *str = get_label_name(my_strdup("olalala:"));

    cr_assert_str_eq(str, "olalala");
    free(str);
}

Test(get_label_name, new_not_null_with_backline)
{
    char *str = get_label_name(my_strdup("olalala:\n"));

    cr_assert_str_eq(str, "olalala");
}

Test(my_check_char, is_not_found)
{
    int nb = my_check_char(':', "olalala");

    cr_assert_eq(nb, -1);
}

Test(my_check_char, is_found)
{
    int nb = my_check_char(':', "o:lalala");

    cr_assert_eq(nb, 1);
}

Test(check_line, line_is_good)
{
    char *str = check_line(my_strdup("olala: "));

    cr_assert_str_eq(str, "olala");
    free(str);
}

Test(check_line, line_is_good_two)
{
    char *str = check_line(my_strdup("olala:\n"));

    cr_assert_str_eq(str, "olala");
    free(str);
}

Test(check_line, line_is_good_three)
{
    char *str = check_line(my_strdup("olala:"));

    cr_assert_str_eq(str, "olala");
    free(str);
}

Test(check_line, line_is_not_good_four)
{
    char *str = check_line(my_strdup("olala:zesrdtfyuhi"));

    cr_assert_eq(str, NULL);
}

Test(check_line, line_is_not_good)
{
    char *str = check_line(my_strdup("olala; "));

    cr_assert_eq(str, NULL);
}

Test(get_all_label, there_is_no_label)
{
    label_t *label = NULL;
    char *tab[5];

    tab[0] = "oalala";
    tab[1] = "oalala";
    tab[2] = "oalala";
    tab[3] = "oalala";
    tab[4] = NULL;
    label = get_all_label(tab);
    cr_assert_eq(label, NULL);
}

Test(get_all_label, there_is_three_label)
{
    label_t *label = NULL;
    char *tab[5];

    tab[0] = my_strdup("oalala");
    tab[1] = my_strdup("olala:\n");
    tab[2] = my_strdup("oui:");
    tab[3] = my_strdup("bonsoir:\n");
    tab[4] = NULL;
    label = get_all_label(tab);
    label = label->next;
    cr_assert_str_eq(label->name, "oui");
    label = label->next;
    cr_assert_str_eq(label->name, "bonsoir");
    free(tab[0]);
    free(tab[1]);
    free(tab[2]);
    free(tab[3]);
}
