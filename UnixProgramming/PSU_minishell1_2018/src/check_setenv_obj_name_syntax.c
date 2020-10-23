/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2018
** File description:
** check if the name of the setenv obj is correct
*/

#include "./../include/minishell.h"

int check_if_this_char_is_number(char c)
{
    if (c >= '0' && c <= '9') {
        return (0);
    }
    return (1);
}

int check_if_this_char_is_letter(char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        return (0);
    }
    return (1);
}

int check_first_char_of_this_setenv(char c)
{
    if (check_if_this_char_is_letter(c) == 1 && my_is_in(c, "_") == 0) {
        my_putstr("setenv: Variable name must begin with a letter.\n");
        return (1);
    }
    return (0);
}

int check_all_other_chars_of_this_setenv(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (check_if_this_char_is_letter(str[i]) == 1 &&
            check_if_this_char_is_number(str[i]) == 1 &&
            my_is_in(str[i], "_;.") == 0) {
            my_putstr("setenv: Variable name must begin with a letter.\n");
            return (1);
        }
        i = i + 1;
    }
    return (0);
}

int check_setenv_obj_name_syntax(char *str)
{
    if (my_strlen(str) < 1) {
        return (1);
    }
    if (check_first_char_of_this_setenv(str[0]) == 1)
        return (1);
    if (check_all_other_chars_of_this_setenv(str) == 1)
        return (1);
    return (0);
}
