/*
** EPITECH PROJECT, 2019
** my_norm_checker
** File description:
** check that there 20 or less line in functions
*/

#include "./../include/my_norm.h"

int there_is_dot_comma_before_braket(char **tab, int line)
{
    int i = 0;

    while (tab[line] != NULL) {
        while (tab[line][i] != '\0') {
            if (tab[line][i] == ';')
                return (1);
            if (tab[line][i] == '{')
                return (0);
            i = i + 1;
        }
        i = 0;
        line = line + 1;
    }
    return (-1);
}

int there_is_open_brackets(char **tab, int line)
{
    int i = 0;

    while (tab[line][i] != '\0') {
        if (tab[line][i] == '(')
            return (1);
        i = i + 1;
    }
    return (0);
}

int is_a_function(char **tab, int line)
{
    int i = line;

    int braket = -1;
    int dot_comma = -1;

    if (tab[line][0] != '#')
        if (find_nb_first_spaces(tab[i]) == 0) {
            if ((braket = there_is_open_brackets(tab, i)) == 1 &&
                (dot_comma = there_is_dot_comma_before_braket(tab, i)) == 0)
                return (1);
            /* my_printf("[braket: %i, dot_comma: %i], l.%i\n", braket, dot_comma, (line + 1)); */
        }
    return (0);
}

int something_before(char *str, int i)
{
    while (i >= 0) {
        if (str[i] != ' ')
            return (1);
        i = i - 1;
    }
    return (0);
}

int is_a_valid_hook(char *str, int i)
{
    if(i < my_strlen(str)) {
        if (str[i + 1] == '\n') {
            return (1);
        } else if (something_before(str, (i - 1)) == 0)
            return (1);
    }
    return (0);
}

int is_this_function_hook(char  *str, int *nb_hook)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] == '{')
            if(is_a_valid_hook(str, i))
                *nb_hook = *nb_hook + 1;
        if (str[i] == '}')
            if(is_a_valid_hook(str, i))
                *nb_hook = *nb_hook - 1;
        i = i + 1;
    }
    if (*nb_hook > 0)
        return (1);
    else
        return (-1);
}

void    check_nb_lines_of_this_function(char **tab, int line, file_t *files)
{
    int i = line;
    int count = 0;
    int start = 0;
    int end = 0;
    int nb_hook = 0;

    while (tab[i] != NULL && end == 0) {
        if (start == 0 && is_this_function_hook(tab[i], &nb_hook) == 1)
            start = 1;
        else if (start == 1 && is_this_function_hook(tab[i], &nb_hook) == -1)
            end = 1;
        else if (start == 1)
            count = count + 1;
        i = i + 1;
    }
    if (count > 20)
        my_printf(COLOR_MAGENTA "[%s]l.%i" COLOR_RESET
        ": Function with more than 20 lines, (actual :"
        COLOR_RED "%i" COLOR_RESET ")\n", files->path, (line + 1), count);
}

void    check_function_nb_lines(char **lines, file_t *files)
{
    int i = 6;
    int len = my_strtab_len(lines);

    if (len > 6)
        while (lines[i] != NULL) {
            if (is_a_function(lines, i) == 1) {
   /* my_printf("%s, THIS LINE IS A FUNCTION !!! WHAIIII: %i\n", files->path, (i + 1)); */
                check_nb_lines_of_this_function(lines, i, files);
            }
            i = i + 1;
        }
}
