/*
** EPITECH PROJECT, 2019
** my_norm_checker
** File description:
** return a double tab of what that file contain
*/

#include "./../include/my_norm.h"

char    **get_what_that_file_contain(char *path)
{
    char    **tab = NULL;
    struct  stat    buf;
    int returned = -84;
    char    *contain = NULL;
    int fd = -1;

    returned = stat(path, &buf);
    if (returned == 0) {
        contain = malloc(sizeof(char) * (buf.st_size + 1));
        contain[buf.st_size] = '\0';
        fd = open(path, O_RDONLY);
        if (fd != -1) {
            read(fd, contain, buf.st_size);
            tab = my_str_to_word_array_v2(contain, "\n");
            close(fd);
        }
        contain = free_cleanly_this_str(contain);
    }
    return (tab);
}
