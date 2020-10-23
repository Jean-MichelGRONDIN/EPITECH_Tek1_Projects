/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2018
** File description:
** try to go in this path if yes change env cwd if not just return env
*/

#include "./../include/minishell.h"

char    **try_go_in_this_path(char **env, char *path)
{
    char    *old = getcwd(NULL, 0);
    int returned = chdir(path);

    if (returned == 0) {
        env = put_that_in_env(env, "PWD", getcwd(NULL, 0));
        env = put_that_in_env(env, "OLDPWD", old);
    } else
        my_printf("%s: No such file or directory.\n", path);
    free_cleanly_this_str(old);
    return (env);
}
