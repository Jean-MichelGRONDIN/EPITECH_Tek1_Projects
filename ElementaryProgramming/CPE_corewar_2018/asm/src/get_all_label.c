/*
** EPITECH PROJECT, 2019
** corewar
** File description:
** get_all_label
*/

#include "asm.h"

void put_in_list(char *lab_name, label_t **list);

char *get_label_name(char *str)
{
    char *new = NULL;
    int nb = 0;
    char sep[2] = {(char)LABEL_CHAR, 0};

    str = my_revstr(str);
    nb = count_until_line_finisher(str, sep);
    if (my_strlen(str) > 1) {
        new = my_strdup(&(str[nb + 1]));
        new = my_revstr(new);
    }
    str = my_revstr(str);
    return (new);
}

int my_check_char(char c, char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (c == str[i]) {
            return (i);
        }
        i = i + 1;
    }
    return (-1);
}

char *check_line(char *str)
{
    char *name = NULL;
    int i = 0;

    if ((i = my_check_char((char)LABEL_CHAR, str)) > 0) {
        if (str[i + 1] == '\0' || str[i + 1] == '\n' || str[i + 1] == ' ') {
            name = get_label_name(str);
            return (name);
        }
    }
    return (NULL);
}

label_t *get_all_label(char **tab)
{
    int i = 0;
    char *str = NULL;
    label_t *label = NULL;

    while (tab[i] != NULL) {
        if ((str = check_line(tab[i])) != NULL) {
            put_in_list(str, &label);
            free(str);
        }
        i = i + 1;
    }
    return (label);
}
