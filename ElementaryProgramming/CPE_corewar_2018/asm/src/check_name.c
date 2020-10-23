/*
** EPITECH PROJECT, 2019
** CPE_corewar_2018
** File description:
** check_name
*/

#include "asm.h"

int check_name_pt_two(char *src, int i)
{
    char    *str = NULL;

    str = my_strndup(src, i);
    if (src[i] != '\0' &&
    my_strlen(str) == my_strlen(NAME_CMD_STRING) &&
    how_many_of_that_char(str, ' ') != 1) {
        str = free_cleanly_this_str(str);
        my_pstrerr("Invalid instruction.\n");
        return (1);
    }
    str = free_cleanly_this_str(str);
    return (0);
}

int check_name_size(char *str)
{
    int i = count_until_line_finisher(str, "\"");

    if (my_strlen(str) < my_strlen(NAME_CMD_STRING) + 1) {
        my_pstrerr("No name specified.\n");
        return (1);
    }
    if (check_name_pt_two(str, i) == 1)
        return (1);
    if (how_many_of_that_char(str, '\"') != 2 ||
    check_last_quote_place(str, my_strlen(NAME_CMD_STRING)) != 0) {
        my_pstrerr("Syntax error.\n");
        return (1);
    }
    if ((my_strlen(&(str[i + 1])) - 1) > PROG_NAME_LENGTH) {
        my_pstrerr("The program name is too long.\n");
        return (1);
    }
    return (0);
}

int check_name(char **file)
{
    char    *str = get_this_line(file, NAME_CMD_STRING);
    int res = 0;

    if (str == NULL) {
        my_pstrerr("No name specified.\n");
        return (84);
    }
    if (get_nb_time_this_line(file, NAME_CMD_STRING) != 1) {
        my_pstrerr("The name can only be defined once.\n");
        return (84);
    }
    if (check_name_size(str) == 1)
        res = 84;
    str = free_cleanly_this_str(str);
    return (res);
}
