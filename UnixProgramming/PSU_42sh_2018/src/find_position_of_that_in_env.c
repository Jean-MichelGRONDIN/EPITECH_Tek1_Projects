/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2018
** File description:
** find the index linked the the object passed by str
*/

#include "./../include/minishell.h"

int find_position_of_that_in_env(char **env, char const *obj)
{
    int obj_len = my_strlen(obj);
    char    *tmp = NULL;
    int i = 0;
    int cmp = 1;

    while (env[i] != NULL) {
        if (env[i][0] == obj[0]) {
            tmp = my_strndup(env[i], obj_len);
            cmp = my_strncmp(obj, tmp, obj_len);
            free(tmp);
            tmp = NULL;
        }
        if (cmp == 0)
            return (i);
        i = i + 1;
    }
    return (-1);
}
