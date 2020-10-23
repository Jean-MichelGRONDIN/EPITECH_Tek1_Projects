/*
** EPITECH PROJECT, 2019
** my_norm_checker
** File description:
** check if header is here and it is not empty
*/

#include "./../include/my_norm.h"

void    print_msg_header(file_t *files)
{
    my_printf(COLOR_MAGENTA "[%s]" COLOR_RESET
    ": Missing or corrupted header,\n", files->path);
}

void    check_header(char **lines, file_t *files)
{
    int len = my_strtab_len(lines);
    int i = 1;

    if (len < 6) {
        print_msg_header(files);
    } else if (my_strcmp(lines[0], "/*\n") != 0 ||
        my_strcmp(lines[5], "*/\n") != 0) {
        print_msg_header(files);
    } else {
        while (i != 5) {
            if (my_strlen(lines[i]) < 5) {
                print_msg_header(files);
                i = 5;
            } else
                i = i + 1;
        }
    }
}
