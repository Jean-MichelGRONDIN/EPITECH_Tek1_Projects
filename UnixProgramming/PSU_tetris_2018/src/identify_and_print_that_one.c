/*
** EPITECH PROJECT, 2019
** PSU_tetris_2018
** File description:
** identify_and_print_that_one
*/

#include "./../include/tetris.h"

key_name_list_t **init_key_name_list(void)
{
    int nb = 5;
    key_name_list_t **list = malloc(sizeof(*list) * (nb + 1));
    int i = 0;

    while (i != nb) {
        list[i] = malloc(sizeof(**list));
        i = i + 1;
    }
    list[i] = NULL;
    list[0]->c = KEY_LEFT;
    list[0]->str = my_strdup("^EOD");
    list[1]->c = KEY_RIGHT;
    list[1]->str = my_strdup("^EOC");
    list[2]->c = KEY_UP;
    list[2]->str = my_strdup("^EOA");
    list[3]->c = KEY_DOWN;
    list[3]->str = my_strdup("^EOB");
    list[4]->c = ' ';
    list[4]->str = my_strdup("(space)");
    return (list);
}

key_name_list_t **free_key_name_list(key_name_list_t **list)
{
    int i = 0;

    if (list == NULL)
        return (list);
    while (list[i] != NULL) {
        list[i]->str = free_cleanly_this_str(list[i]->str);
        free(list[i]);
        list[i] = NULL;
    }
    free(list);
    list = NULL;
    return (list);
}

void    identify_and_print_that_one(int v)
{
    key_name_list_t **list = init_key_name_list();
    int end = 0;
    int i = 0;

    while (end == 0 && list[i] != NULL) {
        if (list[i]->c == v) {
            end = 1;
            my_putstr(list[i]->str);
        }
        i = i + 1;
    }
    if (end == 0)
        my_putchar(v);
    my_putchar('\n');
    list = free_key_name_list(list);
}