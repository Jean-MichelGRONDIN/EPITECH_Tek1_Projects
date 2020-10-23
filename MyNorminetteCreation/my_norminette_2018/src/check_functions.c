/*
** EPITECH PROJECT, 2019
** my_norm_checker
** File description:
** check that if u call function you don't have coded
*/

#include "./../include/my_norm.h"

char    **give_all_functions_i_know(void)
{
    int nb = 17;
    char    **tab = malloc(sizeof(char *) * (nb + 1));

    tab[0] = my_strdup("getline(");
    tab[1] = my_strdup("strcat(");
    tab[2] = my_strdup("atoi(");
    tab[3] = my_strdup("atof(");
    tab[4] = my_strdup("memset(");
    tab[5] = my_strdup("exit(");
    tab[6] = my_strdup("printf(");
    tab[7] = my_strdup("strcmp(");
    tab[8] = my_strdup("strncat(");
    tab[9] = my_strdup("strncmp(");
    tab[10] = my_strdup("strcpy(");
    tab[11] = my_strdup("strncpy(");
    tab[12] = my_strdup("strdup(");
    tab[13] = my_strdup("strndup(");
    tab[14] = my_strdup("strstr(");
    tab[15] = my_strdup("strtok(");
    tab[16] = my_strdup("strlen(");
    tab[17] = NULL;
    /* tab[] = my_strdup(""); */
    return (tab);
}

char    *cmp_with_all_functions_and_return(char *str)
{
    int i = 0;
    char    **tab = give_all_functions_i_know();;
    char    *tmp = NULL;

    while (tab[i] != NULL) {
        if (my_strncmp(str, tab[i], my_strlen(tab[i])) == 0) {
            tmp = my_strndup(tab[i], (my_strlen(tab[i]) - 1));
            tab = free_cleanly_str_tab(tab);
            return (tmp);
        }
        i = i + 1;
    }
    return (NULL);
}

int cmp_with_all_functions_i_know(char *str)
{
    int i = 0;
    char    **tab = give_all_functions_i_know();
    int len = -1;

    while (tab[i] != NULL) {
        if (my_strncmp(str, tab[i], my_strlen(tab[i])) == 0) {
            len = my_strlen(tab[i]);
            tab = free_cleanly_str_tab(tab);
            return (len);
        }
        i = i + 1;
    }
    return (-1);
}

int check_that_string_functions(char **tab, int line, int c)
{
    int res = -1;

    if (my_is_in(tab[line][c], "psaegm")) {
        if ((res = cmp_with_all_functions_i_know(&(tab[line][c]))) != -1)
            return (res);
    }
    return (-1);
}

int do_there_is_braket(char **tab, int line, int c)
{
    if (tab[line][c] == '(')
        return (0);
    return (1);
}

void    check_this_line_functions(char **tab, int line, file_t *files)
{
    int i = 0;

    while (tab[line][i] != '\0') {
        if (check_that_string_functions(tab, line, i) != -1) {
            if (i > 0) {
                if (my_is_in(tab[line][i - 1], " (),?:") == 1) {
                    my_printf(COLOR_YELLOW "[%s]l.%i" COLOR_RESET
                    ": Are you sure this function is allowed :"
                    COLOR_RED "%s" COLOR_RESET ",\n",
                    files->path, (line + 1),
                    cmp_with_all_functions_and_return(&(tab[line][i])));
                }
            } else
                my_printf(COLOR_YELLOW "[%s]l.%i" COLOR_RESET
               ": Are you sure this function is allowed :"
                COLOR_RED "%s" COLOR_RESET ",\n",
                files->path, (line + 1),
                cmp_with_all_functions_and_return(&(tab[line][i])));
        }
        i = i + 1;
    }
}

void    check_functions(char **tab, file_t *files)
{
    int i = 6;
    int len = my_strtab_len(tab);

    if (len > 6)
        while (tab[i] != NULL) {
            check_this_line_functions(tab, i, files);
            i = i + 1;
        }
}
