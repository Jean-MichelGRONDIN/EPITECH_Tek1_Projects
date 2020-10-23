/*
** EPITECH PROJECT, 2019
** CPE_duostumper_3_2018
** File description:
** load the file and the launch the process
*/

#include "./../include/stumper.h"

int initialise(char **av)
{
    int res = 0;
    char    *str = NULL;

    if ((str = get_message_input(av)) == NULL)
        return (84);
    if (my_str_is_int(av[3]) == 0) {
        my_pstrerr("Error the key must be an integer !\n");
        return (84);
    }
    str = cipher(str, atoi(av[3]));
    res = put_that_in_crypt_file(str);
    str = free_cleanly_this_str(str);
    return (res);
}
