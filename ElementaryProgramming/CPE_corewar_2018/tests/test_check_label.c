/*
** EPITECH PROJECT, 2019
** corewar
** File description:
** test_check_label
*/

#include "asm.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>

void put_in_list(char *lab_name, label_t **list);

int check_label(label_t *label);

char *get_called_label(char *str, int nb);

char *get_called_label_name(char *str);

int check_if_exist(char *str, label_t *label);

Test(get_called_label_name, not_a_good_name_one)
{
    char *str = get_called_label_name("olala: ");

    cr_assert_eq(str, NULL);
}

Test(get_called_label_name, not_a_good_name_two)
{
    char *str = get_called_label_name("olala:");

    cr_assert_eq(str, NULL);
}

Test(get_called_label_name, not_a_good_name_three)
{
    char *str = get_called_label_name("olala:\n");

    cr_assert_eq(str, NULL);
}

Test(get_called_label_name, not_a_good_name_four)
{
    char *str = get_called_label_name("olala:,");

    cr_assert_eq(str, NULL);
}

Test(get_called_label_name, not_a_good_name_five)
{
    char *str = get_called_label_name("olala");

    cr_assert_eq(str, NULL);
}

Test(get_called_label_name, good_name)
{
    char *str = get_called_label_name("ola:ola");

    cr_assert_str_eq(str, "ola");
}

Test(check_label, all_is_good)
{
    int nb = 0;
    label_t *label = NULL;

    put_in_list(my_strdup("olala"), &label);
    put_in_list(my_strdup("oui"), &label);
    put_in_list(my_strdup("non"), &label);
    nb = check_label(label);
    cr_assert_eq(nb, 0);
    free(label->name);
    label = label->next;
    free(label->name);
    label = label->next;
    free(label->name);
}

Test(check_label, all_is_not_good)
{
    int nb = 0;
    label_t *label = NULL;

    put_in_list(my_strdup("oui"), &label);
    put_in_list(my_strdup("oui"), &label);
    put_in_list(my_strdup("non"), &label);
    nb = check_label(label);
    cr_assert_eq(nb, 84);
    free(label->name);
    label = label->next;
    free(label->name);
    label = label->next;
    free(label->name);
}

Test(get_called_label, good_res)
{
    char *str = get_called_label(my_strdup("a:oulaoulala"), 2);

    cr_assert_str_eq(str, "oulaoulala");
    free(str);
}

Test(get_called_label, good_res_two)
{
    char *str = get_called_label(my_strdup("a:oulaoulala\n"), 2);

    cr_assert_str_eq(str, "oulaoulala");
    free(str);
}

Test(get_called_label, good_res_three)
{
    char *str = get_called_label(my_strdup("a:oulaoulala,"), 2);

    cr_assert_str_eq(str, "oulaoulala");
    free(str);
}

Test(get_called_label, good_res_four)
{
    char *str = get_called_label(my_strdup("a:oulaoulala "), 2);

    cr_assert_str_eq(str, "oulaoulala");
    free(str);
}

Test(check_called_label, res_is_good)
{
    int nb = 0;
    char *tab[6];

    tab[0] = my_strdup("l2:");
    tab[1] = my_strdup("sti r1 ,%:live ,%1");
    tab[2] = my_strdup("and r1 ,%0 ,r1");
    tab[3] = my_strdup("live: live %1");
    tab[4] = my_strdup("zjmp %:live");
    tab[5] = NULL;
    nb = check_called_label(tab);
    cr_assert_eq(nb, 0);
    free(tab[0]);
    free(tab[1]);
    free(tab[2]);
    free(tab[3]);
    free(tab[4]);
}

Test(check_called_label, res_is_not_good_first)
{
    int nb = 0;
    char *tab[6];

    tab[0] = my_strdup("l2:");
    tab[1] = my_strdup("sti r1 ,%:live ,%1");
    tab[2] = my_strdup("and r1 ,%0 ,r1");
    tab[3] = my_strdup("l2: live %1");
    tab[4] = my_strdup("zjmp %:live");
    tab[5] = NULL;
    nb = check_called_label(tab);
    cr_assert_eq(nb, 84);
    free(tab[0]);
    free(tab[1]);
    free(tab[2]);
    free(tab[3]);
    free(tab[4]);
}

Test(check_called_label, res_is_not_good_second)
{
    int nb = 0;
    char *tab[6];

    tab[0] = my_strdup("l2:");
    tab[1] = my_strdup("sti r1 ,%:oula ,%1");
    tab[2] = my_strdup("and r1 ,%0 ,r1");
    tab[3] = my_strdup("live: live %1");
    tab[4] = my_strdup("zjmp %:live");
    tab[5] = NULL;
    nb = check_called_label(tab);
    cr_assert_eq(nb, 84);
    free(tab[0]);
    free(tab[1]);
    free(tab[2]);
    free(tab[3]);
    free(tab[4]);
}

Test(check_called_label, res_is_not_good_third)
{
    int nb = 0;
    char *tab[6];

    tab[0] = my_strdup("l2");
    tab[1] = my_strdup("sti");
    tab[2] = my_strdup("and");
    tab[3] = my_strdup("live");
    tab[4] = my_strdup("zjmp");
    tab[5] = NULL;
    nb = check_called_label(tab);
    cr_assert_eq(nb, 0);
    free(tab[0]);
    free(tab[1]);
    free(tab[2]);
    free(tab[3]);
    free(tab[4]);
}

Test(check_called_label, res_is_not_good_fourth)
{
    int nb = 0;
    char *tab[6];

    tab[0] = my_strdup("l2*:");
    tab[1] = my_strdup("sti* r1 ,%:oula ,%1");
    tab[2] = my_strdup("and *r1 ,%0 ,r1");
    tab[3] = my_strdup("live:* live %1");
    tab[4] = my_strdup("zjmp %*:live");
    tab[5] = NULL;
    nb = check_called_label(tab);
    cr_assert_eq(nb, 84);
    free(tab[0]);
    free(tab[1]);
    free(tab[2]);
    free(tab[3]);
    free(tab[4]);
}
