/*
** EPITECH PROJECT, 2019
** CPE_corewar_2018
** File description:
** write_header
*/

#include "asm.h"

char *get_name_coment(char *file)
{
    char *str = my_strdup(file);
    int i = 0;

    for (i = 0; str[i] && str[i] != '"'; i++);
    str = str + i + 1;
    for (i = 0; str[i] && str[i] != '"'; i++);
    str[i] = 0;
    return (str);
}

char ***get_all_op(char **file)
{
    char ***res;
    int i = 0;
    char str[3] = {' ', SEPARATOR_CHAR, 0};

    if (!file)
        return (NULL);
    if (!file[0])
        return (NULL);
    for (i = 0; file[i]; i++);
    if (i <= 0)
        return (NULL);
    res = malloc(sizeof(char **) * (i + 1));
    for (i = 0; file[i]; i++)
        res[i] = my_str_to_word_array(file[i], str);
    res[i] = NULL;
    return (res);
}

char ***write_header(int cor_file, char **file)
{
    struct header_s lol;
    int i = 0;
    int n = get_this_line_index(file, COMMENT_CMD_STRING) == -1 ? 1 : 2;
    char *str = get_name_coment(file[0]);
    char ***all_op = get_all_op(file + n);

    my_memset((char *)&lol, 0, sizeof(lol));
    for (i = 0; str[i]; i++)
        lol.prog_name[i] = str[i];
    if (n == 2) {
        str = get_name_coment(file[1]);
        for (i = 0; str[i]; i++)
            lol.comment[i] = str[i];
    }
    lol.magic =  little_to_big(COREWAR_EXEC_MAGIC, 4);
    lol.prog_size = little_to_big(get_prog_size(all_op), 4);
    write(cor_file, &lol, sizeof(lol));
    return (all_op);
}
