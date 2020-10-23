/*
** EPITECH PROJECT, 2018
** CPE_BSQ_bootstrap_2018
** File description:
** open on read only a file
*/

#include "./../include/sokoban.h"

int fs_open_file(char const *filepath)
{
    int fd;

    fd = open(filepath, O_RDONLY);
    if (fd == -1) {
        write(2, "opening file : FAILURE !\n", 25);
        exit(84);
    }
    return (fd);
}
