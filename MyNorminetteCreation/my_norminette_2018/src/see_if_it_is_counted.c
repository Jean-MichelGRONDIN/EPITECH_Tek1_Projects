/*
** EPITECH PROJECT, 2019
** my_norm_checker
** File description:
** add the file to the liked list if it count
*/

#include "./../include/my_norm.h"

file_t  *see_if_it_is_counted(char *name, char *dir, file_t *files)
{
    char    type = -1;
    char    *path = my_strdup(dir);

    path = my_strcat(path, name);
    if (is_this_an_allowed_obj(path) == 0) {
        if (is_this_to_avoid(name) == 0)
            return (files);
        type = find_type_of_file(name);
        if (type == 'c' || type == 'h') {
            files = add_to_list(name, dir, type, files);
        } else
            my_printf(COLOR_RED "[%s]" COLOR_RESET
            ": You may don't want to push that,\n", path);
    }
    path = free_cleanly_this_str(path);
    return (files);
}
