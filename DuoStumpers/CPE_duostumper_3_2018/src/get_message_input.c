/*
** EPITECH PROJECT, 2019
** CPE_duostumper_3_2018
** File description:
** read the message link to the option in av and return NULL if error
*/

#include "./../include/stumper.h"

#include <string.h>
char    *get_message_input(char **av)
{
    char    *str = NULL;

    if (my_strcmp(av[1], "-f") == 0)
        str = read_this_file(av[2]);
    else if (my_strcmp(av[1], "-s") == 0)
        str = strdup(av[2]);
    else {
        my_pstrerr("Wrong argument check the usage !");
        return (NULL);
    }
    if (str == NULL)
        my_pstrerr("Error failed to read the file !\n");
    return (str);
}
