/*
** EPITECH PROJECT, 2019
** asm
** File description:
** check_comment
*/

#include "asm.h"

int check_comment_pt_two(char *src, int i)
{
    char    *str = NULL;

    str = my_strndup(src, i);
    if (src[i] != '\0' &&
    my_strlen(str) == my_strlen(COMMENT_CMD_STRING) &&
    how_many_of_that_char(str, ' ') != 1) {
        str = free_cleanly_this_str(str);
        my_pstrerr("Invalid instruction.\n");
        return (1);
    }
    str = free_cleanly_this_str(str);
    return (0);
}

int check_comment_size(char *str)
{
    int i = count_until_line_finisher(str, "\"");

    if (my_strlen(str) < my_strlen(COMMENT_CMD_STRING) + 1) {
        my_pstrerr("No comment specified.\n");
        return (1);
    }
    if (check_comment_pt_two(str, i) == 1)
        return (1);
    if (how_many_of_that_char(str, '\"') != 2 ||
    check_last_quote_place(str, my_strlen(COMMENT_CMD_STRING)) != 0) {
        my_pstrerr("Syntax error.\n");
        return (1);
    }
    if ((my_strlen(&(str[i + 1])) - 1) > COMMENT_LENGTH) {
        my_pstrerr("The comment is too long.\n");
        return (1);
    }
    return (0);
}

int check_comment_place_with_name(char **file)
{
    int name_pos = get_this_line_index(file, NAME_CMD_STRING);
    int comment_pos = get_this_line_index(file, COMMENT_CMD_STRING);

    if (name_pos == -1 || (name_pos + 1) != comment_pos) {
        my_pstrerr("The comment must be just after the name.\n");
        return (1);
    }
    return (0);
}

int check_comment(char **file)
{
    char    *str = get_this_line(file, COMMENT_CMD_STRING);
    int res = 0;

    if (str == NULL) {
        my_pstrerr("Warning: No comment specified.\n");
        return (0);
    }
    if (get_nb_time_this_line(file, COMMENT_CMD_STRING) != 1) {
        my_pstrerr("The comment can only be defined once.\n");
        return (84);
    }
    if (check_comment_place_with_name(file) == 1)
        res = 84;
    if (res == 0 && check_comment_size(str) == 1)
        res = 84;
    str = free_cleanly_this_str(str);
    return (res);
}