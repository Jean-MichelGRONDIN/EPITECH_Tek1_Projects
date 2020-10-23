/*
** EPITECH PROJECT, 2019
** CPE_duostumper_3_2018
** File description:
** create the crypt file and put the string inside him
*/

#include "./../include/stumper.h"

int put_that_in_crypt_file(char *str)
{
    int fd = open("crypt", O_CREAT);

    fchmod(fd, S_IRWXU|S_IRWXG|S_IRWXO);
    close(fd);
    fd = open("./crypt", O_WRONLY);
    write(fd, str, my_strlen(str));
    fchmod(fd, S_IRUSR|S_IRGRP|S_IROTH);
    close(fd);
    return (0);
}
