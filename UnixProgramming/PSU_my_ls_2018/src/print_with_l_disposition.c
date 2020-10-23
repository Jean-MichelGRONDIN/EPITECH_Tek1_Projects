/*
** EPITECH PROJECT, 2019
** PSU_my_ls_2018
** File description:
** display infos like the -l of ls
*/

#include "./../include/my_ls.h"

void    print_rights(char *name)
{
    char    *pathname = my_assemble_str("./", name);
    struct  stat    *buf = malloc(sizeof(*buf));

    lstat(pathname, buf);
    my_putchar(S_ISREG(buf->st_mode) ? '-' : 'd');
    my_putchar(buf->st_mode & S_IRUSR ? 'r' : '-');
    my_putchar(buf->st_mode & S_IWUSR ? 'w' : '-');
    my_putchar(buf->st_mode & S_IXUSR ? 'x' : '-');
    my_putchar(buf->st_mode & S_IRGRP ? 'r' : '-');
    my_putchar(buf->st_mode & S_IWGRP ? 'w' : '-');
    my_putchar(buf->st_mode & S_IXGRP ? 'x' : '-');
    my_putchar(buf->st_mode & S_IROTH ? 'r' : '-');
    my_putchar(buf->st_mode & S_IWOTH ? 'w' : '-');
    my_putchar(buf->st_mode & S_IXOTH ? 'x' : '-');
    my_putstr(". ");
}

void    print_names(char *name)
{
    char    *pathname = my_assemble_str("./", name);
    struct  stat    *buf = malloc(sizeof(*buf));
    struct  group   *group = NULL;

    lstat(pathname, buf);
    my_putchar(' ');
    group = getgrgid(buf->st_gid);
    my_putstr(group->gr_name);
    my_putchar(' ');
    group = getgrgid(buf->st_uid);
    my_putstr(group->gr_name);
    my_putchar(' ');
}

void    print_last_modif_date(char *name)
{
    char    *pathname = my_assemble_str("./", name);
    struct  stat    buf;

    stat(pathname, &buf);
    my_putchar(' ');
    print_time_the_l_way(ctime(&buf.st_mtime));
    my_putchar(' ');
}

void    print_with_l_disposition(char *name)
{
    char    *pathname = my_assemble_str("./", name);
    struct  stat    *buf = malloc(sizeof(*buf));

    lstat(pathname, buf);
    print_rights(name);
    my_put_nbr(buf->st_nlink);
    print_names(name);
    my_put_nbr(buf->st_size);
    print_last_modif_date(name);
    my_putstr(name);
    my_putchar('\n');
}
