/*
** EPITECH PROJECT, 2019
** is this in my aliases
** File description:
** is this in my aliases
*/

#include "./../include/minishell.h"

char **put_alias_in_array(char *alias)
{
    for (int count = 0; alias[count]; count++)
        if (alias[count] == '\t') {
            alias[count] = ' ';
            break;
        }
    return (my_str_to_word_array(my_clean_string(alias), " "));
}

int is_this_in_my_aliases(st_t *st)
{
    char *file = read_this_file(my_strcat(st->pwd, "/.42rc"));
    char **array = NULL;
    char **tmp = NULL;

    if (file == NULL)
        return (0);
    array = my_str_to_word_array(file, "\n");
    for (int count = 0; array[count]; count++) {
        tmp = put_alias_in_array(array[count]);
        if (my_strcmp((st->args)[0], tmp[0]) == 0) {
            st->args = array_cat(&tmp[1], ++st->args);
            break;
        }
    }
    return (0);
}
