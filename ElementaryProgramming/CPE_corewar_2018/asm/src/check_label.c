/*
** EPITECH PROJECT, 2019
** corewar
** File description:
** check if no error on label
*/

#include "asm.h"

int my_check_char(char c, char const *str);

int is_it_good(label_t *index, char *str);

int check_label(label_t *label)
{
    label_t *save = label;
    label_t *index = label;

    while (save != NULL) {
        if (is_it_good(index, save->name) == 84)
            return (84);
        index = label;
        save = save->next;
    }
    return (0);
}

char *get_called_label(char *str, int nb)
{
    int i = 0;
    char *res = malloc(sizeof(char) * my_strlen(str));

    while (str[nb] != '\0' && str[nb] != '\n'
    && str[nb] != ' ' && str[nb] != (char)SEPARATOR_CHAR) {
        res[i] = str[nb];
        i = i + 1;
        nb = nb + 1;
    }
    res[i] = '\0';
    return (res);
}

char *get_called_label_name(char *str)
{
    int nb = 0;

    if ((nb = my_check_char((char)LABEL_CHAR, str)) > 0)
        if (str[nb + 1] != '\0' && str[nb + 1] != ' '
            && str[nb + 1] != '\n' && str[nb + 1] != (char)SEPARATOR_CHAR)
            return (get_called_label(str, (nb + 1)));
    return (NULL);
}

int check_if_exist(char *str, label_t *label)
{
    char *res = NULL;
    label_t *save = label;

    if ((res = get_called_label_name(str)) == NULL)
        return (0);
    while (save != NULL) {
        if (my_strcmp(res, save->name) == 0)
            return (0);
        save = save->next;
    }
    return (84);
}

int check_called_label(char **tab)
{
    int i = 0;
    label_t *label = get_all_label(tab);

    if (verif_label(label) == 84)
        return (84);
    if (check_label(label) == 84)
        return (84);
    while (tab[i] != NULL) {
        if (check_if_exist(tab[i], label) != 0)
            return (84);
        i = i + 1;
    }
    return (0);
}
