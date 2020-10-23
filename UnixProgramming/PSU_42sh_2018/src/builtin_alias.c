/*
** EPITECH PROJECT, 2019
** builtin
** File description:
** alias
*/

#include "./../include/minishell.h"

void find_this_in_my_aliases(char *alias, char *arg)
{
    char *str = my_strdup(alias);
    char **tmp = NULL;

    tmp = my_str_to_word_array(alias, "\t");
    if (my_strcmp(tmp[0], arg) == 0) {
        my_putstr(tmp[1]);
        my_putchar('\n');
    }
    free_cleanly_str_tab(tmp);
    free_cleanly_this_str(str);
}

char *replace_the_alias(char **arg)
{
    char *str = NULL;

    for (int count = 0; arg[count]; count++) {
        str = my_strcat(str, arg[count]);
        str = my_strcat(str, " ");
    }
    for (int count = 0; str[count]; count++)
        if (str[count] == ' ') {
            str[count] = '\t';
            break;
        }
    return (str);
}

void add_this_to_my_aliases(char **arg, char *pwd)
{
    char *str = read_this_file(my_strcat(pwd, "/.42rc"));
    int index = 0;
    char **array = NULL;

    if (str == NULL)
        return;
    array = my_str_to_word_array(str, "\n");
    for (int count = 0; array[count]; count++)
        if (my_strncmp(array[count], arg[0], my_strlen(arg[0])) == 0) {
            free_cleanly_this_str(array[count]);
            array[count] = replace_the_alias(arg);
            index = 1;
        }
    if (index == 1)
        write_alias_in_file(array, my_strcat(pwd, "/.42rc"));
    else
        write_end_of_file(replace_the_alias(arg), my_strcat(pwd, "/.42rc"));
}

char **builtin_alias(st_t st)
{
    int size = my_strtab_len(st.args);
    char *file = read_this_file(my_strcat(st.pwd, "/.42rc"));
    char **array = NULL;

    if (file == NULL)
        return (st.env);
    array = my_str_to_word_array(file, "\n");
    if (size == 1)
        my_putstr(file);
    else if (size == 2)
        for (int count = 0; array[count]; count++)
            find_this_in_my_aliases(array[count], st.args[1]);
    else
        add_this_to_my_aliases(&st.args[1], st.pwd);
    return (st.env);
}
