/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2018
** File description:
** try to go in this path if yes change env cwd if not just return env
*/

#include "./../include/minishell.h"

char    **try_go_in_this_path(st_t st, char *path)
{
    char    *old = getcwd(NULL, 0);
    int returned = chdir(path);

    if (returned == 0) {
        st.env = put_that_in_env(st, "PWD", getcwd(NULL, 0));
        st.env = put_that_in_env(st, "OLDPWD", old);
    } else {
        my_pstrerr(path);
        if (check_if_this_is_a_directory(path) == 1)
            my_pstrerr(": Not a directory.\n");
        else
            my_pstrerr(": No such file or directory.\n");
    }
    free_cleanly_this_str(old);
    return (st.env);
}
