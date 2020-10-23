/*
** EPITECH PROJECT, 2019
** PSU_my_ls_2018
** File description:
** count nb file for the -l arg with basic files
*/

#include "./../include/my_ls.h"

int get_l_total(char *path)
{
    int stack = 1;
    int returned = 0;
    struct  stat    buf;

    returned = stat(path, &buf);
    if (returned == 0) {
        stack = buf.st_blocks / 2;
    }
    return (stack);
}

void    count_nb_basic_files_for_l_arg(void)
{
    DIR *directory = opendir("./");
    struct  dirent  *dirp = malloc(sizeof(*dirp));
    int nb = 0;

    while ((dirp = readdir(directory)) != NULL) {
        if (is_him_a_usual_file_name(dirp->d_name) == 1) {
            nb = nb + get_l_total(my_assemble_str("./", dirp->d_name));
        }
    }
    closedir(directory);
    my_putstr("total ");
    my_put_nbr(nb);
    my_putchar('\n');
}
