/*
** EPITECH PROJECT, 2019
** globals.c
** File description:
** use of the comand glob
*/

#include "./../include/minishell.h"
#include <glob.h>

int is_this_a_global(char *str)
{
    for (int count = 0; str[count]; count++)
        if (str[count] == '*' || str[count] == '?' ||
            str[count] == '[' || str[count] == ']')
            return (1);
    return (0);
}

int is_there_any_globals(char **args)
{
    int nbr = 0;

    for (int count = 0; args[count]; count++)
        if (is_this_a_global(args[count]) == 1)
            nbr++;
    return (nbr);
}

char **globals(st_t st)
{
    glob_t globbuf;
    int size = my_strtab_len(st.args);
    int index = 0;

    if ((index = is_there_any_globals(st.args)) == 0 || size == 1)
        return (st.args);
    globbuf.gl_pathv = NULL;
    globbuf.gl_pathc = 0;
    globbuf.gl_offs = size - index;
    for (int count = 0; st.args[count]; count++)
        if (is_this_a_global(st.args[count]) == 1)
            glob(st.args[count], GLOB_DOOFFS | GLOB_APPEND, NULL, &globbuf);
    for (int count = 0, point = 0; st.args[count]; count++)
        if (is_this_a_global(st.args[count]) == 0) {
            globbuf.gl_pathv[point] = my_strdup(st.args[count]);
            point++;
        }
    globbuf.gl_pathv[((size - index) + globbuf.gl_pathc)] = NULL;
    st.args = my_arraydup(globbuf.gl_pathv);
    return (st.args);
}
