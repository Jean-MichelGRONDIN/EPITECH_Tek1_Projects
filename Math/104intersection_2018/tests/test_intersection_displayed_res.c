/*
** EPITECH PROJECT, 2018
** 104intersection_2018
** File description:
** test displayed result
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "./../include/intersection.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

char    *load_str_from_file(char *filepath)
{
    int fd = open(filepath, O_RDONLY);
    struct  stat    *size = malloc(sizeof(*size));
    char    *content;

    stat(filepath, size);
    content = malloc(sizeof(char) * (size->st_size + 1));
    my_memset(content, '~', size->st_size);
    content[size->st_size] = '\0';
    read(fd, content, size->st_size);
    content[size->st_size] = '\0';
    close(fd);
    free(size);
    return (content);
}

void    redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(intersection, check_when_no_intersection_ex1,
    .init=redirect_all_std, .exit_code=0)
{
    char    *cmp = load_str_from_file("./tests/ex1");
    char    *str[] = {"./104", "1", "0", "0", "2", "1", "1", "0", "1"};

    intersection(9, str);
    fflush(NULL);
    cr_assert_stdout_eq_str(cmp);
}

Test(intersection, check_when_no_intersection_ex2,
    .init=redirect_all_std, .exit_code=0)
{
    char    *cmp = load_str_from_file("./tests/ex2");
    char    *str[] = {"./104", "1", "4", "0", "3", "0", "0", "-2", "4"};

    intersection(9, str);
    fflush(NULL);
    cr_assert_stdout_eq_str(cmp);
}

Test(intersection, check_when_no_intersection_ex3,
    .init=redirect_all_std, .exit_code=0)
{
    char    *cmp = load_str_from_file("./tests/ex3");
    char    *str[] = {"./104", "2", "0", "0", "2", "1", "1", "0", "1"};

    intersection(9, str);
    fflush(NULL);
    cr_assert_stdout_eq_str(cmp);
}

Test(intersection, check_when_no_intersection_ex4,
    .init=redirect_all_std, .exit_code=0)
{
    char    *cmp = load_str_from_file("./tests/ex4");
    char    *str[] = {"./104", "3", "-1", "-1", "-1", "1", "1", "5", "30"};

    intersection(9, str);
    fflush(NULL);
    cr_assert_stdout_eq_str(cmp);
}

Test(intersection, check_when_no_intersection_ex5,
    .init=redirect_all_std, .exit_code=0)
{
    char    *cmp = load_str_from_file("./tests/ex5");
    char    *str[] = {"./104", "2", "1", "0", "0", "0", "0", "1", "1"};

    intersection(9, str);
    fflush(NULL);
    cr_assert_stdout_eq_str(cmp);
}

Test(intersection, check_when_no_intersection_my_ex1, .
    init=redirect_all_std, .exit_code=0)
{
    char    *cmp = load_str_from_file("./tests/my_ex1");
    char    *str[] = {"./104", "1", "-1", "-1", "-1", "1", "1", "5", "4"};

    intersection(9, str);
    fflush(NULL);
    cr_assert_stdout_eq_str(cmp);
}

Test(intersection, check_when_wrong_shape_v1, .init=redirect_all_std,
    .exit_code=84)
{
    char    *cmp = my_strdup("Wrong opt !\nPlease check the -h .\n");
    char    *str[] = {"./104", "1.5", "-1", "-1", "-1", "1", "1", "5", "4"};

    intersection(9, str);
    fflush(NULL);
    cr_assert_stderr_eq_str(cmp);
}

Test(intersection, check_when_wrong_shape_v2, .init=redirect_all_std,
    .exit_code=84)
{
    char    *cmp = "Wrong opt !\nPlease check the -h .\n";
    char    *str[] = {"./104", "1.00000", "-1", "-1", "-1", "1", "1", "5", "4"};

    intersection(9, str);
    fflush(NULL);
    cr_assert_stderr_eq_str(cmp);
}

Test(intersection, check_when_wrong_shape_v3, .init=redirect_all_std,
    .exit_code=84)
{
    char    *cmp = "Wrong opt !\nPlease check the -h .\n";
    char    *str[] = {"./104", "5", "-1", "-1", "-1", "1", "1", "5", "4"};

    intersection(9, str);
    fflush(NULL);
    cr_assert_stderr_eq_str(cmp);
}
