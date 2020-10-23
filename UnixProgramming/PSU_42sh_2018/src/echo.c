/*
** EPITECH PROJECT, 2018
** echo
** File description:
** echo
*/

#include "minishell.h"

void my_echo(int c, char *str)
{
    p_f_t tab[] = {{10, &my_pre_putstr_e}, {1, &my_pre_putstr_n},
    {100, &my_pre_putstr}, {101, &my_pre_putstr_n}, {110, &my_pre_putstr_e},
    {11, &my_pre_putstr_e_n}, {111, &my_pre_putstr_n},
    {1111, &my_pre_putstr_e_n}, {1110, &my_pre_putstr}};

    for (int  i = 0; i != 9; i++)
        (c == tab[i].cmp) ? tab[i].ptr_fonction(str) : 0;
}

int cho_car(char *str)
{
    char *str_c = "neE";
    int c = 0;
    int x = 0;
    int y = 0;
    int z = 0;
    int err = 0;
    int i = 0;

    for (i = 0; str[i]; i++) {
        for (int j = 0; str_c[j]; j++) {
            (str[i] == str_c[j] && j == 2 && x != 1) ? c = c + 100, x = 1 : 0;
            (str[i] == str_c[j] && j == 1 && y != 1) ? c = c + 10, y = 1 : 0;
            (str[i] == str_c[j] && j == 0 && z != 1) ? c = c + 1, z = 1 : 0;
            (str[i] == str_c[j]) ? err++ : 0;
        }
    }
    if (err != my_strlen(str + 1))
        return (-1);
    if (str[i - 1] == 'e' && c == 111)
        return (c + 1000);
    return ((str[i - 1] == 'E' && c == 110) ? c + 1000 : c);
}

char *str_cat(char **av, int x)
{
    char *str = NULL;

    for (int i = 1; av[i] != NULL; i++) {
        if (av[i][0] != '-'&& av[i + 1] != NULL && x == 0)
            str = my_strcat(my_strcat(str, av[i]), " ");
        if (av[i][0] != '-'&& av[i + 1] == NULL && x == 0)
            str = my_strcat(str, av[i]);
        if (av[i + 1] != NULL && x == 1)
            str = my_strcat(my_strcat(str, av[i]), " ");
        (av[i + 1] == NULL && x == 1) ? str = my_strcat(str, av[i]) : 0;
    }
    return (str);
}

char **echo_start(st_t st)
{
    int str_cmp = 0;

    if (st.args[1] == NULL) {
        my_putchar('\n');
        return (st.env);
    }
    if (st.args[1][0] == '-') {
        str_cmp = cho_car(st.args[1]);
        if (str_cmp == -1) {
            my_pre_putstr(str_cat(st.args, 1));
            return (st.env);
        }
        if (str_cmp == 0)
            my_pre_putstr(str_cat(st.args, 0));
        else
            my_echo(str_cmp, str_cat(st.args, 0));
    } else
        my_pre_putstr(str_cat(st.args, 0));
    return (st.env);
}